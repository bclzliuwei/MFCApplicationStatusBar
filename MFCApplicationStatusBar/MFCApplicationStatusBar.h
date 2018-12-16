
// MFCApplicationStatusBar.h : main header file for the MFCApplicationStatusBar application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCApplicationStatusBarApp:
// See MFCApplicationStatusBar.cpp for the implementation of this class
//

class CMFCApplicationStatusBarApp : public CWinApp
{
public:
	CMFCApplicationStatusBarApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplicationStatusBarApp theApp;
