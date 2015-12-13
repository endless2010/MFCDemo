// Pattern.h : main header file for the PATTERN application
//

#if !defined(AFX_PATTERN_H__5EA426D3_67F4_4A65_BC5B_457AD57516A6__INCLUDED_)
#define AFX_PATTERN_H__5EA426D3_67F4_4A65_BC5B_457AD57516A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPatternApp:
// See Pattern.cpp for the implementation of this class
//

class CPatternApp : public CWinApp
{
public:
	CPatternApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPatternApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPatternApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PATTERN_H__5EA426D3_67F4_4A65_BC5B_457AD57516A6__INCLUDED_)
