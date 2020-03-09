#include <Windows.h>


class PatternCl{
public:
	bool Compare(const BYTE* pData, const BYTE* bMask, const char* szMask);
	DWORD Pattern(DWORD dwAddress, DWORD dwLen, BYTE *bMask, char * szMask);
};
