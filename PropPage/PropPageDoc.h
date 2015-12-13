// PropPageDoc.h : interface of the CPropPageDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROPPAGEDOC_H__358C0C0E_7417_4660_B62C_DB4D93E76B57__INCLUDED_)
#define AFX_PROPPAGEDOC_H__358C0C0E_7417_4660_B62C_DB4D93E76B57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPropPageDoc : public CDocument
{
protected: // create from serialization only
	CPropPageDoc();
	DECLARE_DYNCREATE(CPropPageDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPropPageDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPropPageDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPropPageDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPPAGEDOC_H__358C0C0E_7417_4660_B62C_DB4D93E76B57__INCLUDED_)
