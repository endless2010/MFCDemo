// EditView.h : main header file for the EDITVIEW application
//

#if !defined(AFX_EDITVIEW_H__25F394A6_68DC_4BC7_99B9_062731EB5FFB__INCLUDED_)
#define AFX_EDITVIEW_H__25F394A6_68DC_4BC7_99B9_062731EB5FFB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CEditViewApp:
// See EditView.cpp for the implementation of this class
//

class CEditViewApp : public CWinApp
{
public:
	CEditViewApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditViewApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CEditViewApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITVIEW_H__25F394A6_68DC_4BC7_99B9_062731EB5FFB__INCLUDED_)
