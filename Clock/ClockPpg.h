#if !defined(AFX_CLOCKPPG_H__34740063_C7DD_46D7_8251_473703A49C25__INCLUDED_)
#define AFX_CLOCKPPG_H__34740063_C7DD_46D7_8251_473703A49C25__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ClockPpg.h : Declaration of the CClockPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CClockPropPage : See ClockPpg.cpp.cpp for implementation.

class CClockPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CClockPropPage)
	DECLARE_OLECREATE_EX(CClockPropPage)

// Constructor
public:
	CClockPropPage();

// Dialog Data
	//{{AFX_DATA(CClockPropPage)
	enum { IDD = IDD_PROPPAGE_CLOCK };
	short	m_UpdateInterval;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CClockPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLOCKPPG_H__34740063_C7DD_46D7_8251_473703A49C25__INCLUDED)
