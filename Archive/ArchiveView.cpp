// ArchiveView.cpp : implementation of the CArchiveView class
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
// CArchiveView

IMPLEMENT_DYNCREATE(CArchiveView, CView)

BEGIN_MESSAGE_MAP(CArchiveView, CView)
	//{{AFX_MSG_MAP(CArchiveView)
	ON_COMMAND(IDM_FILE_WRITE, OnFileWrite)
	ON_COMMAND(IDM_FILE_READ, OnFileRead)
	ON_COMMAND(IDM_DOT, OnDot)
	ON_COMMAND(IDM_ELLIPSE, OnEllipse)
	ON_COMMAND(IDM_LINE, OnLine)
	ON_COMMAND(IDM_RECTANGLE, OnRectangle)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CArchiveView construction/destruction

CArchiveView::CArchiveView()
{
	// TODO: add construction code here
m_strResult="";
m_nDrawType=0;
m_ptOrigin=0;
}

CArchiveView::~CArchiveView()
{
}

BOOL CArchiveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CArchiveView drawing

void CArchiveView::OnDraw(CDC* pDC)
{
	CArchiveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
//	pDC->TextOut(0,0,m_strResult);
   		int nCount;
	   // nCount=m_obArray.GetSize();
		nCount=pDoc->m_obArray.GetSize();
		for(int i=0;i<nCount;i++)
		{
	//	((CGraph*)m_obArray.GetAt(i))->Draw(pDC);
	((CGraph*)pDoc->m_obArray.GetAt(i))->Draw(pDC);
		}
}

/////////////////////////////////////////////////////////////////////////////
// CArchiveView printing

BOOL CArchiveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CArchiveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CArchiveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CArchiveView diagnostics

#ifdef _DEBUG
void CArchiveView::AssertValid() const
{
	CView::AssertValid();
}

void CArchiveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CArchiveDoc* CArchiveView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CArchiveDoc)));
	return (CArchiveDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CArchiveView message handlers

void CArchiveView::OnFileWrite() 
{
	// TODO: Add your command handler code here
	CFile file("1.txt",CFile::modeCreate|CFile::modeWrite);
	CArchive ar(&file,CArchive::store);
	int i=4;
	char ch='a';
	float f=1.3f;
	CString str("Hello World!");
	ar<<i<<ch<<f<<str;
}

void CArchiveView::OnFileRead() 
{
	// TODO: Add your command handler code here
	CFile file("1.txt",CFile::modeRead);
	CArchive ar(&file,CArchive::load);
	int i;
	char ch;
	float f;
	CString str;
	CString strResult;
	ar>>i>>ch>>f>>str;
	m_strResult.Format("%d,%c,%f,%s",i,ch,f,str);
	Invalidate();
//	MessageBox(strResult);
}

void CArchiveView::OnDot() 
{
	// TODO: Add your command handler code here
	m_nDrawType=1;
}

void CArchiveView::OnEllipse() 
{
	// TODO: Add your command handler code here
	m_nDrawType=4;
}

void CArchiveView::OnLine() 
{
	// TODO: Add your command handler code here
	m_nDrawType=2;
}

void CArchiveView::OnRectangle() 
{
	// TODO: Add your command handler code here
	m_nDrawType=3;
}

void CArchiveView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;
	CView::OnLButtonDown(nFlags, point);
}

void CArchiveView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	dc.SelectObject(pBrush);
	switch(m_nDrawType)
	{
	case 1:
		dc.SetPixel(point,RGB(0,0,255));
		break;
	case 2:
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(point);
		break;
	case 3:
		dc.Rectangle(CRect(m_ptOrigin,point));
		break;
	case 4:
		dc.Ellipse(CRect(m_ptOrigin,point));
		break;
	}
	CGraph *pGraph=new CGraph(m_nDrawType,m_ptOrigin,point);
	//m_obArray.Add(pGraph);
	CArchiveDoc* pDoc=GetDocument();
	pDoc->m_obArray.Add(pGraph);
	CView::OnLButtonUp(nFlags, point);
}

void CArchiveView::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
