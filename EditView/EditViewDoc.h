// EditViewDoc.h : interface of the CEditViewDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EDITVIEWDOC_H__0BE3AA8F_B04E_4AFC_9F6F_F910DE8D3E29__INCLUDED_)
#define AFX_EDITVIEWDOC_H__0BE3AA8F_B04E_4AFC_9F6F_F910DE8D3E29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEditViewDoc : public CDocument
{
protected: // create from serialization only
	CEditViewDoc();
	DECLARE_DYNCREATE(CEditViewDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditViewDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEditViewDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEditViewDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITVIEWDOC_H__0BE3AA8F_B04E_4AFC_9F6F_F910DE8D3E29__INCLUDED_)
