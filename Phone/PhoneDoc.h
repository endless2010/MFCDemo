// PhoneDoc.h : interface of the CPhoneDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PHONEDOC_H__BB0D381E_191B_442E_9297_D4071282CEAA__INCLUDED_)
#define AFX_PHONEDOC_H__BB0D381E_191B_442E_9297_D4071282CEAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPhoneDoc : public CDocument
{
protected: // create from serialization only
	CPhoneDoc();
	DECLARE_DYNCREATE(CPhoneDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPhoneDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPhoneDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPhoneDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PHONEDOC_H__BB0D381E_191B_442E_9297_D4071282CEAA__INCLUDED_)
