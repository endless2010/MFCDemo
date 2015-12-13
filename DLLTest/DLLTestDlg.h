// DLLTestDlg.h : header file
//

#if !defined(AFX_DLLTESTDLG_H__5E209A60_FFD4_4FF1_8767_CC9E9AD90BD2__INCLUDED_)
#define AFX_DLLTESTDLG_H__5E209A60_FFD4_4FF1_8767_CC9E9AD90BD2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDLLTestDlg dialog

class CDLLTestDlg : public CDialog
{
// Construction
public:
	CDLLTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDLLTestDlg)
	enum { IDD = IDD_DLLTEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDLLTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDLLTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonSubstract();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLLTESTDLG_H__5E209A60_FFD4_4FF1_8767_CC9E9AD90BD2__INCLUDED_)
