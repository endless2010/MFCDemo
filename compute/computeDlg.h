// computeDlg.h : header file
//

#if !defined(AFX_COMPUTEDLG_H__C3C39EC3_4C9D_4DEF_A270_94A4D84BFB55__INCLUDED_)
#define AFX_COMPUTEDLG_H__C3C39EC3_4C9D_4DEF_A270_94A4D84BFB55__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CComputeDlg dialog

class CComputeDlg : public CDialog
{
// Construction
public:
	CComputeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CComputeDlg)
	enum { IDD = IDD_COMPUTE_DIALOG };
	int		m_num2;
	int		m_num1;
	int		m_result;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComputeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CComputeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnPlus();
	afx_msg void OnMinus();
	afx_msg void OnOk();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMPUTEDLG_H__C3C39EC3_4C9D_4DEF_A270_94A4D84BFB55__INCLUDED_)
