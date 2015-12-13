// RunButtonDlg.h : header file
//

#if !defined(AFX_RUNBUTTONDLG_H__69DDCF21_E062_4BDB_8692_5145CF60D16F__INCLUDED_)
#define AFX_RUNBUTTONDLG_H__69DDCF21_E062_4BDB_8692_5145CF60D16F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CRunButtonDlg dialog
#include"NewButton.h"
class CRunButtonDlg : public CDialog
{
// Construction
public:
	CRunButtonDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CRunButtonDlg)
	enum { IDD = IDD_RUNBUTTON_DIALOG };
	CNewButton	m_button2;
	CNewButton	m_button1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRunButtonDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CRunButtonDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RUNBUTTONDLG_H__69DDCF21_E062_4BDB_8692_5145CF60D16F__INCLUDED_)
