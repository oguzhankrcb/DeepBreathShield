#include "ExitFunctions.h"


void ExFuncs::shut0r()
{
	realfnc();
}

void ExFuncs::realfnc()
{
	Scan Scanner;
	NtFunctions NT;
	DWORD changeaddr = Scanner.FindRecvWithPattern() - 0x50;
	Sleep(1000);
	NT.ZwTerminateProcess(GetCurrentProcess(), 0);
	memset((void*)(changeaddr), 0, 10000);
	Sleep(1000);
	raise(SIGILL);
}