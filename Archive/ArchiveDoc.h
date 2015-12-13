// ArchiveDoc.h : interface of the CArchiveDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ARCHIVEDOC_H__D02D4DC7_A2B4_43D6_861D_04AD27D766AC__INCLUDED_)
#define AFX_ARCHIVEDOC_H__D02D4DC7_A2B4_43D6_861D_04AD27D766AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CArchiveDoc : public CDocument
{
protected: // create from serialization only
	CArchiveDoc();
	DECLARE_DYNCREATE(CArchiveDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CArchiveDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual void DeleteContents();
	virtual BOOL CanCloseFrame(CFrameWnd* pFrame);
	virtual POSITION GetFirstViewPosition() const;
	//}}AFX_VIRTUAL

// Implementation
public:
	CObArray m_obArray;
	virtual ~CArchiveDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CArchiveDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARCHIVEDOC_H__D02D4DC7_A2B4_43D6_861D_04AD27D766AC__INCLUDED_)
