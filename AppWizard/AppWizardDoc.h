// AppWizardDoc.h : interface of the CAppWizardDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_APPWIZARDDOC_H__C36CBB3D_6FBD_4D8A_9DAF_9A4B922C8B95__INCLUDED_)
#define AFX_APPWIZARDDOC_H__C36CBB3D_6FBD_4D8A_9DAF_9A4B922C8B95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAppWizardDoc : public CDocument
{
protected: // create from serialization only
	CAppWizardDoc();
	DECLARE_DYNCREATE(CAppWizardDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAppWizardDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAppWizardDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAppWizardDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_APPWIZARDDOC_H__C36CBB3D_6FBD_4D8A_9DAF_9A4B922C8B95__INCLUDED_)
