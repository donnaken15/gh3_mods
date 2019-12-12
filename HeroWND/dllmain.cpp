// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>

static HWND *hWnd = (HWND *)0xC5B8F8;

LPCWSTR ini = L"config.ini";

int nShowCmd = GetPrivateProfileInt(L"HeroWND", L"nShowCmd", 1, ini);

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
    )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		ShowWindow(*hWnd, nShowCmd);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

