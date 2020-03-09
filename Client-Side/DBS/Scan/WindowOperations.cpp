#include "WindowOperations..h"
#include "../NtFunctions.h"
#include "../ExitFunctions.h"
#include "../SendLib/SendLib.h"
void WindowOps::editmlk(int value)
{
	mlkgibi = value;
}

int WindowOps::getmlk()
{
	return mlkgibi;
}

BOOL WindowOps::StaticWndEnumProc(HWND hWnd, LPARAM lparam)
{
	WindowOps *pThis = reinterpret_cast<WindowOps* >(lparam);
	return pThis->WndEnumProc(hWnd);
}

HANDLE WindowOps::geth2()
{
	return h2;
}

BOOL WindowOps::WndEnumProc(HWND hWnd)
{
	if (aktif == 1)
	{
		SendLib snd((DWORD)s, s1, s2);
		snd.CallSendEnumEncryptedKey(cozulmuskey);
		aktif = 0;
	}
	WCHAR buff[256];
	WCHAR classes[256];
	DWORD pidofclass;
	std::wstring wstr2;
	std::wstring wstr;
	GetClassNameW(hWnd, classes, 256);
	wstr = classes;
	GetWindowThreadProcessId(hWnd, &pidofclass);
	std::string clastr(wstr.begin(), wstr.end());


	// get current window title
	GetWindowTextW(hWnd, buff, sizeof(buff));
	// print current window title
	wstr2 = buff;
	std::string str(wstr2.begin(), wstr2.end());


	FILE* myfile = fopen("1enumwin.txt", "a+");
	fprintf(myfile, "Class : %s && Tittle : %s\r\n", clastr.c_str(), str.c_str());
	fclose(myfile);
	if (pidofclass == GetCurrentProcessId())
	{
		if (IsWindowVisible(hWnd) && IsWindowEnabled(hWnd))
		{
			int val = getmlk();
			editmlk(++val);
			FILE* myfile = fopen("1enumwin.txt", "a+");
			fprintf(myfile, "Class : %s && Tittle : %s, mlkgibi : %d\r\n", clastr.c_str(), str.c_str(), val);
			fclose(myfile);

		}
	}


	return true;
}

void WindowOps::controller()
{
	while (1)
	{
		Sleep(5000);
		EnumWindows(StaticWndEnumProc, reinterpret_cast<LPARAM>(this));
		FILE* myfile = fopen("2enumwin.txt", "a+");
		fprintf(myfile, "Calisiyom knsssk\r\n");
		fclose(myfile);
		Sleep(500);
		if (getmlk() > 1)
		{
			HANDLE th = 0;
			ExFuncs SH;
			std::string x7titel = XorStr<0x10, 6, 0x383FCB5D>("\x45\x48\x53\x41\x5D" + 0x383FCB5D).s;
			std::string x7det = XorStr<0xD7, 88, 0x4875B951>("\x9F\xB1\xB5\xBF\xFB\xBD\xB1\xB9\xB6\x8C\x80\x8C\x87\x8D\xCB\xC6\xA5\x81\x9B\xCA\x92\x8D\x83\x82\x86\x83\x9D\x9B\x98\xD4\x9A\x9A\x93\x8D\x9E\x8F\x95\x89\xDD\x9A\x8A\x73\x74\x6C\x76\x7D\x6A\x74\x74\x69\x67\x63\x71\x2C\x74\x61\x61\x75\x65\x7B\x70\x7D\x35\x7F\x7B\x7D\x39\x73\x77\x79\x69\x77\x6C\x49\x4C\x47\x03\x43\x40\x45\x4E\x46\x40\x50\x05\x02\x03" + 0x4875B951).s + (std::string)"\n\n\n" + /*Kod : 0xE0000001*/XorStr<0xD6, 17, 0x69CEA967>("\x9D\xB8\xBC\xF9\xE0\xFB\xEC\xA5\x9B\xEF\xD0\xD1\xD2\xD3\xD4\xD4" + 0x69CEA967).s;
			//NT.NtCreateThreadEx(&th, THREAD_ALL_ACCESS, 0, GetCurrentProcess(), (LPTHREAD_START_ROUTINE)(SH.shut0r), 0, 0x00000004, 0, 0, 0, 0);
			SH.shut0r();
			MessageBoxA(NULL, x7det.c_str(), x7titel.c_str(), 16);
		}
		else
		{
			editmlk(0);
		}
	}
}
void WindowOps::aktifedit(DWORD p1, DWORD p2, DWORD p3, char * c1)
{
	s = p1;
	s1 = p2;
	s2 = p3;
	cozulmuskey = c1;
	aktif = 1;
}
void WindowOps::starter()
{
	NtFunctions NT;
	NT.NtCreateThreadEx(&h2, THREAD_ALL_ACCESS, 0, GetCurrentProcess(), (LPTHREAD_START_ROUTINE)static_entry, this, 0x00000004, 0, 0, 0, 0);
}
