// DLLTest.h : main header file for the DLLTEST application
//

#if !defined(AFX_DLLTEST_H__D96DD494_624A_446F_A60C_5C377CF64F69__INCLUDED_)
#define AFX_DLLTEST_H__D96DD494_624A_446F_A60C_5C377CF64F69__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDLLTestApp:
// See DLLTest.cpp for the implementation of this class
//

class CDLLTestApp : public CWinApp
{
public:
	CDLLTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDLLTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDLLTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLLTEST_H__D96DD494_624A_446F_A60C_5C377CF64F69__INCLUDED_)
