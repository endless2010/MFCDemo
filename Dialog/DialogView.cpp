// DialogView.cpp : implementation of the CDialogView class
//

#include "stdafx.h"
#include "Dialog.h"

#include "DialogDoc.h"
#include "DialogView.h"
#include "Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogView

IMPLEMENT_DYNCREATE(CDialogView, CView)

BEGIN_MESSAGE_MAP(CDialogView, CView)
	//{{AFX_MSG_MAP(CDialogView)
	ON_COMMAND(IDM_DIALOG, OnDialog)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogView construction/destruction

CDialogView::CDialogView()
{
	// TODO: add construction code here
}

CDialogView::~CDialogView()
{
}

BOOL CDialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDialogView drawing

void CDialogView::OnDraw(CDC* pDC)
{
	CDialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CDialogView printing

BOOL CDialogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDialogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDialogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDialogView diagnostics

#ifdef _DEBUG
void CDialogView::AssertValid() const
{
	CView::AssertValid();
}

void CDialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDialogDoc* CDialogView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDialogDoc)));
	return (CDialogDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDialogView message handlers

void CDialogView::OnDialog() 
{
	// TODO: Add your command handler code here
	CDlg* ptestDlg=new CDlg;
	//testDlg.DoModal();
	ptestDlg->Create(IDD_DIALOG1,this);
    ptestDlg->ShowWindow(SW_SHOW);
}

//DEL void CDialogView::OnAdd() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL    MessageBox("Hlelo");
//DEL 	if(!m_bIsCreated)
//DEL    {
//DEL 	m_button.Create("New Button",BS_DEFPUSHBUTTON|WS_VISIBLE|WS_CHILD,
//DEL 	CRect(0,0,200,100),this ,123);
//DEL     m_bIsCreated=TRUE;
//DEL    }
//DEL    else
//DEL    {
//DEL 	   m_button.DestroyWindow();
//DEL 	   m_bIsCreated=FALSE;
//DEL    }
//DEL }

//DEL void CDialogView::OnAdd() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 
//DEL }
