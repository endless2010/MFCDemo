// PhoneView.h : interface of the CPhoneView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PHONEVIEW_H__F7B3FC02_8DC1_4B22_8419_9C3A363A2FEB__INCLUDED_)
#define AFX_PHONEVIEW_H__F7B3FC02_8DC1_4B22_8419_9C3A363A2FEB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPhoneView : public CView
{
protected: // create from serialization only
	CPhoneView();
	DECLARE_DYNCREATE(CPhoneView)

// Attributes
public:
	CPhoneDoc* GetDocument();

// Operations
public:
private:
	CString m_str;
	CStringArray m_strArray;
	int m_count;
	CMenu m_menu;
	//CPoint point;
	COLORREF coloref;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPhoneView)
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
	virtual ~CPhoneView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPhoneView)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	afx_msg void OnPhone1();
	afx_msg void OnPhone2();
	afx_msg void OnPhone3();
	afx_msg void OnPhone4();

	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in PhoneView.cpp
inline CPhoneDoc* CPhoneView::GetDocument()
   { return (CPhoneDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PHONEVIEW_H__F7B3FC02_8DC1_4B22_8419_9C3A363A2FEB__INCLUDED_)
