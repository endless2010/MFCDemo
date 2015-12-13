#if !defined(AFX_ADDDLG_H__6B903414_0071_4E1A_AC7B_DB8CA5411CE3__INCLUDED_)
#define AFX_ADDDLG_H__6B903414_0071_4E1A_AC7B_DB8CA5411CE3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAddDlg dialog

class CAddDlg : public CDialog
{
// Construction
private:
	BOOL flag;
public:
	CAddDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAddDlg)
	enum { IDD = IDD_DIALOG1 };
	int		m_number1;
	int	    m_number2;
	int  	m_sum;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddDlg)
	afx_msg void OnAdd();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDDLG_H__6B903414_0071_4E1A_AC7B_DB8CA5411CE3__INCLUDED_)
