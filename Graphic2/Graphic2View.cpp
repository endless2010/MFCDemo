// Graphic2View.cpp : implementation of the CGraphic2View class
//

#include "stdafx.h"
#include "Graphic2.h"
#include "Graph.h"
#include "Graphic2Doc.h"
#include "Graphic2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphic2View

IMPLEMENT_DYNCREATE(CGraphic2View, CView)

BEGIN_MESSAGE_MAP(CGraphic2View, CView)
	//{{AFX_MSG_MAP(CGraphic2View)
	CView(IDM_LINE, OnLine)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	//}}AFX_MSG_MAP
	// Standard printing commands
	CView(ID_FILE_PRINT, CView::OnFilePrint)
	CView(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	CView(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphic2View construction/destruction

CGraphic2View::CGraphic2View()
{
	// TODO: add construction code here
   m_ptOrigin=0;
}

CGraphic2View::~CGraphic2View()
{
}

BOOL CGraphic2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGraphic2View drawing

void CGraphic2View::OnDraw(CDC* pDC)
{
	CGraphic2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	for(int i=0;i<m_ptrArray.GetSize();i++)
	{
		pDC->MoveTo(((Graph*)m_ptrArray.GetAt(i))->m_ptOrigin);
		pDC->LineTo(((Graph*)m_ptrArray.GetAt(i))->m_ptEnd);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGraphic2View printing

BOOL CGraphic2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGraphic2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGraphic2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CGraphic2View diagnostics

#ifdef _DEBUG
void CGraphic2View::AssertValid() const
{
	CView::AssertValid();
}

void CGraphic2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraphic2Doc* CGraphic2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraphic2Doc)));
	return (CGraphic2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGraphic2View message handlers

void CGraphic2View::OnLine() 
{
	// TODO: Add your command handler code here
	
}

void CGraphic2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;
	CView::OnLButtonDown(nFlags, point);
}

void CGraphic2View::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	dc.MoveTo(m_ptOrigin);
	dc.LineTo(point);
	Graph *pGraph=new Graph(m_ptOrigin,point);
	m_ptrArray.Add(pGraph);
	CView::OnLButtonUp(nFlags, point);
}

//DEL void CGraphic2View::OnCancelMode() 
//DEL {
//DEL 	CView::OnCancelMode();
//DEL 	
//DEL 	// TODO: Add your message handler code here
//DEL 	
//DEL }
