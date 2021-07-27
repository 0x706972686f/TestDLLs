#include "pch.h"
#include <windows.h>

__declspec(dllexport) void RunNotepad()
{
    STARTUPINFOA startInfo;
    PROCESS_INFORMATION processInfo;
    ZeroMemory(&startInfo, sizeof(startInfo));
    startInfo.cb = sizeof(startInfo);
    CreateProcessA("C:\\Windows\\notepad.exe",NULL,NULL,NULL,FALSE,NULL,NULL,NULL, &startInfo, &processInfo);
}