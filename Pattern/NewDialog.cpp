// NewDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Pattern.h"
#include "NewDialog.h"
#include "CString"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewDialog dialog


CNewDialog::CNewDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CNewDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNewDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNewDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNewDialog, CDialog)
	//{{AFX_MSG_MAP(CNewDialog)
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewDialog message handlers

BOOL CNewDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CString str="class StringRep class b";
    CFile file("1.txt",CFile::modeRead);
	char *pBuf;
	DWORD dwFileLen;
	dwFileLen=file.GetLength();
	pBuf=new char[dwFileLen];
	pBuf[dwFileLen]=0;
	file.Read(pBuf,dwFileLen);
	file.Close();
	// TODO: Add extra initialization here
	SetDlgItemText(IDC_EDIT1,pBuf);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNewDialog::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
