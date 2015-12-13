// ArchiveDoc.cpp : implementation of the CArchiveDoc class
//

#include "stdafx.h"
#include "Archive.h"
#include "ArchiveDoc.h"
#include "ArchiveView.h"
#include "Graph.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CArchiveDoc

IMPLEMENT_DYNCREATE(CArchiveDoc, CDocument)

BEGIN_MESSAGE_MAP(CArchiveDoc, CDocument)
	//{{AFX_MSG_MAP(CArchiveDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CArchiveDoc construction/destruction

CArchiveDoc::CArchiveDoc()
{
	// TODO: add one-time construction code here

}

CArchiveDoc::~CArchiveDoc()
{
}

BOOL CArchiveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
    SetTitle("Welcome Visual C++!");
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CArchiveDoc serialization

void CArchiveDoc::Serialize(CArchive& ar)
{
	POSITION pos=GetFirstViewPosition();
	CArchiveView *pView=(CArchiveView*)GetNextView(pos);
	if (ar.IsStoring())
	{
		// TODO: add storing code here
		//int i=5;
	//	char ch='b';
	//	float f=1.2f;
	//	CString str("Hello World!");
	//	ar<<i<<ch<<f<<str;
	//	int nCount=pView->m_obArray.GetSize();
	//	ar<<nCount;
	//	for(int i=0;i<nCount;i++)
	//	{
	//		ar<<pView->m_obArray.GetAt(i);
	//	}
	}
	else
	{
		// TODO: add loading code here
		//int i;
	//	char ch;
	//	float f;
	//	CString str;
	//	CString strResult;
	//	ar>>i>>ch>>f>>str;
	//	strResult.Format("%d,%c,%f,%s",i,ch,f,str);
	//	AfxMessageBox(strResult);
	//	int nCount;
	//	ar>>nCount;
	//	CGraph *pGraph;
	//	for(int i=0;i<nCount;i++)
	//	{
	//		ar>>pGraph;
	//		pView->m_obArray.Add(pGraph);
	//	}
	}
	//pView->m_obArray.Serialize(ar);
	m_obArray.Serialize(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CArchiveDoc diagnostics

#ifdef _DEBUG
void CArchiveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CArchiveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CArchiveDoc commands

void CArchiveDoc::DeleteContents() 
{
	// TODO: Add your specialized code here and/or call the base class
int nCount=m_obArray.GetSize();
	for(int i=0;i<nCount;i++)
	{
		delete m_obArray.GetAt(i);
	}
	m_obArray.RemoveAll();
	CDocument::DeleteContents();
}

BOOL CArchiveDoc::CanCloseFrame(CFrameWnd* pFrame) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDocument::CanCloseFrame(pFrame);
}

POSITION CArchiveDoc::GetFirstViewPosition() const
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDocument::GetFirstViewPosition();
}
