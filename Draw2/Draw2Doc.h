// Draw2Doc.h : interface of the CDraw2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAW2DOC_H__49217FB7_0223_4776_B34B_9262EC52AED4__INCLUDED_)
#define AFX_DRAW2DOC_H__49217FB7_0223_4776_B34B_9262EC52AED4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDraw2Doc : public CDocument
{
protected: // create from serialization only
	CDraw2Doc();
	DECLARE_DYNCREATE(CDraw2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDraw2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDraw2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDraw2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW2DOC_H__49217FB7_0223_4776_B34B_9262EC52AED4__INCLUDED_)
