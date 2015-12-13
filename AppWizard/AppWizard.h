// AppWizard.h : main header file for the APPWIZARD application
//

#if !defined(AFX_APPWIZARD_H__6AD28AC8_4DCD_425F_B235_9EF4818BD45C__INCLUDED_)
#define AFX_APPWIZARD_H__6AD28AC8_4DCD_425F_B235_9EF4818BD45C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAppWizardApp:
// See AppWizard.cpp for the implementation of this class
//

class CAppWizardApp : public CWinApp
{
public:
	CAppWizardApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAppWizardApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAppWizardApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_APPWIZARD_H__6AD28AC8_4DCD_425F_B235_9EF4818BD45C__INCLUDED_)
