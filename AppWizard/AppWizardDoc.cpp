// AppWizardDoc.cpp : implementation of the CAppWizardDoc class
//

#include "stdafx.h"
#include "AppWizard.h"

#include "AppWizardDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAppWizardDoc

IMPLEMENT_DYNCREATE(CAppWizardDoc, CDocument)

BEGIN_MESSAGE_MAP(CAppWizardDoc, CDocument)
	//{{AFX_MSG_MAP(CAppWizardDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAppWizardDoc construction/destruction

CAppWizardDoc::CAppWizardDoc()
{
	// TODO: add one-time construction code here

}

CAppWizardDoc::~CAppWizardDoc()
{
}

BOOL CAppWizardDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAppWizardDoc serialization

void CAppWizardDoc::Serialize(CArchive& ar)
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
// CAppWizardDoc diagnostics

#ifdef _DEBUG
void CAppWizardDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAppWizardDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAppWizardDoc commands
