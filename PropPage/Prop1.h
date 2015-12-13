#if !defined(AFX_PROP1_H__36E76EF2_4AD6_435E_8819_167534BB4B5B__INCLUDED_)
#define AFX_PROP1_H__36E76EF2_4AD6_435E_8819_167534BB4B5B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Prop1.h : header file
//
/////////////////////////////////////////////////////////////////////////////
// CProp1 dialog

class CProp1 : public CPropertyPage
{
	DECLARE_DYNCREATE(CProp1)

// Construction
public:
	CProp1();
	~CProp1();
public:
// Dialog Data
	//{{AFX_DATA(CProp1)
	enum { IDD = IDD_PROP1 };
	int		m_occupation;
	CString	m_workAddr;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CProp1)
	public:
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CProp1)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROP1_H__36E76EF2_4AD6_435E_8819_167534BB4B5B__INCLUDED_)
