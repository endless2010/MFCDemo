// CompatibleDCView.cpp : implementation of the CCompatibleDCView class
//

#include "stdafx.h"
#include "CompatibleDC.h"

#include "CompatibleDCDoc.h"
#include "CompatibleDCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCView

IMPLEMENT_DYNCREATE(CCompatibleDCView, CView)

BEGIN_MESSAGE_MAP(CCompatibleDCView, CView)
	//{{AFX_MSG_MAP(CCompatibleDCView)
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
// CCompatibleDCView construction/destruction

CCompatibleDCView::CCompatibleDCView()
{
	// TODO: add construction code here
   m_ptOrigin=0;
}

CCompatibleDCView::~CCompatibleDCView()
{
}

BOOL CCompatibleDCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCView drawing

void CCompatibleDCView::OnDraw(CDC* pDC)
{
	CCompatibleDCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CRect rect;
	GetClientRect(&rect);
	pDC->BitBlt(0,0,rect.Width(),rect.Height(),&m_dcCompatible,0,0,SRCCOPY);
}

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCView printing

BOOL CCompatibleDCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCompatibleDCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCompatibleDCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCView diagnostics

#ifdef _DEBUG
void CCompatibleDCView::AssertValid() const
{
	CView::AssertValid();
}

void CCompatibleDCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCompatibleDCDoc* CCompatibleDCView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCompatibleDCDoc)));
	return (CCompatibleDCDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCompatibleDCView message handlers

void CCompatibleDCView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;		
	CView::OnLButtonDown(nFlags, point);
}

void CCompatibleDCView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
    if(!m_dcCompatible.m_hDC)
	{
		m_dcCompatible.CreateCompatibleDC(&dc);
		CRect rect;
		GetClientRect(&rect);
		CBitmap bitmap;
		bitmap.CreateCompatibleBitmap(&dc,rect.Width(),rect.Height());
		m_dcCompatible.SelectObject(&bitmap);
		m_dcCompatible.SelectObject(pBrush);
		m_dcCompatible.BitBlt(0,0,rect.Width(),rect.Height(),&m_dcCompatible,0,0,SRCCOPY);
	}
	m_dcCompatible.MoveTo(m_ptOrigin);
	m_dcCompatible.LineTo(point);
	CView::OnLButtonUp(nFlags, point);
}

void CCompatibleDCView::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
