// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "Scan\Scan.h"
#include "EncLib\Enc.h"
#include "detours.h"
#include "NtFunctions.h"
#include "Scan\WindowOperations..h"
#include "SendLib\SendLib.h"
#include "ExitFunctions.h"
HANDLE h1 = 0;
HANDLE h2 = 0;
NtFunctions NT;
WindowOps Winops;
int bakos = 0;
typedef int(__fastcall * lpfn_Send)(DWORD, DWORD, DWORD, DWORD);
lpfn_Send SendFnc = NULL;
DWORD SendSequenceAddr = NULL;
DWORD ECXPUSHER = NULL;
DWORD loginstate = 0;
lpfn_Send trampSendFnc = NULL;
char cozulmuskey[4];
void sending()
{
	Winops.aktifedit((DWORD)SendFnc, ECXPUSHER, SendSequenceAddr, cozulmuskey);
	
}

void enableDebugPrivileges()
{

	HANDLE Token;
	TOKEN_PRIVILEGES tp;
	if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &Token))
	{
		LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &tp.Privileges[0].Luid);
		tp.PrivilegeCount = 1;
		tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
		if (AdjustTokenPrivileges(Token, 0, &tp, sizeof(tp), NULL, NULL) == 0){
			HANDLE th = 0;
			ExFuncs Ex;
			Ex.shut0r();
		}
		else{
			//SUCCESS
		}
	}
	SetThreadPriority(h2, THREAD_PRIORITY_HIGHEST);
	ResumeThread(h2);
}

void HideModule(HINSTANCE hModule)
{
	DWORD dwPEB_LDR_DATA = 0;
	_asm
	{
		pushad;
		pushfd;
		mov eax, fs:[30h];
		mov eax, [eax + 0Ch];
		mov dwPEB_LDR_DATA, eax;
		mov esi, [eax + 0Ch];
		mov edx, [eax + 10h];
	LoopInLoadOrderModuleList:
		lodsd;
		mov esi, eax;
		mov ecx, [eax + 18h];
		cmp ecx, hModule;
		jne SkipA
			mov ebx, [eax]
			mov ecx, [eax + 4]
			mov[ecx], ebx
			mov[ebx + 4], ecx
			jmp InMemoryOrderModuleList
		SkipA :
		cmp edx, esi
			jne LoopInLoadOrderModuleList
		InMemoryOrderModuleList :
		mov eax, dwPEB_LDR_DATA
			mov esi, [eax + 14h]
			mov edx, [eax + 18h]
		LoopInMemoryOrderModuleList :
									lodsd
									mov esi, eax
									mov ecx, [eax + 10h]
									cmp ecx, hModule
									jne SkipB
									mov ebx, [eax]
									mov ecx, [eax + 4]
									mov[ecx], ebx
									mov[ebx + 4], ecx
									jmp InInitializationOrderModuleList
								SkipB :
		cmp edx, esi
			jne LoopInMemoryOrderModuleList
		InInitializationOrderModuleList :
		mov eax, dwPEB_LDR_DATA
			mov esi, [eax + 1Ch]
			mov edx, [eax + 20h]
		LoopInInitializationOrderModuleList :
											lodsd
											mov esi, eax
											mov ecx, [eax + 08h]
											cmp ecx, hModule
											jne SkipC
											mov ebx, [eax]
											mov ecx, [eax + 4]
											mov[ecx], ebx
											mov[ebx + 4], ecx
											jmp Finished
										SkipC :
		cmp edx, esi
			jne LoopInInitializationOrderModuleList
		Finished :
		popfd;
		popad;
	}
}

void ayarcek()
{
	h2 = Winops.geth2();
	enableDebugPrivileges();
	NTSTATUS stat = NT.NtWaitForSingleObject(h2, false, 0);

	if (stat != STATUS_TIMEOUT)
	{
		ExFuncs Ex;
		Ex.shut0r();
	}
}

void * __cdecl minememcpy(void * dest, const void* byte, size_t sizeee)
{

	
	/*FILE *f = fopen("1recvshex.txt", "a+b");
	FILE *f2 = fopen("1recvschar.txt", "a+b");
	fprintf(f, "Header : %d , size : %d\r\n", *(BYTE*)byte, sizeee);
	fprintf(f, "Bytes : ");

	fprintf(f2, "Header : %d , size : %d\r\n", *(BYTE*)byte, sizeee);
	fprintf(f2, "Bytes : ");

	BYTE * w = (BYTE*)byte;
	for (int i = 0; i < sizeee; i++)
	{
		fprintf(f2, "%c", *w);
		fprintf(f, "0x%02x, ", *w);
		w++;
	}
	fprintf(f, "\r\n");
	fprintf(f2, "\r\n");

	fclose(f);
	fclose(f2);*/
	if (*(BYTE*)byte == 35 && sizeee == 9)
	{

		char * msg = (char*)malloc(sizeof(char)* 5);
		char * cozlms = (char*)malloc(sizeof(char)* 5);
		const char * w = (const char*)byte;
		strncpy(msg, (w + 4), 4);
		msg[4] = '\0';

		EncLib enc;
		enc.enablepassword();
		enc.decrypt(msg, cozlms, NULL);
		strcpy(cozulmuskey, cozlms);
		NT.NtCreateThreadEx(&h1, THREAD_ALL_ACCESS, 0, GetCurrentProcess(), (LPTHREAD_START_ROUTINE)sending, 0, 0x00000004, 0, 0, 0, 0);
		//NT.NtCreateThreadEx(&h1, THREAD_ALL_ACCESS, 0, GetCurrentProcess(), (LPTHREAD_START_ROUTINE)ayarcek, 0, 0x00000004, 0, 0, 0, 0);
		/*FILE * cozulmus = fopen("1cozulmus.txt", "a+b");
		fprintf(cozulmus, "%s , %s\r\n", msg, cozlms);
		fclose(cozulmus);*/
		free(msg);
		free(cozlms);
		return NULL;
	}
	



	return memcpy(dest, byte, sizeee);
}

int __fastcall HookedSendFnc(DWORD a, DWORD b, DWORD c, DWORD d)
{
	DWORD ecsx;
	__asm{
		MOV[ecsx], ECX
	}
	/*if (*(BYTE*)d == 237 && c == 326)
	{
	std::string mac = randomMac();
	memcpy((BYTE*)(d + 65), mac.c_str(), mac.length());
	//std::string pc = RandomNameDondur();
	//memcpy((BYTE*)(d + 577), pc.c_str(), pc.length());
	//memcpy((BYTE*)(d + 321), "\xF9", 1);
	//MessageBoxA(NULL, "qweqweqwe", "qweqeqwe", 0);
	}
	*/
	if (*(BYTE*)d == 241)
	{
		if (bakos == 0){
			bakos = 1;
			ECXPUSHER = ecsx;
			DetourRemove((PBYTE)trampSendFnc, (PBYTE)HookedSendFnc);
		}
	}


	/*FILE *f = fopen("1sendchar.txt", "a+b");
	FILE *f2 = fopen("1sendhex.txt", "a+b");
	if (c != 1)
	{


		fprintf(f, "Header : %d , ECX : 0x%08x , size : %d\r\n", *(BYTE*)d, ecsx, c);
		fprintf(f, "Bytes char* : ");

		fprintf(f2, "Header : %d , ECX : 0x%08x , size : %d\r\n", *(BYTE*)d, ecsx, c);
		fprintf(f2, "Bytes hex : ");
		BYTE * w = (BYTE*)d;
		for (int i = 0; i < c; i++)
		{
			fprintf(f, "%c", *w);
			fprintf(f2, "0x%02x,", *w);
			w++;
		}
		fprintf(f, "\r\n");
		fprintf(f2, "\r\n");


	}
	else
	{

		fprintf(f, "#########SEND SEQUENCE : 0x%02x#########\r\n", *(BYTE*)d);
		fprintf(f2, "#########SEND SEQUENCE : 0x%02x#########\r\n", *(BYTE*)d);

	}
	//fprintf(f,"#########SEND SEQUENCE#########\r\n");
	//}



	fclose(f);
	fclose(f2);*/


	return trampSendFnc(a, b, c, d);
}

void WriteToMemCpyCall()
{

	Sleep(2000);
	
	
	Scan Scanner;
	DWORD changeaddr = Scanner.FindRecvWithPattern(); // peek's memcpy call "Recv Quest Info Packet Error #1"
	DWORD calc = (DWORD)minememcpy - changeaddr - 5;
	DWORD old = NULL;
	DWORD size = sizeof(char)* 10;
	PVOID baseaddr = (void*)Scanner.FindRecvWithPattern();
	NT.NtProtectVirtualMemory(GetCurrentProcess(), &baseaddr, &size, PAGE_EXECUTE_READWRITE, &old);
	memcpy((void*)(changeaddr + 1), &calc, 4);
//	NT.NtProtectVirtualMemory(GetCurrentProcess(), &baseaddr, &size, old, 0);
	SendFnc = (lpfn_Send)Scanner.FindSendWithPattern();
	trampSendFnc = (lpfn_Send)DetourFunction((PBYTE)SendFnc, (PBYTE)HookedSendFnc);
	//trampgetpos = (lpfn_getxy)DetourFunction((PBYTE)game_getxy_addr, (PBYTE)HookedGetPosXY);


	/*game_char_select = FindSelectCharErrWithPattern();
	SendSelectChar = (lpfn_select_char)(game_char_select);
	trampselectchar = (lpfn_select_char)DetourFunction((PBYTE)game_char_select, (PBYTE)HookedSelectCharacter);*/


	/*	game_char_login = FindNetOfflineWithPattern();
	SendLoginChar = (lpfn_login_char)(game_char_login);;
	tramploginchar = (lpfn_login_char)DetourFunction((PBYTE)game_char_login, (PBYTE)HookedLoginCharacter);
	*/
	/*sunucubaglanirkenkontrol = 0;
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)sbaglankontrol, NULL, NULL, NULL);*/
	//ECXPUSHER = FindECXPusherWithPattern();
	SendSequenceAddr = Scanner.FindSendSequenceWithPattern();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		HideModule(hModule);
		//CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)WriteToMemCpyCall, NULL, NULL, NULL);
		NT.NtCreateThreadEx(&h1, THREAD_ALL_ACCESS, 0, GetCurrentProcess(), (LPTHREAD_START_ROUTINE)WriteToMemCpyCall, 0, 0x00000004, 0, 0, 0, 0);
		Winops.starter();
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

