// ADDView.cpp : implementation of the CADDView class
//

#include "stdafx.h"
#include "ADD.h"

#include "ADDDoc.h"
#include "ADDView.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CADDView

IMPLEMENT_DYNCREATE(CADDView, CView)

BEGIN_MESSAGE_MAP(CADDView, CView)
	//{{AFX_MSG_MAP(CADDView)
	ON_COMMAND(IDM_ADD, OnAdd)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CADDView construction/destruction

CADDView::CADDView()
{
	// TODO: add construction code here

}

CADDView::~CADDView()
{
}

BOOL CADDView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CADDView drawing

void CADDView::OnDraw(CDC* pDC)
{
	CADDDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CADDView printing

BOOL CADDView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CADDView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CADDView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CADDView diagnostics

#ifdef _DEBUG
void CADDView::AssertValid() const
{
	CView::AssertValid();
}

void CADDView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CADDDoc* CADDView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CADDDoc)));
	return (CADDDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CADDView message handlers

void CADDView::OnAdd() 
{
	// TODO: Add your command handler code here
	CAddDlg dlg;
	dlg.DoModal();
}
