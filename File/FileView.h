// FileView.h : interface of the CFileView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FILEVIEW_H__9BA6334A_66B4_4869_AC29_F4DE75115215__INCLUDED_)
#define AFX_FILEVIEW_H__9BA6334A_66B4_4869_AC29_F4DE75115215__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFileView : public CView
{
protected: // create from serialization only
	CFileView();
	DECLARE_DYNCREATE(CFileView)

// Attributes
public:
	CFileDoc* GetDocument();

// Operations
public:
private:
	char *pBuf;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFileView)
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
	virtual ~CFileView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFileView)
	afx_msg void OnFileWrite();
	afx_msg void OnFileRead();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in FileView.cpp
inline CFileDoc* CFileView::GetDocument()
   { return (CFileDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FILEVIEW_H__9BA6334A_66B4_4869_AC29_F4DE75115215__INCLUDED_)
