#ifndef NTFUNCTIONS_H
#define NTFUNCTIONS_H
#include <Windows.h>
#include <iostream>
#include <Psapi.h>
#include <TlHelp32.h>
#include <string.h>
#include <string>

typedef LONG NTSTATUS;
typedef struct _LSA_UNICODE_STRING {
	USHORT Length;
	USHORT MaximumLength;
	PWSTR  Buffer;
} LSA_UNICODE_STRING, *PLSA_UNICODE_STRING, UNICODE_STRING, *PUNICODE_STRING;
typedef struct _OBJECT_ATTRIBUTES {
	ULONG           Length;
	HANDLE          RootDirectory;
	PUNICODE_STRING ObjectName;
	ULONG           Attributes;
	PVOID           SecurityDescriptor;
	PVOID           SecurityQualityOfService;
}  OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;
typedef NTSTATUS(NTAPI * lpfn_ntcreatethread)(_Out_ PHANDLE ThreadHandle,
	_In_ ACCESS_MASK DesiredAccess,
	_In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
	_In_ HANDLE ProcessHandle,
	_In_ PVOID StartRoutine,
	_In_opt_ PVOID Argument,
	_In_ ULONG CreateFlags,
	_In_opt_ ULONG_PTR ZeroBits,
	_In_opt_ SIZE_T StackSize,
	_In_opt_ SIZE_T MaximumStackSize,
	_In_opt_ PVOID AttributeList);

typedef NTSTATUS(NTAPI * lpfn_NtWaitForSingleObject)(
	_In_ HANDLE         Handle,
	_In_ BOOLEAN        Alertable,
	_In_ PLARGE_INTEGER Timeout
	);

typedef NTSTATUS(NTAPI * lpfn_NtProtectVirtualMem)
(IN HANDLE               ProcessHandle,
IN OUT PVOID            *BaseAddress,
IN OUT PULONG           NumberOfBytesToProtect,
IN ULONG                NewAccessProtection,
OUT PULONG              OldAccessProtection);

typedef NTSTATUS(NTAPI * lpfn_ZwTerminateProcess)(
	IN HANDLE               ProcessHandle OPTIONAL,
	IN NTSTATUS             ExitStatus);

typedef NTSTATUS(NTAPI * lpfn_NtWriteVirtualMemory)(
	IN HANDLE               ProcessHandle,
	IN PVOID                BaseAddress,
	IN PVOID                Buffer,
	IN ULONG                NumberOfBytesToWrite,
	OUT PULONG              NumberOfBytesWritten OPTIONAL);

class NtFunctions{
public:
	NtFunctions();
	lpfn_ZwTerminateProcess ZwTerminateProcess;
	lpfn_NtProtectVirtualMem NtProtectVirtualMemory;
	lpfn_ntcreatethread NtCreateThreadEx;
	lpfn_NtWaitForSingleObject NtWaitForSingleObject;
	lpfn_NtWriteVirtualMemory NtWriteVirtualMemory;
};
#endif



