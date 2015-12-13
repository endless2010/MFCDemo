// PropPageDoc.cpp : implementation of the CPropPageDoc class
//

#include "stdafx.h"
#include "PropPage.h"

#include "PropPageDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPropPageDoc

IMPLEMENT_DYNCREATE(CPropPageDoc, CDocument)

BEGIN_MESSAGE_MAP(CPropPageDoc, CDocument)
	//{{AFX_MSG_MAP(CPropPageDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPropPageDoc construction/destruction

CPropPageDoc::CPropPageDoc()
{
	// TODO: add one-time construction code here

}

CPropPageDoc::~CPropPageDoc()
{
}

BOOL CPropPageDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPropPageDoc serialization

void CPropPageDoc::Serialize(CArchive& ar)
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
// CPropPageDoc diagnostics

#ifdef _DEBUG
void CPropPageDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPropPageDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPropPageDoc commands
