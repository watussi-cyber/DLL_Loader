#include "pch.h"
#include <windows.h>
#include <stdio.h>

BOOL WINAPI DllMain(
	HINSTANCE hDLL,
	DWORD reason,
	LPVOID eserved
)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		printf("DLL attached !\n");
	}
}

