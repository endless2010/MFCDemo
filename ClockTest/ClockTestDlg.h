// ClockTestDlg.h : header file
//

#if !defined(AFX_CLOCKTESTDLG_H__02533DAA_7C58_43F7_9AF8_3D4C96759135__INCLUDED_)
#define AFX_CLOCKTESTDLG_H__02533DAA_7C58_43F7_9AF8_3D4C96759135__INCLUDED_

#include "clock.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CClockTestDlg dialog

class CClockTestDlg : public CDialog
{
// Construction
public:
	CClockTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CClockTestDlg)
	enum { IDD = IDD_CLOCKTEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClockTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CClockTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnClickClockctrl2();
	afx_msg void OnnewMinuteClockctrl2();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CClock m_clock;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLOCKTESTDLG_H__02533DAA_7C58_43F7_9AF8_3D4C96759135__INCLUDED_)
