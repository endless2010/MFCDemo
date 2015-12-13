// PropPageView.cpp : implementation of the CPropPageView class
//

#include "stdafx.h"
#include "PropPage.h"

#include "PropPageDoc.h"
#include "PropPageView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPropPageView

IMPLEMENT_DYNCREATE(CPropPageView, CView)

BEGIN_MESSAGE_MAP(CPropPageView, CView)
	//{{AFX_MSG_MAP(CPropPageView)
	ON_COMMAND(IDM_PROPPAGE, OnProppage)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPropPageView construction/destruction

CPropPageView::CPropPageView()
{
	// TODO: add construction code here
m_iOccupation=-1;
m_strWorkAddr="";
m_salary="";
memset(m_bLike,0,sizeof(m_bLike));
}

CPropPageView::~CPropPageView()
{
}

BOOL CPropPageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CPropPageView drawing

void CPropPageView::OnDraw(CDC* pDC)
{
	CPropPageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CFont font;
	font.CreatePointFont(300,"华文楷体");
	CFont *pOldFont;
	pOldFont=pDC->SelectObject(&font);
	CString strTemp="你的职业:";

	switch(m_iOccupation)
	{
	case 0:
		strTemp+="程序员";
		break;
	case 1:
		strTemp+="系统工程师";
		break;
	case 2:
		strTemp+="项目经理";
		break;
	default:
		break;
	}
	pDC->TextOut(0,0,strTemp);

	strTemp="你的工作地点:";
	strTemp+=m_strWorkAddr;
	TEXTMETRIC tm;
	pDC->GetTextMetrics(&tm);
	pDC->TextOut(0,tm.tmHeight,strTemp);

	strTemp="你的兴趣爱好:";
    if(m_bLike[0])
	{
		strTemp+="足球";
	}
	if(m_bLike[1])
	{
		strTemp+="篮球";
	}
    if(m_bLike[2])
	{
		strTemp+="排球";
	} 
	if(m_bLike[3])
	{
		strTemp+="游泳";
	}
	pDC->TextOut(0,tm.tmHeight*2,strTemp);

	strTemp="你的薪资水平:";
	strTemp+=m_salary;
	pDC->TextOut(0,tm.tmHeight*3,strTemp);

	pDC->SelectObject(pOldFont);

}

/////////////////////////////////////////////////////////////////////////////
// CPropPageView printing

BOOL CPropPageView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CPropPageView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPropPageView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CPropPageView diagnostics

#ifdef _DEBUG
void CPropPageView::AssertValid() const
{
	CView::AssertValid();
}

void CPropPageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPropPageDoc* CPropPageView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPropPageDoc)));
	return (CPropPageDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPropPageView message handlers

void CPropPageView::OnProppage() 
{
	// TODO: Add your command handler code here
	CPropSheet propSheet("属性表单");
	propSheet.SetWizardMode();
	if(ID_WIZFINISH==propSheet.DoModal())
	{
     m_iOccupation=propSheet.m_prop1.m_occupation;
	 m_strWorkAddr=propSheet.m_prop1.m_workAddr;
	 m_salary=propSheet.m_prop3.m_salary;
	 m_bLike[0]=propSheet.m_prop2.m_football;
	 m_bLike[1]=propSheet.m_prop2.m_basketball;
 	 m_bLike[2]=propSheet.m_prop2.m_volleyball;
 	 m_bLike[3]=propSheet.m_prop2.m_swim;
     Invalidate();
	}
}
