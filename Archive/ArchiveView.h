// ArchiveView.h : interface of the CArchiveView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ARCHIVEVIEW_H__7226D620_9B20_4F17_90C6_E4C7B771ACDB__INCLUDED_)
#define AFX_ARCHIVEVIEW_H__7226D620_9B20_4F17_90C6_E4C7B771ACDB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CArchiveView : public CView
{
protected: // create from serialization only
	CArchiveView();
	DECLARE_DYNCREATE(CArchiveView)

// Attributes
public:
	CArchiveDoc* GetDocument();

// Operations
public:
private:
CString m_strResult;
UINT m_nDrawType;
CPoint m_ptOrigin;
public:
CObArray m_obArray;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CArchiveView)
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
	virtual ~CArchiveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CArchiveView)
	afx_msg void OnFileWrite();
	afx_msg void OnFileRead();
	afx_msg void OnDot();
	afx_msg void OnEllipse();
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ArchiveView.cpp
inline CArchiveDoc* CArchiveView::GetDocument()
   { return (CArchiveDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARCHIVEVIEW_H__7226D620_9B20_4F17_90C6_E4C7B771ACDB__INCLUDED_)
