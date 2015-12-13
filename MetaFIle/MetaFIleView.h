// MetaFIleView.h : interface of the CMetaFIleView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_METAFILEVIEW_H__90DEE816_6BC6_47B0_8257_8267765BF930__INCLUDED_)
#define AFX_METAFILEVIEW_H__90DEE816_6BC6_47B0_8257_8267765BF930__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMetaFIleView : public CView
{
protected: // create from serialization only
	CMetaFIleView();
	DECLARE_DYNCREATE(CMetaFIleView)

// Attributes
public:
	CMetaFIleDoc* GetDocument();

// Operations
public:
private:
	CMetaFileDC m_dcMetaFile;
	CPoint m_ptOrigin;
	CPtrArray m_ptrArray;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMetaFIleView)
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
	virtual ~CMetaFIleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMetaFIleView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnCancelMode();
	afx_msg void OnFileSave();
	afx_msg void OnFileOpen();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MetaFIleView.cpp
inline CMetaFIleDoc* CMetaFIleView::GetDocument()
   { return (CMetaFIleDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_METAFILEVIEW_H__90DEE816_6BC6_47B0_8257_8267765BF930__INCLUDED_)
