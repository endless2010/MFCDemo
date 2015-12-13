#if !defined(AFX_DLG_H__CC796380_DE61_471E_8891_AD859D28B18D__INCLUDED_)
#define AFX_DLG_H__CC796380_DE61_471E_8891_AD859D28B18D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlg dialog

class CDlg : public CDialog
{
// Construction
public:
	CDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlg)
	enum { IDD = IDD_DIALOG1 };
	//}}AFX_DATA
private:
	CButton m_button;
	BOOL m_bIsCreated;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void PostNcDestroy();
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlg)
	afx_msg void OnAdd();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLG_H__CC796380_DE61_471E_8891_AD859D28B18D__INCLUDED_)
