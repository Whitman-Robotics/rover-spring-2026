#include <windows.h>
#include <iostream>
#include <tchar.h>

/*
Naming conventions:

sz: Zero-terminated string
h: Handle (e.g., hwnd for Handle to Window, hInstance for Handle to Instance)
lp: Long pointer
cb: Count of bytes (in a data structure)
dw: Double word (32-bit unsigned integer)
w: Word (16-bit unsigned integer)
i: Integer */

static TCHAR szWindowClass[] = _T("RoverApp");
static TCHAR szTitle[] = _T("rover_app26_v1");

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    if (message == WM_DESTROY) { 
        PostQuitMessage(0); 
        return 0; 
    }

    switch (message) {
        
    }


    return DefWindowProc(hWnd, message, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASSEX wcex = { sizeof(WNDCLASSEX) };
    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.hInstance      = hInstance;
    wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszClassName  = szWindowClass;
    
    if (!RegisterClassEx(&wcex)) return 1;

    HWND hWnd = CreateWindowEx(0, szWindowClass, szTitle, WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, 
                           CW_USEDEFAULT, CW_USEDEFAULT, 1280, 720, NULL, NULL, hInstance, NULL);

    if (!hWnd) return 1;

    //if we want to switch to starting not maximized
    //ShowWindow(hWnd, nCmdShow);
    ShowWindow(hWnd, SW_SHOWMAXIMIZED);
    UpdateWindow(hWnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}