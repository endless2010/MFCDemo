// EditViewView.h : interface of the CEditViewView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EDITVIEWVIEW_H__DAB4AFE3_1D9A_4D99_B745_557BCD814239__INCLUDED_)
#define AFX_EDITVIEWVIEW_H__DAB4AFE3_1D9A_4D99_B745_557BCD814239__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEditViewView : public CEditView
{
protected: // create from serialization only
	CEditViewView();
	DECLARE_DYNCREATE(CEditViewView)

// Attributes
public:
	CEditViewDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditViewView)
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
	virtual ~CEditViewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEditViewView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in EditViewView.cpp
inline CEditViewDoc* CEditViewView::GetDocument()
   { return (CEditViewDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITVIEWVIEW_H__DAB4AFE3_1D9A_4D99_B745_557BCD814239__INCLUDED_)
