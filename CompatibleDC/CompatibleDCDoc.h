// CompatibleDCDoc.h : interface of the CCompatibleDCDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPATIBLEDCDOC_H__F2C490C6_6686_43F0_AADE_02C4B4C2C184__INCLUDED_)
#define AFX_COMPATIBLEDCDOC_H__F2C490C6_6686_43F0_AADE_02C4B4C2C184__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCompatibleDCDoc : public CDocument
{
protected: // create from serialization only
	CCompatibleDCDoc();
	DECLARE_DYNCREATE(CCompatibleDCDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCompatibleDCDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCompatibleDCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCompatibleDCDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMPATIBLEDCDOC_H__F2C490C6_6686_43F0_AADE_02C4B4C2C184__INCLUDED_)
