// PropPageView.h : interface of the CPropPageView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROPPAGEVIEW_H__904B3204_2FB1_4E03_BCD5_60AD4F4D73A4__INCLUDED_)
#define AFX_PROPPAGEVIEW_H__904B3204_2FB1_4E03_BCD5_60AD4F4D73A4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"PropSheet.h"
class CPropPageView : public CView
{
protected: // create from serialization only
	CPropPageView();
	DECLARE_DYNCREATE(CPropPageView)

// Attributes
public:
	CPropPageDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPropPageView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPropPageView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPropPageView)
	afx_msg void OnProppage();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CString m_salary;
	CString m_strWorkAddr;
	int m_iOccupation;
	BOOL m_bLike[4];
};

#ifndef _DEBUG  // debug version in PropPageView.cpp
inline CPropPageDoc* CPropPageView::GetDocument()
   { return (CPropPageDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPPAGEVIEW_H__904B3204_2FB1_4E03_BCD5_60AD4F4D73A4__INCLUDED_)
