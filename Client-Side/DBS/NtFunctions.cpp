#include "NtFunctions.h"


NtFunctions::NtFunctions()
{
	NtFunctions::ZwTerminateProcess = (lpfn_ZwTerminateProcess)GetProcAddress(GetModuleHandleA("ntdll.dll"), "ZwTerminateProcess");
	NtFunctions::NtProtectVirtualMemory = (lpfn_NtProtectVirtualMem)GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtProtectVirtualMemory");
	NtFunctions::NtCreateThreadEx = (lpfn_ntcreatethread)GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtCreateThreadEx");
	NtFunctions::NtWaitForSingleObject = (lpfn_NtWaitForSingleObject)GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtWaitForSingleObject");
	NtFunctions::NtWriteVirtualMemory = (lpfn_NtWriteVirtualMemory)GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtWriteVirtualMemory");
}