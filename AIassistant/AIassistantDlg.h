
#include <Shlwapi.h>                 
#include <Shellapi.h>                
#pragma comment(lib, "Shlwapi.lib") 

CString ConvertFileToText(const CString& path);   

CString ConvertImageToText(const CString& imagePath);
bool    ImportFileToKb(const CString& path);

#pragma once
#define WM_IMPORT_TEXT  (WM_APP + 3)
#define WM_LLAMA_APPEND   (WM_APP + 1)   
#define WM_LLAMA_FINISHED (WM_APP + 2)   
#define WM_FILE_DROPPED  (WM_APP + 4)          
#define WM_RAG_FINISHED  (WM_APP + 5)     //← Import/retrieval completed, button can be re-enabled

class CAIassistantDlg : public CDialogEx
{
	
public:
	HANDLE m_hStdInW = nullptr;   //  stdin
	HANDLE m_hThread = nullptr;   // Worker Thread
	HANDLE m_hProcess = nullptr;   // llama-cli process
	HANDLE m_hFfmpegStdin = nullptr;   // Writing side: Send 'q' to ffmpeg
	HANDLE m_hFfmpegProc = nullptr;   // ffmpeg process handle
	bool   m_llamaReady = false;   // Interaction
	bool m_needAnswerLabel = false;   // Next time receive a model text, paste "ANSWER: "
	bool m_inferencing = false;
	long  m_infStartCharPos = -1;    // The position of the first character of the prompt line in the control
	bool               m_isRecording = false;   // Recording status
	PROCESS_INFORMATION m_ffmpegPi{};          // ffmpeg process information

	CButton m_btnRag;          // “RAG” button
	bool    m_ragMode = false; // Whether to enable RAG in this round (will automatically return to false after Send)
	CString m_lastRagFile;      // Record the document path for this import

	CAIassistantDlg(CWnd* pParent = nullptr);	

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AIASSISTANT_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	


	// 实现
protected:
	HICON m_hIcon;

	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit5();
	CEdit m_editInput;
	afx_msg void OnEnChangeEdit4();
	CEdit m_editOutput;
	CButton m_btnSend;
	CButton m_btnSpeech;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg LRESULT OnLlamaAppend(WPARAM, LPARAM);
	afx_msg LRESULT OnLlamaFinished(WPARAM, LPARAM);

	afx_msg void OnBnClickedButton1();
	afx_msg void OnDropFiles(HDROP hDrop);    
	afx_msg void OnBnClickedButtonRecord();
	afx_msg void OnBnClickedButtonRag();
	
};


