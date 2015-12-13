// AddDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ADD.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddDlg dialog


CAddDlg::CAddDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddDlg)
	m_number1 = 0;
	m_number2 = 0;
	m_sum = 0;
	flag=TRUE;
	//}}AFX_DATA_INIT
}


void CAddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddDlg)
	DDX_Text(pDX, IDC_EDIT1, m_number1);
	DDV_MinMaxInt(pDX, m_number1, 0, 100);
	DDX_Text(pDX, IDC_EDIT2, m_number2);
	DDX_Text(pDX, IDC_SUM, m_sum);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddDlg, CDialog)
	//{{AFX_MSG_MAP(CAddDlg)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddDlg message handlers

void CAddDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
  UpdateData(TRUE);
  m_sum=m_number1+m_number2;
  UpdateData(FALSE);
}

void CAddDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	static CRect rectLarge;
	static CRect rectSmall;
	
	if(rectLarge.IsRectNull())
	{
    CRect rectPicture;
	GetWindowRect(&rectLarge);
	GetDlgItem(IDC_PICTURE)->GetWindowRect(&rectPicture);
	rectSmall.left=rectLarge.left;
	rectSmall.top=rectLarge.top;
	rectSmall.right=rectLarge.right;
	rectSmall.bottom=rectPicture.bottom;
	}
	if(flag)
	{
        flag=FALSE;
		SetDlgItemText(IDC_BUTTON1,"¿©’π>>>");
		SetWindowPos(NULL,0,0,rectSmall.Width(),rectSmall.Height(),
			SWP_NOMOVE|SWP_NOZORDER);
	}
	else
	{
		flag=TRUE;
		SetDlgItemText(IDC_BUTTON1," ’Àı<<<");
		SetWindowPos(NULL,0,0,rectLarge.Width(),rectLarge.Height(),
		SWP_NOMOVE|SWP_NOZORDER);
	}

}
