// PhoneView.cpp : implementation of the CPhoneView class
//

#include "stdafx.h"
#include "Phone.h"

#include "PhoneDoc.h"
#include "PhoneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPhoneView

IMPLEMENT_DYNCREATE(CPhoneView, CView)

BEGIN_MESSAGE_MAP(CPhoneView, CView)
	//{{AFX_MSG_MAP(CPhoneView)
	ON_WM_CHAR()
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_COMMAND(IDM_PHONE1,OnPhone1)
	ON_COMMAND(IDM_PHONE2,OnPhone2)
	ON_COMMAND(IDM_PHONE3,OnPhone3)
	ON_COMMAND(IDM_PHONE4,OnPhone4)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPhoneView construction/destruction

CPhoneView::CPhoneView()
{
	// TODO: add construction code here
   m_count=-1;
   m_str="";
  // point.x=0;
  // point.y=0;
   
}

CPhoneView::~CPhoneView()
{
}

BOOL CPhoneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CPhoneView drawing

void CPhoneView::OnDraw(CDC* pDC)
{
	CPhoneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CPhoneView printing

BOOL CPhoneView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CPhoneView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPhoneView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CPhoneView diagnostics

#ifdef _DEBUG
void CPhoneView::AssertValid() const
{
	CView::AssertValid();
}

void CPhoneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPhoneDoc* CPhoneView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPhoneDoc)));
	return (CPhoneDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPhoneView message handlers

void CPhoneView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	if(0x0d==nChar)
	{
		if(3==m_count)
		{
			MessageBox("You cannot input any more");
			return;
		}
		if(0==++m_count)
		{
	     m_menu.CreatePopupMenu();
	     GetParent()->GetMenu()->AppendMenu(MF_POPUP,(UINT)m_menu.m_hMenu,"PhoneBook");
	     GetParent()->DrawMenuBar();
		}
		 CClientDC dc(this);
	     COLORREF clr=dc.SetTextColor(dc.GetBkColor());
	     dc.TextOut(0,0,m_str);
	     dc.SetTextColor(clr);
	     CString str_name=m_str.Left(m_str.Find(' '));
	     m_strArray.Add(m_str);
		 m_str.Empty();
	     m_menu.AppendMenu(MF_STRING,IDM_PHONE1+m_count,str_name);
	}else
	{
		m_str+=nChar;
	}
	CClientDC dc(this);
	CSize sz=dc.GetTextExtent(m_str);
	CPoint point;
	point.x=sz.cx;
	point.y=0;
	SetCaretPos(point);
	dc.TextOut(0,0,m_str);
	CView::OnChar(nChar, nRepCnt, nFlags);
}

int CPhoneView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	CreateSolidCaret(tm.tmAveCharWidth/8,tm.tmHeight);
	ShowCaret();
	return 0;
}
void CPhoneView::OnPhone1()
{  

	CString str=m_strArray.GetAt(0);
	CClientDC dc(this);
	dc.TextOut(0,0,str);
	 	coloref=dc.SetTextColor(dc.GetBkColor());
}
void CPhoneView::OnPhone2()
{
	CString str=m_strArray.GetAt(1);
	CClientDC dc(this);
	dc.TextOut(0,0,str);
	 	coloref=dc.SetTextColor(dc.GetBkColor());
}
void CPhoneView::OnPhone3()
{

	CString str=m_strArray.GetAt(2);
	CClientDC dc(this);
	dc.TextOut(0,0,str);
 	coloref=dc.SetTextColor(dc.GetBkColor());
}
void CPhoneView::OnPhone4()
{

	CString str=m_strArray.GetAt(3);
	CClientDC dc(this);
	dc.TextOut(0,0,str);
 	coloref=dc.SetTextColor(dc.GetBkColor());
}
//DEL void CPhoneView::OnCancelMode() 
//DEL {
//DEL 	CView::OnCancelMode();
//DEL 	
//DEL 	// TODO: Add your message handler code here
//DEL 	CClientDC dc(this);
//DEL 	TEXTMETRIC tm;
//DEL 	dc.GetTextMetrics(&tm);
//DEL 	CreateSolidCaret(tm.tmAveCharWidth/8,tm.tmHeight);
//DEL 	ShowCaret();
//DEL }

//DEL void CPhoneView::OnCancelMode() 
//DEL {
//DEL 	CView::OnCancelMode();
//DEL 	
//DEL 	// TODO: Add your message handler code here
//DEL 	
//DEL }
