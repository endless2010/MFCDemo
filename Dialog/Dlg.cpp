// Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Dialog.h"
#include "Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlg dialog


CDlg::CDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_bIsCreated=FALSE;
}


void CDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlg, CDialog)
	//{{AFX_MSG_MAP(CDlg)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlg message handlers

void CDlg::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
	delete this;
	CDialog::PostNcDestroy();
}

//DEL void CDlg::OnAdd() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 	
//DEL }

void CDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
	if(!m_bIsCreated)
   {
	m_button.Create("New Button",BS_DEFPUSHBUTTON|WS_VISIBLE|WS_CHILD,
	CRect(0,0,200,100),this ,123);
    m_bIsCreated=TRUE;
   }
   else
   {
	   m_button.DestroyWindow();
	   m_bIsCreated=FALSE;
   }	
}
