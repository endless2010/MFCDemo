// compute.h : main header file for the COMPUTE application
//

#if !defined(AFX_COMPUTE_H__C31DFBAA_8C47_493D_A91F_64101B814A42__INCLUDED_)
#define AFX_COMPUTE_H__C31DFBAA_8C47_493D_A91F_64101B814A42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CComputeApp:
// See compute.cpp for the implementation of this class
//

class CComputeApp : public CWinApp
{
public:
	CComputeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComputeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CComputeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMPUTE_H__C31DFBAA_8C47_493D_A91F_64101B814A42__INCLUDED_)
