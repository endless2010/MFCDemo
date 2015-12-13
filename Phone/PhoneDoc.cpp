// PhoneDoc.cpp : implementation of the CPhoneDoc class
//

#include "stdafx.h"
#include "Phone.h"

#include "PhoneDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPhoneDoc

IMPLEMENT_DYNCREATE(CPhoneDoc, CDocument)

BEGIN_MESSAGE_MAP(CPhoneDoc, CDocument)
	//{{AFX_MSG_MAP(CPhoneDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPhoneDoc construction/destruction

CPhoneDoc::CPhoneDoc()
{
	// TODO: add one-time construction code here

}

CPhoneDoc::~CPhoneDoc()
{
}

BOOL CPhoneDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPhoneDoc serialization

void CPhoneDoc::Serialize(CArchive& ar)
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
// CPhoneDoc diagnostics

#ifdef _DEBUG
void CPhoneDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPhoneDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPhoneDoc commands
