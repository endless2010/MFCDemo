// PropPage.h : main header file for the PROPPAGE application
//

#if !defined(AFX_PROPPAGE_H__33503D37_38CC_4E5E_9872_A757A411122C__INCLUDED_)
#define AFX_PROPPAGE_H__33503D37_38CC_4E5E_9872_A757A411122C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPropPageApp:
// See PropPage.cpp for the implementation of this class
//

class CPropPageApp : public CWinApp
{
public:
	CPropPageApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPropPageApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPropPageApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPPAGE_H__33503D37_38CC_4E5E_9872_A757A411122C__INCLUDED_)
