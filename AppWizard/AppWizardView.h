// AppWizardView.h : interface of the CAppWizardView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_APPWIZARDVIEW_H__7D9942B5_68BF_4300_ADE2_D2AF6E000972__INCLUDED_)
#define AFX_APPWIZARDVIEW_H__7D9942B5_68BF_4300_ADE2_D2AF6E000972__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAppWizardView : public CView
{
protected: // create from serialization only
	CAppWizardView();
	DECLARE_DYNCREATE(CAppWizardView)

// Attributes
public:
	CAppWizardDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAppWizardView)
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
	virtual ~CAppWizardView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAppWizardView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AppWizardView.cpp
inline CAppWizardDoc* CAppWizardView::GetDocument()
   { return (CAppWizardDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_APPWIZARDVIEW_H__7D9942B5_68BF_4300_ADE2_D2AF6E000972__INCLUDED_)
