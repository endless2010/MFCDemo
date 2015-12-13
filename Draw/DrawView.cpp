// DrawView.cpp : implementation of the CDrawView class
//

#include "stdafx.h"
#include "Draw.h"

#include "DrawDoc.h"
#include "DrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawView

IMPLEMENT_DYNCREATE(CDrawView, CView)

BEGIN_MESSAGE_MAP(CDrawView, CView)
	//{{AFX_MSG_MAP(CDrawView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawView construction/destruction

CDrawView::CDrawView()
{
	// TODO: add construction code here
   m_ptOrigin.x=0;
   m_ptOrigin.y=0;
}

CDrawView::~CDrawView()
{
}

BOOL CDrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDrawView drawing

void CDrawView::OnDraw(CDC* pDC)
{
	CDrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CDrawView printing

BOOL CDrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDrawView diagnostics

#ifdef _DEBUG
void CDrawView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawDoc* CDrawView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawDoc)));
	return (CDrawDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDrawView message handlers

void CDrawView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;
	CView::OnLButtonDown(nFlags, point);
}

void CDrawView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
//	CClientDC dc(this);
//	CWindowDC dc(GetDesktopWindow());
//	CPen pen(PS_SOLID,5,RGB(0,255,0));
//	CPen* pOldPen=dc.SelectObject(&pen);
//	CBrush brush(RGB(0,255,0));
//	CBitmap bitmap;
//	bitmap.LoadBitmap(IDB_BITMAP1);
//	CBrush brush(&bitmap);
//	dc.FillRect(CRect(m_ptOrigin,point),&brush);
//	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
//	CBrush *pOldBrush=dc.SelectObject(pBrush);
//  dc.Rectangle(CRect(m_ptOrigin,point));
//	dc.MoveTo(m_ptOrigin);
//	dc.LineTo(point);
//	dc.SelectObject(pOldPen);
//	dc.SelectObject(pOldBrush);
	m_ptOrigin=point;
	CView::OnLButtonUp(nFlags, point);
}

void CDrawView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	//CClientDC dc(GetParent());
	CClientDC dc(this);
	CPen pen(PS_SOLID,5,RGB(0,255,0));
	CPen* pOldpen=dc.SelectObject(&pen);
	dc.MoveTo(m_ptOrigin);
	dc.LineTo(point);
	m_ptOrigin=point;
	dc.SelectObject(pOldpen);
	CView::OnMouseMove(nFlags, point);
}
