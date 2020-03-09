#ifndef WINDOWOPERATIONS_H
#define WINDOWOPERATIONS_H
#include <Windows.h>
#include <iostream>
#include "../Xor/Xor.h"
class WindowOps{
private:
	int mlkgibi = 0;
	static BOOL CALLBACK StaticWndEnumProc(HWND hwnd, LPARAM lParam);
	BOOL WndEnumProc(HWND hwnd);
	void controller();
	static DWORD static_entry(LPVOID* param) {
		WindowOps *myObj = (WindowOps*)param;
		myObj->controller();
		return 0;
	}
	void editmlk(int value);
	int getmlk();
	HANDLE h2;
	int aktif = 0;
	DWORD s, s1, s2;
	char * cozulmuskey;
public :
	void starter();
	HANDLE geth2();
	void aktifedit(DWORD p1, DWORD p2, DWORD p3,char * c1);
	

	
};
#endif