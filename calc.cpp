#include "pch.h"
#include <windows.h>

__declspec(dllexport) void RunCalc()
{
    WinExec("C:\\Windows\\System32\\calc.exe", 0);
    /*
    STARTUPINFOA startInfo;
    PROCESS_INFORMATION processInfo;
    ZeroMemory(&startInfo, sizeof(startInfo));
    startInfo.cb = sizeof(startInfo);
    CreateProcessA("C:\\Windows\\notepad.exe",NULL,NULL,NULL,FALSE,NULL,NULL,NULL, &startInfo, &processInfo);*/
}