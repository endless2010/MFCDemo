// TextView.cpp : implementation of the CTextView class
//

#include "stdafx.h"
#include "Text.h"

#include "TextDoc.h"
#include "TextView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTextView

IMPLEMENT_DYNCREATE(CTextView, CView)

BEGIN_MESSAGE_MAP(CTextView, CView)
	//{{AFX_MSG_MAP(CTextView)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTextView construction/destruction

CTextView::CTextView()
{
	// TODO: add construction code here
}

CTextView::~CTextView()
{
}

BOOL CTextView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTextView drawing

void CTextView::OnDraw(CDC* pDC)
{
	CTextDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CString str;
	str.LoadString(IDS_STRINGNEW);
	pDC->TextOut(50,50,str);
	CSize sz=pDC->GetTextExtent(str);
	pDC->BeginPath();
	pDC->Rectangle(50,50,50+sz.cx,50+sz.cy);
	pDC->EndPath();
	pDC->SelectClipPath(RGN_DIFF);
	for(int i=0;i<300;i+=10)
	{
		pDC->MoveTo(0,i);
		pDC->LineTo(300,i);
		pDC->MoveTo(i,0);
		pDC->LineTo(i,300);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTextView printing

BOOL CTextView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTextView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTextView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTextView diagnostics

#ifdef _DEBUG
void CTextView::AssertValid() const
{
	CView::AssertValid();
}

void CTextView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTextDoc* CTextView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTextDoc)));
	return (CTextDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTextView message handlers

int CTextView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	//CreateSolidCaret(20,100);
	//ShowCaret();
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	CreateSolidCaret(tm.tmAveCharWidth/8,tm.tmHeight);
	//bitmap.LoadBitmap(IDB_BITMAP1);
	//CreateCaret(&bitmap);
	ShowCaret();
	return 0;
}
