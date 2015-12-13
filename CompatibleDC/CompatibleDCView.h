// CompatibleDCView.h : interface of the CCompatibleDCView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPATIBLEDCVIEW_H__878F5907_6116_4F32_8319_1EB16BC59349__INCLUDED_)
#define AFX_COMPATIBLEDCVIEW_H__878F5907_6116_4F32_8319_1EB16BC59349__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCompatibleDCView : public CView
{
protected: // create from serialization only
	CCompatibleDCView();
	DECLARE_DYNCREATE(CCompatibleDCView)

// Attributes
public:
	CCompatibleDCDoc* GetDocument();

// Operations
public:
private:
	CDC m_dcCompatible;
    CPoint m_ptOrigin;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCompatibleDCView)
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
	virtual ~CCompatibleDCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCompatibleDCView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CompatibleDCView.cpp
inline CCompatibleDCDoc* CCompatibleDCView::GetDocument()
   { return (CCompatibleDCDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMPATIBLEDCVIEW_H__878F5907_6116_4F32_8319_1EB16BC59349__INCLUDED_)
