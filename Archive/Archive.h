// Archive.h : main header file for the ARCHIVE application
//

#if !defined(AFX_ARCHIVE_H__848BDEDE_D0F0_4A1D_8859_7A2916710BAE__INCLUDED_)
#define AFX_ARCHIVE_H__848BDEDE_D0F0_4A1D_8859_7A2916710BAE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CArchiveApp:
// See Archive.cpp for the implementation of this class
//

class CArchiveApp : public CWinApp
{
public:
	CArchiveApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CArchiveApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CArchiveApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARCHIVE_H__848BDEDE_D0F0_4A1D_8859_7A2916710BAE__INCLUDED_)
