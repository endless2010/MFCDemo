#include<windows.h>
#include<stdio.h>

LRESULT CALLBACK WinMyProc(HWND hwnd,UINT uMsg,WPARAM wParam,LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine,int nCmdShow	)
{
  WNDCLASS wndcls;
  wndcls.cbClsExtra=0;
  wndcls.cbWndExtra=0;
  wndcls.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH);
  wndcls.hCursor=LoadCursor(NULL,IDC_CROSS);
  wndcls.hIcon=LoadIcon(NULL,IDI_ERROR);
  wndcls.hInstance=hInstance;
  wndcls.lpfnWndProc=WinMyProc;
  wndcls.lpszClassName="MyFirstClass";
  wndcls.lpszMenuName=NULL;
  wndcls.style=CS_HREDRAW|CS_VREDRAW;
  RegisterClass(&wndcls);

  HWND hwnd;
  hwnd=CreateWindow("MyFirstClass","SHow WinMain",WS_OVERLAPPEDWINDOW,0,0,600,400,
	                 NULL,NULL,hInstance,NULL);
  ShowWindow(hwnd,SW_SHOWNORMAL);
  UpdateWindow(hwnd);

  MSG msg;
  while(GetMessage(&msg,NULL,0,0))
  {
	  TranslateMessage(&msg);
	  DispatchMessage(&msg);
  }
  return msg.wParam;
}

LRESULT CALLBACK WinMyProc(HWND hwnd,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_CHAR:
		char szChar[20];
		sprintf(szChar,"the char is %c",wParam);
		MessageBox(hwnd,szChar,"char",0);
		break;
    case WM_LBUTTONDOWN:
		MessageBox(hwnd,"mouse clicked","message",0);
		HDC hdc;
		hdc=GetDC(hwnd);
		TextOut(hdc,0,0,"mouse clicked",strlen("mouse clicked"));
		ReleaseDC(hwnd,hdc);
		break;
	case WM_PAINT:
	//	HDC hdc;
		PAINTSTRUCT ps;
		hdc=BeginPaint(hwnd,&ps);
		TextOut(hdc,0,0,"this is a WM_PAINT message",strlen("this is a WM_PAINT message"));
		EndPaint(hwnd,&ps);
		break;
    case WM_CLOSE:
		if(IDYES==MessageBox(hwnd,"Are you sure you want to exit?",
			"Confirm Exit",MB_YESNO))
		{
			DestroyWindow(hwnd);
		}
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd,uMsg,wParam,lParam);
	}
	return 0;
}
