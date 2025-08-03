// [Function] AIassistant main dialog implementation file,
// including UI events, pipeline communication with llama-cli, 
// RAG file import, voice recording/recognition,
// OCR/PDF text extraction and other functions.
// ===== Header file and library configuration: Provides dependencies
// such as MFC, COM, audio devices, Shell/path tools, etc. =====
// [Function] Imports required system/third-party header files; 
// links to libraries such as Shlwapi/Ole32
#include "pch.h"
#include <atlbase.h>
#include <atlconv.h>
#include "framework.h"
#include "AIassistant.h"
#include "AIassistantDlg.h"
#include "afxdialogex.h"
#include <memory> 
#include<string>
#include <Shellapi.h>      // DragAcceptFiles, HDROP
#include <Shlwapi.h>       // PathFileExistsW, PathFindExtensionW
#pragma comment(lib, "Shlwapi.lib")
#include <mmdeviceapi.h>
#include <functiondiscoverykeys_devpkey.h>
#include <sstream>  
#include <windows.h>

#pragma comment(lib, "Ole32.lib")
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// [Function] Runs an external command and **captures** the standard output, 
// returning it as UTF-8/ANSI (CStringA).
// Commonly used to call Python/toolchains
// (such as RAG query, pandoc, pdftotext, etc.) and get their output.
CStringA RunCmdCaptureStdout(const CString& cmd)
{
	SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
	HANDLE hRead{}, hWrite{};
	CreatePipe(&hRead, &hWrite, &sa, 0);
	SetHandleInformation(hRead, HANDLE_FLAG_INHERIT, 0);

	STARTUPINFOW si{ sizeof(si) };
	PROCESS_INFORMATION pi{};
	si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
	si.hStdOutput = hWrite;
	si.hStdError = hWrite;
	si.wShowWindow = SW_HIDE;

	wchar_t bufCmd[1024];  wcsncpy_s(bufCmd, cmd, _TRUNCATE);
	if (!CreateProcessW(nullptr, bufCmd, nullptr, nullptr, TRUE,
		CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi))
	{
		CloseHandle(hRead); CloseHandle(hWrite);
		return "cmd fail";
	}
	CloseHandle(hWrite);

	std::string out; char tmp[256]; DWORD n{};
	while (ReadFile(hRead, tmp, sizeof(tmp), &n, nullptr) && n)
		out.append(tmp, n);
	CloseHandle(hRead);

	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
	return CStringA(out.c_str(), (int)out.size());
}

// === Get Program Directory ===
//[Function]Get the directory where the current executable file is located,
// which is convenient for locating relative path resources (models, tools, kb, etc.)
static CString GetExeDir()
{
	wchar_t buf[MAX_PATH]{};
	GetModuleFileNameW(nullptr, buf, MAX_PATH);
	PathRemoveFileSpecW(buf);
	return CString(buf);
}

// === If the directory does not exist, create it ===
static void EnsureDir(const CString& path)
{
	if (!PathFileExistsW(path))
		CreateDirectoryW(path, nullptr);
}

// [Function] Enumerates the system's default microphones 
// and reads their "friendly names" (returns "default" if not found).
// Depends on MMDeviceEnumerator + PropertyStore.
static CString GetDefaultMicName()
{
	CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	CComPtr<IMMDeviceEnumerator> enumerator;
	if (FAILED(enumerator.CoCreateInstance(__uuidof(MMDeviceEnumerator)))) return L"default";

	CComPtr<IMMDevice> device;
	if (FAILED(enumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &device))) return L"default";

	CComPtr<IPropertyStore> props;
	if (FAILED(device->OpenPropertyStore(STGM_READ, &props))) return L"default";

	PROPVARIANT pv; PropVariantInit(&pv);
	if (SUCCEEDED(props->GetValue(PKEY_Device_FriendlyName, &pv)))
	{
		CString name(pv.pwszVal);
		PropVariantClear(&pv);
		return name;
	}
	CoUninitialize();
	return L"default";
	
}


struct LlamaThreadParam {
	CString cmd;
	HWND    hWnd;
};

// ---------------- start one time，keep contuinously interaction ----------------
// [Function] Model background thread: establish a **bidirectional pipe** (stdin/stdout) with llama-cli.exe
// Read its output, filter irrelevant logs by line, forward to UI; maintain "working/done" status.
UINT CLlamaThread(LPVOID pParam)
{
	CAIassistantDlg* dlg = reinterpret_cast<CAIassistantDlg*>(pParam);

	// 1. Build a bidirectional pipeline
	SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
	HANDLE hStdOutR = nullptr, hStdOutW = nullptr;
	HANDLE hStdInR = nullptr, hStdInW = nullptr;

	CreatePipe(&hStdOutR, &hStdOutW, &sa, 0);
	SetHandleInformation(hStdOutR, HANDLE_FLAG_INHERIT, 0);
    CreatePipe(&hStdInR, &hStdInW, &sa, 0);
	SetHandleInformation(hStdInW, HANDLE_FLAG_INHERIT, 0);
	// 2. Start llama-cli
	STARTUPINFOW        si{ sizeof(si) };
	PROCESS_INFORMATION pi{};
	si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.hStdOutput = hStdOutW;
	si.hStdError = hStdOutW;
	si.hStdInput = hStdInR;
    /* 1 First, put the command line into CString (or std::wstring) - this is the "read-only area" */
	CString cmdLine =
		L"llama-cli.exe "
		L"--simple-io "          // Ensure that each token is flushed immediately
		L"--multiline-input "
		L"-m \"granite-3.3-2b-instruct-Q4_K_S.gguf\"";
    /* 2 Then copy it to a local writable buffer so that CreateProcess can modify it. */
	wchar_t cmdbuf[1024];
	wcscpy_s(cmdbuf, cmdLine);      // buf now is writable
   /* 3 Pass buf in, don't force a constant pointer */
	BOOL ok = CreateProcessW(
		nullptr, cmdbuf,            
		nullptr, nullptr, TRUE,
		CREATE_NO_WINDOW,
		nullptr, nullptr,
		&si, &pi);
	CloseHandle(hStdOutW);  // Write to the child process
	CloseHandle(hStdInR);   // Read end to child process

	if (!ok) {
		PostMessage(dlg->m_hWnd, WM_LLAMA_APPEND, 0,
			(LPARAM)new CString(L"❌ fail to initiate llama-cli \r\n"));
		CloseHandle(hStdOutR);
		CloseHandle(hStdInW);
		return 0;
	}

	// Return the writable stdin handle and process handle to the main thread; set "ready".
	dlg->m_hStdInW = hStdInW;
	dlg->m_hProcess = pi.hProcess;
	dlg->m_llamaReady = true;
	CloseHandle(pi.hThread);               

	std::string pending;          
	char  outBuf[4096];
	DWORD n;
	USES_CONVERSION;

	// [Function] Read stdout in a loop, concatenate by line, filter out 
	// noise logs, wrap them uniformly, and then deliver them to the edit box.
	while (ReadFile(hStdOutR, outBuf, sizeof(outBuf), &n, nullptr) && n)
	{
		pending.append(outBuf, n);                 // 1 Accumulate first

		size_t pos;
		while ((pos = pending.find('\n')) != std::string::npos)
		{
			std::string one = pending.substr(0, pos + 1);   // 1 Get a whole line
			pending.erase(0, pos + 1);
			CString chunk = CA2W(one.c_str(), CP_UTF8);
			chunk.Replace(L"\r", L"");             // Unify line endings

			/* 3 Filter out the log prefixes don’t want */
			if (chunk.Find(L"build:") == 0 || chunk.Find(L"main:") == 0 ||
				chunk.Find(L"llama_") == 0 || chunk.Find(L"print_") == 0 ||
				chunk.Find(L"load_tensors:") == 0 || chunk.Find(L"llama_context:") == 0 ||
				chunk.Find(L"common_init_from_params:") == 0)
				continue;

			/* 4 simple-io 
				   > hello ␊              
				   > ␊                     */
			if (chunk == L"> \r\n" || chunk == L">\r\n")
				continue;                       // Contains only prompts, discard
			if (chunk.GetLength() >= 2 && chunk[0] == L'>' && chunk[1] == L' ')
				chunk = chunk.Mid(2);


			chunk.Replace(L"\n", L"\r\n");      // Windows line endings

			if (!chunk.IsEmpty())
			{
				// Insert only once in the first line of the answer
				if (dlg->m_needAnswerLabel) {          
					chunk = L"\r\nANSWER: " + chunk;
					dlg->m_needAnswerLabel = false;
				}
				

				PostMessage(dlg->m_hWnd, WM_LLAMA_APPEND, 0,
					(LPARAM)new CString(chunk));
			}
		}
	}

	CloseHandle(hStdOutR);
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);

	dlg->m_llamaReady = false;
	PostMessage(dlg->m_hWnd, WM_LLAMA_FINISHED, 0, 0);
	return 0;
}



// CAboutDlg dialog box for the application's About menu item
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    

	
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)

END_MESSAGE_MAP()


// CAIassistantDlg dialog box
// [Function] Main dialog class: member control binding, 
// message mapping (buttons, resizing, drag-and-drop, model output, etc.).
// Contains core logic such as model interaction, RAG, recording/recognition, etc.
CAIassistantDlg::CAIassistantDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_AIASSISTANT_DIALOG, pParent)

{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}
void CAIassistantDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT4, m_editOutput);
	DDX_Control(pDX, IDC_EDIT5, m_editInput);
	DDX_Control(pDX, IDC_BUTTON1, m_btnSend);
	DDX_Control(pDX, IDC_BUTTON_RECORD, m_btnSpeech);   
	DDX_Control(pDX, IDC_BUTTON_RAG, m_btnRag);

}
BEGIN_MESSAGE_MAP(CAIassistantDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT5, &CAIassistantDlg::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT4, &CAIassistantDlg::OnEnChangeEdit4)
	ON_BN_CLICKED(IDC_BUTTON1, &CAIassistantDlg::OnBnClickedButton1)
	ON_MESSAGE(WM_LLAMA_APPEND, &CAIassistantDlg::OnLlamaAppend)
	ON_MESSAGE(WM_LLAMA_FINISHED, &CAIassistantDlg::OnLlamaFinished)
	ON_WM_SIZE()
	ON_WM_DROPFILES()        
	ON_BN_CLICKED(IDC_BUTTON_RECORD, &CAIassistantDlg::OnBnClickedButtonRecord)
	ON_BN_CLICKED(IDC_BUTTON_RAG, &CAIassistantDlg::OnBnClickedButtonRag)
END_MESSAGE_MAP()


// CAIassistantDlg message handler
// [Function] Initialize the dialog box: add the "About" menu, keep the window on top, allow dragging and dropping files, etc.
BOOL CAIassistantDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}// Set the window to Top-Most without changing size or position
	SetWindowPos(&wndTopMost, 0, 0, 0, 0,
		SWP_NOMOVE | SWP_NOSIZE);
	// Make the dialog accept drag and drop files
	DragAcceptFiles(TRUE);
	
	return TRUE;
	SetIcon(m_hIcon, TRUE);		
	SetIcon(m_hIcon, FALSE);		


	
	DWORD style = ::GetWindowLong(m_editOutput.GetSafeHwnd(), GWL_STYLE);
	style &= ~WS_TABSTOP; 
	::SetWindowLong(m_editOutput.GetSafeHwnd(), GWL_STYLE, style);


	return TRUE;  // Returns TRUE unless focus is set to the control
}

// [Function] Process system commands: When you click "About", the About dialog box pops up.
void CAIassistantDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// [Function] Draw the icon (when the window is minimized), otherwise use the default drawing.
void CAIassistantDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // The device context for drawing

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center the icon in the client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw Icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//When the user drags the minimized window, the system calls this function to get the cursor
HCURSOR CAIassistantDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CAIassistantDlg::OnEnChangeEdit5()
{
}
void CAIassistantDlg::OnEnChangeEdit4()
{
}

// [Function] "Send" button: read input → (if in RAG mode, perform search enhancement) 
// → send the final prompt
// Write to the output box and mark it as "working" →
// append "/\n" according to the protocol → start/reuse background thread 
// → through stdin
// Send the request to llama-cli.
void CAIassistantDlg::OnBnClickedButton1()
{
	/* ---------- 1 Get the content of the input box ---------- */
	CString prompt;
	m_editInput.GetWindowTextW(prompt);
	prompt.Trim();
	if (prompt.IsEmpty()) {
		if (m_ragMode) {                 
			m_ragMode = false;
			m_btnRag.EnableWindow(TRUE);
		}
		return;
	}
	// [Function] RAG branch: Call rag_query.exe to generate prompt words 
	// with search results as the final prompt.
	CString userPrompt;      // The final prompt sent to the model
	if (m_ragMode)                   // RAG Branch
	{   // Path preparation → Assemble command line → Set UTF-8 environment 
		//→ Run and capture stdout → As the final prompt.
		// 1 Path preparation
		CString exeDir = GetExeDir();
		CString ragExe = exeDir + L"\\rag_query.exe";
		CString kbDir = exeDir + L"\\kb";
		EnsureDir(kbDir);

		// 2 Assemble command line (UTF-8 output)
		CString cmdLine;
		cmdLine.Format(L"\"%s\" \"%s\" --kb \"%s\"",
			(LPCTSTR)ragExe, (LPCTSTR)prompt, (LPCTSTR)kbDir);
		SetEnvironmentVariableW(L"PYTHONUTF8", L"1");
		SetEnvironmentVariableW(L"PYTHONIOENCODING", L"utf-8");
		// 3 Run and capture stdout
		CStringA outA = RunCmdCaptureStdout(cmdLine);     
		SetEnvironmentVariableW(L"PYTHONUTF8", nullptr);
		SetEnvironmentVariableW(L"PYTHONIOENCODING", nullptr);
		CString  ragPrompt = CA2W(outA, CP_UTF8);       

		// 4 As the final prompt to the model
		userPrompt = ragPrompt;

		// 5 After this round, turn off the RAG mode and reset the button
		m_ragMode = false;
		m_btnRag.EnableWindow(TRUE);
	}
	/* ==========================================================
	   Normal mode: replace the document/image path in the prompt with plain text
	   ========================================================== */
	else
	{
		CString final;
		int pos = 0;
		while (pos < prompt.GetLength())
		{
			int next = prompt.Find(L' ', pos);
			if (next == -1) next = prompt.GetLength();
			CString token = prompt.Mid(pos, next - pos);
			// If the path exists, select PDF/DOCX to text or image OCR based on the extension
			if (PathFileExistsW(token))
			{
				CString ext = PathFindExtensionW(token); ext.MakeLower();

				if (ext == L".pdf" || ext == L".docx")
					token = ConvertFileToText(token);
				else if (ext == L".png" || ext == L".jpg" || ext == L".jpeg" ||
					ext == L".bmp" || ext == L".tif" || ext == L".tiff")
					token = ConvertImageToText(token);
			}
			final += token;
			if (next < prompt.GetLength()) final += L' ';
			pos = next + 1;
		}
		userPrompt = final;                               //prompt in normal mode
	}

	/* ---------- 2  Write the question in the output box and mark it "working" ---------- */
	m_editOutput.SetSel(-1, -1);
	CString problemLine = L"PROBLEM: " + userPrompt + L"\r\n";
	m_editOutput.ReplaceSel(problemLine);

	CString tag = L"\r\n----------The Model Is Working,Please Wait…----------\r\n";
	m_infStartCharPos = m_editOutput.LineIndex(m_editOutput.GetLineCount() - 1);
	m_editOutput.ReplaceSel(tag);
	m_inferencing = true;

	m_editOutput.LineScroll(INT_MAX);
	m_needAnswerLabel = true;

	/* ---------- 3 llama-cli protocol: add "/\n" at the end ---------- */
	userPrompt += L"\n/\n";
	m_editInput.SetWindowTextW(L"");                      // Clear the input box

	/* ---------- 4 Start or reuse model background Thread threads---------- */
	if (!m_llamaReady)
	{
		m_btnSend.EnableWindow(FALSE);
		//m_editOutput.SetWindowTextW(L"");
		m_hThread = AfxBeginThread(CLlamaThread, this)->m_hThread;

		for (int i = 0; i < 30 && !m_llamaReady; ++i) Sleep(100);
		m_btnSend.EnableWindow(TRUE);
		if (!m_llamaReady) return;
	}

	/* ---------- 5 send prompt to the model via stdin ---------- */
	CStringA utf8 = CW2A(userPrompt, CP_UTF8);
	const char* p = utf8.GetString();
	DWORD       rem = (DWORD)utf8.GetLength();

	while (rem > 0)
	{
		DWORD chunk = (rem < 60 * 1024u) ? rem : 60 * 1024u;
		DWORD wr = 0;
		if (!WriteFile(m_hStdInW, p, chunk, &wr, nullptr) || wr == 0)
			break;
		p += wr;
		rem -= wr;
	}
}

// [Function] Window adaptive layout: rearrange the output box/input box/three buttons 
// according to the current client area size.
void CAIassistantDlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	if (!m_editInput.GetSafeHwnd() || !m_editOutput.GetSafeHwnd())
		return;                           

	const int padding = 10;
	const int spacing = 8;
	const int btnH = 30;              // Button Height
	const int btnW = 173;              // Button Width

	// Calculate the available height 
	// (excluding top and bottom padding and the Send button)
	int availH = cy - padding * 3 - btnH;
	int outputH = availH / 2;           
	int inputH = availH - outputH;     

	// --- Output box(IDC_EDIT4  -> m_editOutput)
	m_editOutput.MoveWindow(
		padding,
		padding,
		cx - 2 * padding,
		outputH);

	// --- Input box (IDC_EDIT5 -> m_editInput)
	m_editInput.MoveWindow(
		padding,
		padding + outputH + spacing,
		cx - 2 * padding,
		inputH);

	// --- Send button
	m_btnSend.MoveWindow(
		cx - padding - btnW,
		cy - padding - btnH,
		btnW,
		btnH);
	m_btnSpeech.MoveWindow(
		cx - padding - btnW * 2 - spacing,
		cy - padding - btnH,
		btnW,
		btnH);
	m_btnRag.MoveWindow(
		cx - padding - btnW * 3 - spacing * 2,
		cy - padding - btnH,
		btnW, btnH);
}

// [Function] Receives model output appended by the background thread:
// - Removes the "Working" prompt during the first output;
// - Appends text to the output box and automatically scrolls to the bottom.
void CAIassistantDlg::OnDropFiles(HDROP hDrop)
{
	wchar_t path[MAX_PATH]{};
	DragQueryFileW(hDrop, 0, path, MAX_PATH);//get file path
	DragFinish(hDrop);

	if (m_ragMode) {                      //  Special branches when RAG is enabled
		ImportFileToKb(path);
		CString note;
		note.Format(L"《%s》 has been added to the knowledge library\r\n", (LPCTSTR)path);
		m_editInput.ReplaceSel(note);     // Only give prompts, no plain text
		m_editInput.SetSel(-1, -1);
		m_lastRagFile = path;             
		return;
	}

	CString ext = PathFindExtensionW(path); ext.MakeLower();

	CString txt;
	if (ext == L".pdf" || ext == L".docx")
		txt = ConvertFileToText(path);
	else if (ext == L".png" || ext == L".jpg" || ext == L".jpeg" ||
		ext == L".bmp" || ext == L".tif" || ext == L".tiff")
		txt = ConvertImageToText(path);          //
	else
		txt.Format(L"[Unsupported file type: %s]\r\n", (LPCTSTR)ext);

	m_editInput.ReplaceSel(txt);
	m_editInput.ReplaceSel(L"\r\n");
	m_editInput.SetSel(-1, -1);
}

// [Function] The restore button is available when the background thread ends.
LRESULT CAIassistantDlg::OnLlamaAppend(WPARAM, LPARAM lParam)
{
	std::unique_ptr<CString> p(reinterpret_cast<CString*>(lParam));
	if (p->IsEmpty()) return 0;

	// —— When first receive model output, filter the line "inferencing..."——  
	if (m_inferencing && m_infStartCharPos >= 0)
	{
		CString tag = L"\r\n----------The Model Is Working,Please Wait…----------\r\n";
		m_editOutput.SetSel(m_infStartCharPos,
			m_infStartCharPos + tag.GetLength());
		m_editOutput.ReplaceSel(L"");
		m_inferencing = false;
		m_infStartCharPos = -1;
	}

	// —— Append this model output——  
	m_editOutput.SetSel(-1, -1);
	m_editOutput.ReplaceSel(*p, TRUE);

	m_editOutput.LineScroll(m_editOutput.GetLineCount());


	return 0;
}
// [Function] The restore button is available when the background thread ends.
LRESULT CAIassistantDlg::OnLlamaFinished(WPARAM, LPARAM)
{
	m_btnSend.EnableWindow(TRUE);
	m_btnRag.EnableWindow(TRUE);
	return 0;
}

// [Function] Convert PDF/DOCX to **plain text**:
// - PDF → pdftotext.exe; DOCX → pandoc.exe; capture their stdout as the return value.
// - Returns prompt text if failure occurs.
CString ConvertFileToText(const CString& path)
{
	CString ext = PathFindExtensionW(path); 
	ext.MakeLower();
	CString cmd;

	if (ext == L".pdf")
		cmd.Format(L"tools\\pdftotext.exe -layout -enc UTF-8 \"%s\" -", path);

	else if (ext == L".docx")
		cmd.Format(L"tools\\pandoc.exe -t plain \"%s\"", path);
	else
		return L"[Unsupported file type]\r\n";
	// Create a child process and capture stdout
	SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
	HANDLE hRead = nullptr, hWrite = nullptr;
	CreatePipe(&hRead, &hWrite, &sa, 0);
	SetHandleInformation(hRead, HANDLE_FLAG_INHERIT, 0);

	STARTUPINFOW si{ sizeof(si) };
	PROCESS_INFORMATION pi{};
	si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.hStdOutput = hWrite;
	si.hStdError = hWrite;

	wchar_t buf[1024]; wcscpy_s(buf, cmd);

	if (!CreateProcessW(nullptr, buf, nullptr, nullptr, TRUE,
		CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi))
	{
		CloseHandle(hRead); CloseHandle(hWrite);
		return L"[Fail to launch converter]\r\n";
	}

	CloseHandle(hWrite);   // Write to the child process

	std::string out; char tmp[4096]; DWORD n;
	while (ReadFile(hRead, tmp, sizeof(tmp), &n, nullptr) && n)
		out.append(tmp, n);

	CloseHandle(hRead);
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess); CloseHandle(pi.hThread);

	return CString(CA2W(out.c_str(), CP_UTF8));
}

// [Function] Image OCR → Plain Text:
// - Calls dist\\pocr_cli.exe (PaddleOCR wrapper); captures stdout;
// - Line-level cleaning: retains only the text after the last tab on each line 
// (excluding bounding box coordinates/confidence).
CString ConvertImageToText(const CString& path)
{
	//  Write the executable file as a relative path 
	// so that it can be taken away with the program when it is released
	CString cmd;
	cmd.Format(L"dist\\pocr_cli.exe -i \"%s\"", path);
	//  The following is copied  from ConvertFileToText
	SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
	HANDLE hRead = nullptr, hWrite = nullptr;
	CreatePipe(&hRead, &hWrite, &sa, 0);
	SetHandleInformation(hRead, HANDLE_FLAG_INHERIT, 0);

	STARTUPINFOW si{ sizeof(si) };
	PROCESS_INFORMATION pi{};
	si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.hStdOutput = hWrite;
	si.hStdError = hWrite;

	wchar_t buf[1024]; wcscpy_s(buf, cmd);

	if (!CreateProcessW(nullptr, buf, nullptr, nullptr, TRUE,
		CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi))
	{
		CloseHandle(hRead); CloseHandle(hWrite);
		return L"[Fail to launch PaddleOCR]\r\n";
	}
	CloseHandle(hWrite);   // Write to the child process
	std::string out; char tmp[4096]; DWORD n;
	while (ReadFile(hRead, tmp, sizeof(tmp), &n, nullptr) && n)
		out.append(tmp, n);
	CloseHandle(hRead);
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess); CloseHandle(pi.hThread);
	// By default, PaddleOCR will output bounding-box + confidence + text
	// just want plain text, can simply filter after the last TAB in a line
	// Here is a demonstration: split each line by '\t' and keep only the last field
	// Clean stdout, only concatenate plain text
	CString all = CA2W(out.c_str(), CP_UTF8);
	CStringArray lines; int cur = 0;
	while (cur < all.GetLength())
	{
		int e = all.Find(L"\n", cur);
		if (e == -1) e = all.GetLength();
		CString ln = all.Mid(cur, e - cur); ln.Trim();
		int tab = ln.ReverseFind(L'\t');
		if (tab >= 0) ln = ln.Mid(tab + 1);
		if (!ln.IsEmpty()) lines.Add(ln);
		cur = e + 1;
	}
	CString joined;
	for (int i = 0; i < lines.GetCount(); ++i)
		joined += lines[i] + L"\r\n";
	return joined;
}
// [Function] "Speech" button: A single button press 
// controls the "Start Recording/Stop Recording and Recognition" state.
// - Start: Use ffmpeg to pull the stream from the default microphone 
// and save it as a 16k mono WAV file; the UI enters recording mode;
// - Stop: Write 'q' to ffmpeg stdin to exit → 
// Call whisper_speech_recognition.exe for recognition →
// Merge the deduplicated subtitle lines → Write them back to the input box; the UI resumes.
void CAIassistantDlg::OnBnClickedButtonRecord()
{
	// Path: Fixed to the Release\ directory
    CString base = L"Release\\";
    CString audioPath = base + L"audio.wav";
    // ========= 1 Recording → Click = Stop =========
    if (m_isRecording)
    {
        // 1 Send 'q' to ffmpeg stdin (quit)
		m_btnSpeech.EnableWindow(FALSE);
		m_btnSpeech.RedrawWindow(nullptr, nullptr,
			RDW_INVALIDATE | RDW_UPDATENOW | RDW_FRAME | RDW_ERASE);
        if (m_hFfmpegStdin)
        {
            const char q = 'q';
            DWORD wr;
            WriteFile(m_hFfmpegStdin, &q, 1, &wr, nullptr);
            CloseHandle(m_hFfmpegStdin);
            m_hFfmpegStdin = nullptr;
        }
        // 2 Wait for ffmpeg to exit completely
        WaitForSingleObject(m_hFfmpegProc, INFINITE);
        CloseHandle(m_hFfmpegProc);
        m_hFfmpegProc = nullptr;
        // 3 Start whisper for recognition
        CString whisperCmd;
        whisperCmd.Format(
            L"Release\\whisper_speech_recognition.exe "
            L"Release\\distil-whisper-large-v3-int8-ov "
            L"\"%s\" AUTO",
			audioPath);

        SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
        HANDLE hRead{}, hWrite{};
        CreatePipe(&hRead, &hWrite, &sa, 0);
        SetHandleInformation(hRead, HANDLE_FLAG_INHERIT, 0);
        STARTUPINFOW si{ sizeof(si) };
        PROCESS_INFORMATION pi{};
        si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
        si.wShowWindow = SW_HIDE;
        si.hStdOutput = hWrite;
        si.hStdError = hWrite;

        wchar_t buf[1024]; wcscpy_s(buf, whisperCmd);
        if (!CreateProcessW(nullptr, buf, nullptr, nullptr, TRUE,
            CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi))
        {
            CloseHandle(hRead); CloseHandle(hWrite);
            MessageBox(L"cannot initiate Whisper recognition program");
            m_btnSpeech.EnableWindow(TRUE);
            return;
        }
        CloseHandle(hWrite);

        std::string out; char tmp[4096]; DWORD n;
        while (ReadFile(hRead, tmp, sizeof(tmp), &n, nullptr) && n)
            out.append(tmp, n);
        CloseHandle(hRead);

        WaitForSingleObject(pi.hProcess, INFINITE);
        CloseHandle(pi.hProcess); CloseHandle(pi.hThread);

		// [Function] Filter timestamps/duplicate lines from 
		// the recognition output and piece together fragments into natural paragraphs.
		std::string paragraph;
		std::istringstream iss(out);        // need #include <sstream>
		std::string line, lastLine;
		while (std::getline(iss, line))
		{
			// Remove the end of line \r
			if (!line.empty() && line.back() == '\r')
				line.pop_back();

			// Remove leading whitespace (space or \t) 
			// to avoid misinterpretation of " timestamps: "
			size_t first = line.find_first_not_of(" \t");
			if (first != std::string::npos)
				line = line.substr(first);

			// Ignore timestamps rows
			if (line.rfind("timestamps:", 0) == 0)
				continue;

			// Remove exact duplicate rows
			if (line == lastLine || line.empty())
				continue;

			if (!paragraph.empty())
				paragraph += ' ';  // Add spaces between segments
			paragraph += line;
			lastLine = line;
		}
		// ---------- Write back to the input box ----------
		//  Use the filtered paragraph
		CString txt = CA2W(paragraph.c_str(), CP_UTF8);
		txt.Trim();
		m_editInput.SetSel(-1, -1);
		m_editInput.ReplaceSel(txt + L"\r\n");
        // UI Restoration
        m_isRecording = false;
        m_btnSpeech.SetWindowTextW(L"Speech");
        m_btnSpeech.EnableWindow(TRUE);
        m_btnSend.EnableWindow(TRUE);
        return;
    }
    // ========= 2 Not recording → Click = Start =========
	// [Function] Prepare and start ffmpeg to capture 
	// the default microphone to 16k mono WAV.
    CString mic = GetDefaultMicName();
    CString ffmpegCmd;
	ffmpegCmd.Format(
		L"Release\\ffmpeg.exe -y "
		L"-f dshow -rtbufsize 512k -probesize 32k -analyzeduration 0 "  
		L"-i audio=\"%s\" -ac 1 -ar 16000 -v quiet \"%s\"",
		mic, audioPath);

    // Create a stdin pipe: main thread writes, ffmpeg reads
    SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
    HANDLE hRead{}, hWrite{};
    CreatePipe(&hRead, &hWrite, &sa, 0);
    SetHandleInformation(hWrite, HANDLE_FLAG_INHERIT, 0);
    STARTUPINFOW si{ sizeof(si) };
    ZeroMemory(&m_ffmpegPi, sizeof(m_ffmpegPi));
    si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
    si.hStdInput = hRead;
    si.wShowWindow = SW_HIDE;
    wchar_t bufStart[1024]; wcscpy_s(bufStart, ffmpegCmd);
    if (!CreateProcessW(nullptr, bufStart, nullptr, nullptr, TRUE,
        CREATE_NO_WINDOW, nullptr, nullptr, &si, &m_ffmpegPi))
    {
        CloseHandle(hRead); CloseHandle(hWrite);
        MessageBox(L"fail to start ffmpeg ，check your microphone");
        return;
    }
    CloseHandle(hRead); // The main thread no longer needs a read end
    // Save handle and update the UI
    m_hFfmpegStdin = hWrite;
    m_hFfmpegProc = m_ffmpegPi.hProcess;
	
	Sleep(600);         
	m_btnSpeech.SetWindowTextW(L"Ready");
	/* Refresh immediately to ensure that users can see*/
	m_btnSpeech.RedrawWindow(nullptr, nullptr,
		RDW_INVALIDATE | RDW_UPDATENOW | RDW_FRAME);
	Beep(1200, 400);
    // UI is set to recording state
    m_isRecording = true;
    m_btnSpeech.SetWindowTextW(L"Stop");
    m_btnSend.EnableWindow(FALSE);
}
// [Function] "RAG: Input Your Files" button:
// Open file selection → Enter RAG mode (wait for user questions) → Synchronously call index_docs.exe
// Build index to local kb → Prompt import results in the input box.
void CAIassistantDlg::OnBnClickedButtonRag()
{
	// 1 Let users choose PDF / DOCX / TXT
	CFileDialog dlg(TRUE, nullptr, nullptr,
		OFN_FILEMUSTEXIST,
		L"file (*.pdf;*.docx;*.txt)|*.pdf;*.docx;*.txt||", this);
	if (dlg.DoModal() != IDOK) return;

	m_lastRagFile = dlg.GetPathName();
	m_ragMode = true;                 
	m_btnRag.EnableWindow(FALSE);        

	// 2 remind user
	CString note;
	note.Format(L"[Loading «%s» To The Local Retrieval Library…]\r\n", (LPCTSTR)m_lastRagFile);
	m_editInput.ReplaceSel(note);
	m_editInput.SetSel(-1, -1);

	// 3 Synchronously call Python's index_docs.py
	bool ok = ImportFileToKb(m_lastRagFile);

	// 4) Change the prompt line: success or failure
	CString done;
	done.Format(ok ? L"[Successfully Load «%s» The Local Retrieval Library]\r\n"
		: L"[❌ Fail To Import «%s» ，Please Check]\r\n",
		(LPCTSTR)m_lastRagFile);
	m_editInput.ReplaceSel(done);
	m_editInput.SetSel(-1, -1);
	// ……The user can then type in the question in the input box.
	// ---  Restore the button immediately, but keep m_ragMode = true and wait for the next Send event
	m_btnRag.EnableWindow(TRUE);
	m_btnRag.SetWindowTextW(L"RAG:Input Your Files");
}
// [Function] Import files into the knowledge base (KB):
// - If PDF/DOCX, convert to a temporary UTF-8 .txt file first;
// - Run index_docs.exe to write/update the KB (if there is no faiss.index for the first time, add --fresh);
// - Display the build log in a pop-up window; clean up temporary files.
bool ImportFileToKb(const CString& path)
{
	// 1 If it is PDF/DOCX → convert to plain text first
	CString ext = PathFindExtensionW(path);
	ext.MakeLower();

	CString txtPath = path;   // If it is already .txt, just use

	if (ext == L".pdf" || ext == L".docx")
	{
		CString txt = ConvertFileToText(path);   // conversion result

		// —— Generate a temporary file name ——  
		wchar_t tmpDir[MAX_PATH];
		GetTempPathW(MAX_PATH, tmpDir);

		wchar_t tmpName[MAX_PATH];
		GetTempFileNameW(tmpDir, L"rag", 0, tmpName);   // ragXXXX.tmp
		txtPath = tmpName;          // Use temporary file as txtPath
		// —— Write in UTF‑8 ——  
		CStringA utf8 = CW2A(txt, CP_UTF8);
		CFile file;
		if (!file.Open(txtPath, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
		{
			AfxMessageBox(L"can not build txt file");
			return false;
		}
		file.Write(utf8.GetString(), utf8.GetLength());
		file.Close();
	}
	// b) Call index_docs.exe to write into kb
	static CString exeDir;
	if (exeDir.IsEmpty()) {
		exeDir = GetExeDir();
	}
	CString kbDir = exeDir + L"\\kb";
	EnsureDir(kbDir);
	// First determine whether it is the first time to build the database; 
	// if faiss.index is not there, add --fresh
	CString extra = PathFileExistsW(kbDir + L"\\faiss.index") ? L"" : L" --fresh";
	CString idxExe = exeDir + L"\\index_docs.exe";
	CString cmdLine;
	cmdLine.Format(L"\"%s\" \"%s\" --kb \"%s\"%s",
		(LPCTSTR)idxExe, (LPCTSTR)txtPath,
		(LPCTSTR)kbDir, (LPCTSTR)extra);
	SetEnvironmentVariableW(L"PYTHONUTF8", L"1");
	SetEnvironmentVariableW(L"PYTHONIOENCODING", L"utf-8");
	// Direct capture output
	CStringA outA = RunCmdCaptureStdout(cmdLine);
	SetEnvironmentVariableW(L"PYTHONUTF8", nullptr);
	SetEnvironmentVariableW(L"PYTHONIOENCODING", nullptr);
	CString  outW = CA2W(outA, CP_UTF8);

	AfxMessageBox(outW);   

	// Cleaning up temporary files
	if (ext == L".pdf" || ext == L".docx")
		DeleteFileW(txtPath);

	return true;
}
