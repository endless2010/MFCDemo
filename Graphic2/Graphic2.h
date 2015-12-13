// Graphic2.h : main header file for the GRAPHIC2 application
//

#if !defined(AFX_GRAPHIC2_H__B027212B_26C9_41A6_9641_35F8C1559FE2__INCLUDED_)
#define AFX_GRAPHIC2_H__B027212B_26C9_41A6_9641_35F8C1559FE2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CGraphic2App:
// See Graphic2.cpp for the implementation of this class
//

class CGraphic2App : public CWinApp
{
public:
	CGraphic2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphic2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CGraphic2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHIC2_H__B027212B_26C9_41A6_9641_35F8C1559FE2__INCLUDED_)
