// MetaFIleView.cpp : implementation of the CMetaFIleView class
//

#include "stdafx.h"
#include "MetaFIle.h"

#include "MetaFIleDoc.h"
#include "MetaFIleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleView

IMPLEMENT_DYNCREATE(CMetaFIleView, CView)

BEGIN_MESSAGE_MAP(CMetaFIleView, CView)
	//{{AFX_MSG_MAP(CMetaFIleView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CANCELMODE()
	ON_COMMAND(ID_FILE_SAVE, OnFileSave)
	ON_COMMAND(ID_FILE_OPEN, OnFileOpen)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleView construction/destruction

CMetaFIleView::CMetaFIleView()
{
	// TODO: add construction code here
    m_ptOrigin=0;
}

CMetaFIleView::~CMetaFIleView()
{
}

BOOL CMetaFIleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleView drawing

void CMetaFIleView::OnDraw(CDC* pDC)
{
	CMetaFIleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	HMETAFILE hmetaFile;
	hmetaFile=m_dcMetaFile.Close();
	pDC->PlayMetaFile(hmetaFile);
	m_dcMetaFile.Create();
	m_dcMetaFile.PlayMetaFile(hmetaFile);
	DeleteMetaFile(hmetaFile);
}

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleView printing

BOOL CMetaFIleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMetaFIleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMetaFIleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleView diagnostics

#ifdef _DEBUG
void CMetaFIleView::AssertValid() const
{
	CView::AssertValid();
}

void CMetaFIleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMetaFIleDoc* CMetaFIleView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMetaFIleDoc)));
	return (CMetaFIleDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMetaFIleView message handlers

void CMetaFIleView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;
	CView::OnLButtonDown(nFlags, point);
}

void CMetaFIleView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	CPen pen(PS_SOLID,5,RGB(0,0,255));
	m_dcMetaFile.SelectObject(&pen);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	m_dcMetaFile.SelectObject(pBrush);
    m_dcMetaFile.MoveTo(m_ptOrigin);
	m_dcMetaFile.LineTo(point);

	CView::OnLButtonUp(nFlags, point);
}

void CMetaFIleView::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CMetaFIleView::OnFileSave() 
{
	// TODO: Add your command handler code here
	HMETAFILE hmetaFile;
	hmetaFile=m_dcMetaFile.Close();
	CopyMetaFile(hmetaFile,"meta.wmf");
	m_dcMetaFile.Create();
	DeleteMetaFile(hmetaFile);
}

void CMetaFIleView::OnFileOpen() 
{
	// TODO: Add your command handler code here
	HMETAFILE hmetaFile;
	hmetaFile=GetMetaFile("meta.wmf");
	m_dcMetaFile.PlayMetaFile(hmetaFile);
	DeleteMetaFile(hmetaFile);
	Invalidate();
}
