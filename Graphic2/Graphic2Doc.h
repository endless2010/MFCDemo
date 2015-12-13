// Graphic2Doc.h : interface of the CGraphic2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPHIC2DOC_H__0B0C544C_A2C2_486E_A335_0A26E53F7900__INCLUDED_)
#define AFX_GRAPHIC2DOC_H__0B0C544C_A2C2_486E_A335_0A26E53F7900__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGraphic2Doc : public CDocument
{
protected: // create from serialization only
	CGraphic2Doc();
	DECLARE_DYNCREATE(CGraphic2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphic2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGraphic2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGraphic2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHIC2DOC_H__0B0C544C_A2C2_486E_A335_0A26E53F7900__INCLUDED_)
