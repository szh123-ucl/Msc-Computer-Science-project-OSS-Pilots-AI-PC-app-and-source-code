
// AIassistant.h: PROJECT_NAME The main header file of the application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "Include before including this file 'pch.h' To generate PCH"
#endif

#include "resource.h"		// Main symbol


// CAIassistantApp:
// For an implementation of this class, see AIassistant.cpp
//

class CAIassistantApp : public CWinApp
{
public:
	CAIassistantApp();

// rewrite
public:
	virtual BOOL InitInstance();

// relize

	DECLARE_MESSAGE_MAP()
};

extern CAIassistantApp theApp;
