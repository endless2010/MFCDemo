// AppWizardView.cpp : implementation of the CAppWizardView class
//

#include "stdafx.h"
#include "AppWizard.h"

#include "AppWizardDoc.h"
#include "AppWizardView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAppWizardView

IMPLEMENT_DYNCREATE(CAppWizardView, CView)

BEGIN_MESSAGE_MAP(CAppWizardView, CView)
	//{{AFX_MSG_MAP(CAppWizardView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAppWizardView construction/destruction

CAppWizardView::CAppWizardView()
{
	// TODO: add construction code here

}

CAppWizardView::~CAppWizardView()
{
}

BOOL CAppWizardView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAppWizardView drawing

void CAppWizardView::OnDraw(CDC* pDC)
{
	CAppWizardDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CAppWizardView printing

BOOL CAppWizardView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAppWizardView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAppWizardView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CAppWizardView diagnostics

#ifdef _DEBUG
void CAppWizardView::AssertValid() const
{
	CView::AssertValid();
}

void CAppWizardView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAppWizardDoc* CAppWizardView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAppWizardDoc)));
	return (CAppWizardDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAppWizardView message handlers
