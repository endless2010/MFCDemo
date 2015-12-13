; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CRunButtonDlg
LastTemplate=CButton
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "RunButton.h"

ClassCount=4
Class1=CRunButtonApp
Class2=CRunButtonDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CNewButton
Resource3=IDD_RUNBUTTON_DIALOG

[CLS:CRunButtonApp]
Type=0
HeaderFile=RunButton.h
ImplementationFile=RunButton.cpp
Filter=N

[CLS:CRunButtonDlg]
Type=0
HeaderFile=RunButtonDlg.h
ImplementationFile=RunButtonDlg.cpp
Filter=D
LastObject=IDC_BUTTON1
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=RunButtonDlg.h
ImplementationFile=RunButtonDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_RUNBUTTON_DIALOG]
Type=1
Class=CRunButtonDlg
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1073807360

[CLS:CNewButton]
Type=0
HeaderFile=NewButton.h
ImplementationFile=NewButton.cpp
BaseClass=CButton
Filter=W
LastObject=CNewButton
VirtualFilter=BWC

