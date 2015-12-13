// GraphicView.h : interface of the CGraphicView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPHICVIEW_H__275DEA67_EF3D_4782_921C_0A6268004AB7__INCLUDED_)
#define AFX_GRAPHICVIEW_H__275DEA67_EF3D_4782_921C_0A6268004AB7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGraphicView : public CView
{
protected: // create from serialization only
	CGraphicView();
	DECLARE_DYNCREATE(CGraphicView)

// Attributes
public:
	CGraphicDoc* GetDocument();
private:
	UINT m_nDrawType;
	CPoint m_ptOrigin;
	CPoint m_ptEnd;
	UINT m_nLineWidth;
	UINT m_nLineStyle;
	COLORREF m_clr;
	CFont m_font;
	CString m_strFontName;
	CPtrArray m_ptrArray;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphicView)
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
	virtual ~CGraphicView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGraphicView)
	afx_msg void OnDot();
	afx_msg void OnEllipse();
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSetting();
	afx_msg void OnColor();
	afx_msg void OnFont();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GraphicView.cpp
inline CGraphicDoc* CGraphicView::GetDocument()
   { return (CGraphicDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHICVIEW_H__275DEA67_EF3D_4782_921C_0A6268004AB7__INCLUDED_)
