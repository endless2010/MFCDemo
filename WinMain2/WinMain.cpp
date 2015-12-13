#include <windows.h>
#include<stdio.h>

LRESULT CALLBACK WinProc1(
	HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam
);

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE HPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)
{
    WNDCLASS wndcls;
	wndcls.cbClsExtra =0;
	wndcls.cbWndExtra =0;
	wndcls.hbrBackground =(HBRUSH)GetStockObject(BLACK_BRUSH);
	wndcls.hCursor =LoadCursor(NULL,IDC_CROSS);
	wndcls.hIcon =LoadIcon(NULL,IDI_ERROR);
	wndcls.hInstance=hInstance;
	wndcls.lpfnWndProc =WinProc1;
	wndcls.lpszClassName ="MyWinMain";
	wndcls.lpszMenuName=NULL;
	wndcls.style =CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&wndcls);

	HWND hwnd;
	hwnd=CreateWindow("MyWinMain","my first win32 application",WS_OVERLAPPEDWINDOW,
		0,0,600,500,NULL,NULL,hInstance,NULL);
    
	ShowWindow(hwnd,SW_SHOWNORMAL);
	UpdateWindow(hwnd);

	MSG msg;
	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}

LRESULT CALLBACK WinProc1(
	HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam
)
{
	switch(uMsg)
	{
	case WM_CHAR:
		char szChar[20];
		sprintf(szChar,"char is %d",(char)wParam);
		MessageBox(hwnd,szChar,"show char",0);
		break;
	case WM_LBUTTONDOWN:
		MessageBox(hwnd,"mouse clicked","show mouse",0);
		HDC hdc;
		hdc=GetDC(hwnd);
        TextOut(hdc,0,50,"left button down",strlen("left button down"));
		ReleaseDC(hwnd,hdc);
		break;
	case WM_PAINT:
		HDC hDc;
		PAINTSTRUCT ps;
		hDc=BeginPaint(hwnd,&ps);
		TextOut(hDc,0,0,"repaint",strlen("repaint"));
		EndPaint(hwnd,&ps);
		break;
	case WM_CLOSE:
		if(IDYES==MessageBox(hwnd,"真的要退出吗?","close",MB_YESNO))
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