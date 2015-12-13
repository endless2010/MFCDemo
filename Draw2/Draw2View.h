// Draw2View.h : interface of the CDraw2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAW2VIEW_H__1E8CB501_CA63_460B_8101_FE702C88E30D__INCLUDED_)
#define AFX_DRAW2VIEW_H__1E8CB501_CA63_460B_8101_FE702C88E30D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDraw2View : public CView
{
protected: // create from serialization only
	CDraw2View();
	DECLARE_DYNCREATE(CDraw2View)

// Attributes
public:
	CDraw2Doc* GetDocument();

// Operations
public:
private:
	CString m_strLine;
	CPoint  m_ptPoint;
	int m_count;
	int m_nWidth;
	CString str;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDraw2View)
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
	virtual ~CDraw2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDraw2View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw2View.cpp
inline CDraw2Doc* CDraw2View::GetDocument()
   { return (CDraw2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW2VIEW_H__1E8CB501_CA63_460B_8101_FE702C88E30D__INCLUDED_)
