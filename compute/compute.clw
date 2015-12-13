; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CComputeDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "compute.h"

ClassCount=3
Class1=CComputeApp
Class2=CComputeDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_COMPUTE_DIALOG

[CLS:CComputeApp]
Type=0
HeaderFile=compute.h
ImplementationFile=compute.cpp
Filter=N

[CLS:CComputeDlg]
Type=0
HeaderFile=computeDlg.h
ImplementationFile=computeDlg.cpp
Filter=D
LastObject=IDC_OK
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=computeDlg.h
ImplementationFile=computeDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_COMPUTE_DIALOG]
Type=1
Class=CComputeDlg
ControlCount=7
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_PLUS,button,1342177289
Control3=IDC_MINUS,button,1342177289
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308353
Control6=IDC_RESULT,edit,1350631552
Control7=IDC_OK,button,1342242816

