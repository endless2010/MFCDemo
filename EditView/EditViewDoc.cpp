// EditViewDoc.cpp : implementation of the CEditViewDoc class
//

#include "stdafx.h"
#include "EditView.h"

#include "EditViewDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEditViewDoc

IMPLEMENT_DYNCREATE(CEditViewDoc, CDocument)

BEGIN_MESSAGE_MAP(CEditViewDoc, CDocument)
	//{{AFX_MSG_MAP(CEditViewDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEditViewDoc construction/destruction

CEditViewDoc::CEditViewDoc()
{
	// TODO: add one-time construction code here

}

CEditViewDoc::~CEditViewDoc()
{
}

BOOL CEditViewDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	((CEditView*)m_viewList.GetHead())->SetWindowText(NULL);

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEditViewDoc serialization

void CEditViewDoc::Serialize(CArchive& ar)
{
	// CEditView contains an edit control which handles all serialization
	((CEditView*)m_viewList.GetHead())->SerializeRaw(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CEditViewDoc diagnostics

#ifdef _DEBUG
void CEditViewDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEditViewDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEditViewDoc commands
