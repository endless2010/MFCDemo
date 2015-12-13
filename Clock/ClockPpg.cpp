// ClockPpg.cpp : Implementation of the CClockPropPage property page class.

#include "stdafx.h"
#include "Clock.h"
#include "ClockPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CClockPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CClockPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CClockPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CClockPropPage, "CLOCK.ClockPropPage.1",
	0xacafbffd, 0x8e54, 0x48a9, 0xad, 0x8c, 0x11, 0x9f, 0xb1, 0x9a, 0xaa, 0xe3)


/////////////////////////////////////////////////////////////////////////////
// CClockPropPage::CClockPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CClockPropPage

BOOL CClockPropPage::CClockPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_CLOCK_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CClockPropPage::CClockPropPage - Constructor

CClockPropPage::CClockPropPage() :
	COlePropertyPage(IDD, IDS_CLOCK_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CClockPropPage)
	m_UpdateInterval = 0;
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CClockPropPage::DoDataExchange - Moves data between page and properties

void CClockPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CClockPropPage)
	DDP_Text(pDX, IDC_EDIT_INTERVAL, m_UpdateInterval, _T("Interval") );
	DDX_Text(pDX, IDC_EDIT_INTERVAL, m_UpdateInterval);
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CClockPropPage message handlers
