// MetaFIleDoc.h : interface of the CMetaFIleDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_METAFILEDOC_H__1BB811E4_2DCD_45F7_A21D_4EB09A4C7FFC__INCLUDED_)
#define AFX_METAFILEDOC_H__1BB811E4_2DCD_45F7_A21D_4EB09A4C7FFC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMetaFIleDoc : public CDocument
{
protected: // create from serialization only
	CMetaFIleDoc();
	DECLARE_DYNCREATE(CMetaFIleDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMetaFIleDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMetaFIleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMetaFIleDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_METAFILEDOC_H__1BB811E4_2DCD_45F7_A21D_4EB09A4C7FFC__INCLUDED_)
