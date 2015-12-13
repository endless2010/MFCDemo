// Graphic2Doc.cpp : implementation of the CGraphic2Doc class
//

#include "stdafx.h"
#include "Graphic2.h"

#include "Graphic2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphic2Doc

IMPLEMENT_DYNCREATE(CGraphic2Doc, CDocument)

BEGIN_MESSAGE_MAP(CGraphic2Doc, CDocument)
	//{{AFX_MSG_MAP(CGraphic2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphic2Doc construction/destruction

CGraphic2Doc::CGraphic2Doc()
{
	// TODO: add one-time construction code here

}

CGraphic2Doc::~CGraphic2Doc()
{
}

BOOL CGraphic2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGraphic2Doc serialization

void CGraphic2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGraphic2Doc diagnostics

#ifdef _DEBUG
void CGraphic2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGraphic2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGraphic2Doc commands
