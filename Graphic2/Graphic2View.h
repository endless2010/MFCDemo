// Graphic2View.h : interface of the CGraphic2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPHIC2VIEW_H__897008D0_2048_4879_8121_C96377BEFFC4__INCLUDED_)
#define AFX_GRAPHIC2VIEW_H__897008D0_2048_4879_8121_C96377BEFFC4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGraphic2View : public CView
{
protected: // create from serialization only
	CGraphic2View();
	DECLARE_DYNCREATE(CGraphic2View)

// Attributes
public:
	CGraphic2Doc* GetDocument();

// Operations
public:
private:
	CPtrArray m_ptrArray;
    CPoint m_ptOrigin;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphic2View)
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
	virtual ~CGraphic2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGraphic2View)
	afx_msg void OnLine();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Graphic2View.cpp
inline CGraphic2Doc* CGraphic2View::GetDocument()
   { return (CGraphic2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHIC2VIEW_H__897008D0_2048_4879_8121_C96377BEFFC4__INCLUDED_)
