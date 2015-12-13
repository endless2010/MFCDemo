// ADDDoc.cpp : implementation of the CADDDoc class
//

#include "stdafx.h"
#include "ADD.h"

#include "ADDDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CADDDoc

IMPLEMENT_DYNCREATE(CADDDoc, CDocument)

BEGIN_MESSAGE_MAP(CADDDoc, CDocument)
	//{{AFX_MSG_MAP(CADDDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CADDDoc construction/destruction

CADDDoc::CADDDoc()
{
	// TODO: add one-time construction code here

}

CADDDoc::~CADDDoc()
{
}

BOOL CADDDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CADDDoc serialization

void CADDDoc::Serialize(CArchive& ar)
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
// CADDDoc diagnostics

#ifdef _DEBUG
void CADDDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CADDDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CADDDoc commands
