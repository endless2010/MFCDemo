// CompatibleDCDoc.cpp : implementation of the CCompatibleDCDoc class
//

#include "stdafx.h"
#include "CompatibleDC.h"

#include "CompatibleDCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCDoc

IMPLEMENT_DYNCREATE(CCompatibleDCDoc, CDocument)

BEGIN_MESSAGE_MAP(CCompatibleDCDoc, CDocument)
	//{{AFX_MSG_MAP(CCompatibleDCDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCDoc construction/destruction

CCompatibleDCDoc::CCompatibleDCDoc()
{
	// TODO: add one-time construction code here

}

CCompatibleDCDoc::~CCompatibleDCDoc()
{
}

BOOL CCompatibleDCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCDoc serialization

void CCompatibleDCDoc::Serialize(CArchive& ar)
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
// CCompatibleDCDoc diagnostics

#ifdef _DEBUG
void CCompatibleDCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCompatibleDCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCDoc commands
