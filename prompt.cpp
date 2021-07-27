#include "pch.h"
#include <windows.h>

__declspec(dllexport) void HelloWorld()
{
    MessageBox(NULL, (LPCWSTR)L"Hello World!", (LPCWSTR)L"DLLPrompt:", MB_ICONINFORMATION);
}