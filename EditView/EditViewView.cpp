// EditViewView.cpp : implementation of the CEditViewView class
//

#include "stdafx.h"
#include "EditView.h"

#include "EditViewDoc.h"
#include "EditViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEditViewView

IMPLEMENT_DYNCREATE(CEditViewView, CEditView)

BEGIN_MESSAGE_MAP(CEditViewView, CEditView)
	//{{AFX_MSG_MAP(CEditViewView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEditViewView construction/destruction

CEditViewView::CEditViewView()
{
	// TODO: add construction code here

}

CEditViewView::~CEditViewView()
{
}

BOOL CEditViewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}

/////////////////////////////////////////////////////////////////////////////
// CEditViewView drawing

void CEditViewView::OnDraw(CDC* pDC)
{
	CEditViewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CEditViewView printing

BOOL CEditViewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CEditViewView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CEditViewView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CEditViewView diagnostics

#ifdef _DEBUG
void CEditViewView::AssertValid() const
{
	CEditView::AssertValid();
}

void CEditViewView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CEditViewDoc* CEditViewView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEditViewDoc)));
	return (CEditViewDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEditViewView message handlers
