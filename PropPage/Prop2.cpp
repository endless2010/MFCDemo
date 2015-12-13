// Prop2.cpp : implementation file
//

#include "stdafx.h"
#include "PropPage.h"
#include "Prop2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProp2 property page

IMPLEMENT_DYNCREATE(CProp2, CPropertyPage)

CProp2::CProp2() : CPropertyPage(CProp2::IDD)
{
	//{{AFX_DATA_INIT(CProp2)
	m_football = FALSE;
	m_basketball = FALSE;
	m_volleyball = FALSE;
	m_swim = FALSE;
	//}}AFX_DATA_INIT
}

CProp2::~CProp2()
{
}

void CProp2::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProp2)
	DDX_Check(pDX, IDC_CHECK1, m_football);
	DDX_Check(pDX, IDC_CHECK2, m_basketball);
	DDX_Check(pDX, IDC_CHECK3, m_volleyball);
	DDX_Check(pDX, IDC_CHECK4, m_swim);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProp2, CPropertyPage)
	//{{AFX_MSG_MAP(CProp2)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProp2 message handlers

LRESULT CProp2::OnWizardNext() 
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData();
	if(m_basketball|m_football|m_swim|m_volleyball)
	    return CPropertyPage::OnWizardNext();
    else
	{
      MessageBox("«Î ‰»Îƒ„µƒ∞Æ∫√");
	  return -1;
	}
}
