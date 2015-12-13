; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CNewDialog
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Pattern.h"

ClassCount=4
Class1=CPatternApp
Class2=CPatternDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_PATTERN_DIALOG
Class4=CNewDialog
Resource4=IDD_DIALOG1

[CLS:CPatternApp]
Type=0
HeaderFile=Pattern.h
ImplementationFile=Pattern.cpp
Filter=N

[CLS:CPatternDlg]
Type=0
HeaderFile=PatternDlg.h
ImplementationFile=PatternDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CPatternDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=PatternDlg.h
ImplementationFile=PatternDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_PATTERN_DIALOG]
Type=1
Class=CPatternDlg
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1342242816

[DLG:IDD_DIALOG1]
Type=1
Class=CNewDialog
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350635652
Control4=IDC_BUTTON1,button,1342242816
Control5=IDC_EDIT2,edit,1350631552

[CLS:CNewDialog]
Type=0
HeaderFile=NewDialog.h
ImplementationFile=NewDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=CNewDialog
VirtualFilter=dWC

