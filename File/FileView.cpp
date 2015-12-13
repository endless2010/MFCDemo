// FileView.cpp : implementation of the CFileView class
//

#include "stdafx.h"
#include "File.h"

#include "FileDoc.h"
#include "FileView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFileView

IMPLEMENT_DYNCREATE(CFileView, CView)

BEGIN_MESSAGE_MAP(CFileView, CView)
	//{{AFX_MSG_MAP(CFileView)
	ON_COMMAND(IDM_FILE_WRITE, OnFileWrite)
	ON_COMMAND(IDM_FILE_READ, OnFileRead)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFileView construction/destruction

CFileView::CFileView()
{
	// TODO: add construction code here

}

CFileView::~CFileView()
{
}

BOOL CFileView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFileView drawing

void CFileView::OnDraw(CDC* pDC)
{
	CFileDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(0,0,pBuf);
}

/////////////////////////////////////////////////////////////////////////////
// CFileView printing

BOOL CFileView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFileView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFileView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CFileView diagnostics

#ifdef _DEBUG
void CFileView::AssertValid() const
{
	CView::AssertValid();
}

void CFileView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFileDoc* CFileView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFileDoc)));
	return (CFileDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFileView message handlers

void CFileView::OnFileWrite() 
{
	// TODO: Add your command handler code here
	CFile file("1.txt",CFile::modeCreate|CFile::modeWrite);
	file.Write("hello world!",strlen("hello world!"));
	file.Close();
}

void CFileView::OnFileRead() 
{
	// TODO: Add your command handler code here
	CFile file("1.txt",CFile::modeRead);
	DWORD dwFileLen;
	dwFileLen=file.GetLength();
	pBuf=new char[dwFileLen+1];
	pBuf[dwFileLen]=0;
	file.Read(pBuf,dwFileLen);
	file.Close();
	//MessageBox(pBuf);
	Invalidate();
}
