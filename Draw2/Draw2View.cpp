// Draw2View.cpp : implementation of the CDraw2View class
//

#include "stdafx.h"
#include "Draw2.h"

#include "Draw2Doc.h"
#include "Draw2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDraw2View

IMPLEMENT_DYNCREATE(CDraw2View, CView)

BEGIN_MESSAGE_MAP(CDraw2View, CView)
	//{{AFX_MSG_MAP(CDraw2View)
	ON_WM_CREATE()
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDraw2View construction/destruction

CDraw2View::CDraw2View()
{
	// TODO: add construction code here
   m_strLine="";
   m_ptPoint.x=0;
   m_ptPoint.y=0;
   m_count=0;
   m_nWidth=0;
   str.LoadString(IDS_SHOWTIMER);
}

CDraw2View::~CDraw2View()
{
}

BOOL CDraw2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDraw2View drawing

void CDraw2View::OnDraw(CDC* pDC)
{
	CDraw2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
   // pDC->TextOut(m_ptPoint.x,m_ptPoint.y,m_strLine);
	pDC->TextOut(0,0,str);
}

/////////////////////////////////////////////////////////////////////////////
// CDraw2View printing

BOOL CDraw2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDraw2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDraw2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDraw2View diagnostics

#ifdef _DEBUG
void CDraw2View::AssertValid() const
{
	CView::AssertValid();
}

void CDraw2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDraw2Doc* CDraw2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDraw2Doc)));
	return (CDraw2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDraw2View message handlers

int CDraw2View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	CreateSolidCaret(tm.tmAveCharWidth/8,tm.tmHeight);
//	ShowCaret();
	SetTimer(1,100,NULL);
	return 0;
}

void CDraw2View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
    CClientDC dc(this);
//	CFont font;
//	font.CreatePointFont(300,"¿¬Ìå_GB2312",NULL);
//	CFont *pOldFont=dc.SelectObject(&font);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
    if(0x0d==nChar)
	{
		m_strLine.Empty();
		m_ptPoint.y+=tm.tmHeight;
	}
	else if(0x08==nChar)
	{
        COLORREF clr=dc.SetTextColor(dc.GetBkColor());
		dc.TextOut(m_ptPoint.x,m_ptPoint.y,m_strLine);
		m_strLine=m_strLine.Left(m_strLine.GetLength()-1);
		dc.SetTextColor(clr);
      //  Invalidate();
	}
	else
	{
	m_strLine+=nChar;
	}
	CPoint pt;
    CSize sz=dc.GetTextExtent(m_strLine);
	pt.x=sz.cx+m_ptPoint.x;
	pt.y=m_ptPoint.y;
	SetCaretPos(pt);
	dc.TextOut(m_ptPoint.x,m_ptPoint.y,m_strLine);
//	dc.SelectObject(pOldFont);
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CDraw2View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	SetCaretPos(point);
	m_strLine.Empty();
	m_ptPoint=point;
	CView::OnLButtonDown(nFlags, point);
}

void CDraw2View::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnLButtonUp(nFlags, point);
}

void CDraw2View::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CRect rect;
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	m_nWidth+=5;
	rect.left=0;
	rect.top=0;
	rect.right=m_nWidth;
	rect.bottom=rect.top+tm.tmHeight;
	dc.SetTextColor(RGB(0,255,0));
	dc.DrawText(str,rect,DT_LEFT);

	CSize sz=dc.GetTextExtent(str);
	if(m_nWidth>sz.cx)
	{
		m_nWidth=0;
		dc.SetTextColor(RGB(255,0,0));
		dc.TextOut(0,0,str);
	}

	CView::OnTimer(nIDEvent);
}
