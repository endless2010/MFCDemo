// Draw2Doc.cpp : implementation of the CDraw2Doc class
//

#include "stdafx.h"
#include "Draw2.h"

#include "Draw2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDraw2Doc

IMPLEMENT_DYNCREATE(CDraw2Doc, CDocument)

BEGIN_MESSAGE_MAP(CDraw2Doc, CDocument)
	//{{AFX_MSG_MAP(CDraw2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDraw2Doc construction/destruction

CDraw2Doc::CDraw2Doc()
{
	// TODO: add one-time construction code here

}

CDraw2Doc::~CDraw2Doc()
{
}

BOOL CDraw2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDraw2Doc serialization

void CDraw2Doc::Serialize(CArchive& ar)
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
// CDraw2Doc diagnostics

#ifdef _DEBUG
void CDraw2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDraw2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDraw2Doc commands
