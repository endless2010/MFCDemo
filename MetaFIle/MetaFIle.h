// MetaFIle.h : main header file for the METAFILE application
//

#if !defined(AFX_METAFILE_H__08A669F3_6087_492C_8204_B146AB8ACAA2__INCLUDED_)
#define AFX_METAFILE_H__08A669F3_6087_492C_8204_B146AB8ACAA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleApp:
// See MetaFIle.cpp for the implementation of this class
//

class CMetaFIleApp : public CWinApp
{
public:
	CMetaFIleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMetaFIleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMetaFIleApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_METAFILE_H__08A669F3_6087_492C_8204_B146AB8ACAA2__INCLUDED_)
