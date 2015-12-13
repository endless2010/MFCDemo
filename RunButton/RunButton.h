// RunButton.h : main header file for the RUNBUTTON application
//

#if !defined(AFX_RUNBUTTON_H__98E9AAC4_EFD4_4153_A80D_D37CAF52694D__INCLUDED_)
#define AFX_RUNBUTTON_H__98E9AAC4_EFD4_4153_A80D_D37CAF52694D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CRunButtonApp:
// See RunButton.cpp for the implementation of this class
//

class CRunButtonApp : public CWinApp
{
public:
	CRunButtonApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRunButtonApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CRunButtonApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RUNBUTTON_H__98E9AAC4_EFD4_4153_A80D_D37CAF52694D__INCLUDED_)
