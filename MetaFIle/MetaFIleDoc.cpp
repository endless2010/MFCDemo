// MetaFIleDoc.cpp : implementation of the CMetaFIleDoc class
//

#include "stdafx.h"
#include "MetaFIle.h"

#include "MetaFIleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleDoc

IMPLEMENT_DYNCREATE(CMetaFIleDoc, CDocument)

BEGIN_MESSAGE_MAP(CMetaFIleDoc, CDocument)
	//{{AFX_MSG_MAP(CMetaFIleDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleDoc construction/destruction

CMetaFIleDoc::CMetaFIleDoc()
{
	// TODO: add one-time construction code here

}

CMetaFIleDoc::~CMetaFIleDoc()
{
}

BOOL CMetaFIleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMetaFIleDoc serialization

void CMetaFIleDoc::Serialize(CArchive& ar)
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
// CMetaFIleDoc diagnostics

#ifdef _DEBUG
void CMetaFIleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMetaFIleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleDoc commands
