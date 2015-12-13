// ADDDoc.h : interface of the CADDDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADDDOC_H__386927E7_F914_476F_BB97_C77BB98DCB9E__INCLUDED_)
#define AFX_ADDDOC_H__386927E7_F914_476F_BB97_C77BB98DCB9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CADDDoc : public CDocument
{
protected: // create from serialization only
	CADDDoc();
	DECLARE_DYNCREATE(CADDDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CADDDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CADDDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CADDDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDDOC_H__386927E7_F914_476F_BB97_C77BB98DCB9E__INCLUDED_)
