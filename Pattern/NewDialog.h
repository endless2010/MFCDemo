#if !defined(AFX_NEWDIALOG_H__63FC98E0_7296_4AF4_B5B6_256369ACBAA5__INCLUDED_)
#define AFX_NEWDIALOG_H__63FC98E0_7296_4AF4_B5B6_256369ACBAA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewDialog dialog

class CNewDialog : public CDialog
{
// Construction
public:
	CNewDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNewDialog)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWDIALOG_H__63FC98E0_7296_4AF4_B5B6_256369ACBAA5__INCLUDED_)
