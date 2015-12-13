#if !defined(AFX_PROPSHEET_H__342D8AB9_A9A6_4D4B_AD69_4D066D567CBE__INCLUDED_)
#define AFX_PROPSHEET_H__342D8AB9_A9A6_4D4B_AD69_4D066D567CBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PropSheet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPropSheet
#include"Prop1.h"
#include"Prop2.h"
#include"Prop3.h"

class CPropSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CPropSheet)

// Construction
public:
	CPropSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CPropSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:

// Operations
public:
	CProp1 m_prop1;
	CProp2 m_prop2;
	CProp3 m_prop3;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPropSheet)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPropSheet();

	// Generated message map functions
protected:
	//{{AFX_MSG(CPropSheet)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPSHEET_H__342D8AB9_A9A6_4D4B_AD69_4D066D567CBE__INCLUDED_)
