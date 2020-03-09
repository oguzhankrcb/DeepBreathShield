#include "Scan.h"
#include <stdio.h>

DWORD Scan::FindEnterGameWithPattern()
{
	PatternCl P;
	char str1[] = "Send EnterFrontGamePacket";
	DWORD findstr1 = P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)str1, "xxxxxxxxxxxxxxxxxxxxxxxxx");
	if (findstr1 != 0)
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)(&findstr1), "xxxx");
		if (findstr2 != 0)
		{
			DWORD findstr3 =P.Pattern(findstr2 - 40, 40, (PBYTE)"\xCC\x55\x8B\xEC\x51\x56\x8D\x45", "xxxxxxxx");
			if (findstr3 != 0)
			{

				return findstr3 + 1;
			}
			else{// Ruya2P.Patterns
				findstr3 =P.Pattern(findstr2 - 40, 40, (PBYTE)"\xCC\x51\x56\x8D\x44\x24\x07\x50", "xxxxxxxx");
				if (findstr3 != 0)
				{

					return findstr3 + 1;
				}
				else { // TCP.Patterns

					findstr3 =P.Pattern(findstr2 - 40, 40, (PBYTE)"\xC3\x55\x8B\xEC", "xxxx");
					if (findstr3 != 0)
					{

						return findstr3 + 1;
					}
					else return 2;


				}
			}

		}
		else return 1;

	}
	else return 0;
}



DWORD Scan::FindNetOfflineWithPattern(){
	PatternCl P;
	char str1[] = "## Network - OffLine Phase ##";
	DWORD findstr1 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)str1, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	if (findstr1 != 0)
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)(&findstr1), "xxxx");
		if (findstr2 != 0)
		{
			DWORD findstr3 =P.Pattern(findstr2 - 150, 150, (PBYTE)"\xCC\x55\x8B\xEC\x83\xE4\xF8\x56", "xxxxxxxx");
			if (findstr3 != 0)
			{
				return findstr3 + 1;
			}
			else
			{
				findstr3 =P.Pattern(findstr2 - 150, 150, (PBYTE)"\xCC\x53\x56\x8B\xF1\x57", "xxxxxx");
				if (findstr3 != 0)
				{
					return findstr3 + 1;
				}
				else { // TCP.Patterns

					findstr3 =P.Pattern(findstr2 - 150, 150, (PBYTE)"\xCC\xCC\x55\x8B\xEC\x83", "xxxxxx");
					if (findstr3 != 0)
					{
						return findstr3 + 2;
					}
					else return 2;

				}
			}
		}
		else return 1;
	}
	else return 0;
}

DWORD Scan::FindSelectCharErrWithPattern(){
	PatternCl P;
	char str1[] = "SendSelectCharacterPacket - Error";
	DWORD findstr1 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)str1, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	if (findstr1 != 0)
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)(&findstr1), "xxxx");
		if (findstr2 != 0)
		{
			DWORD findstr3 =P.Pattern(findstr2 - 40, 40, (PBYTE)"\xCC\x55\x8B\xEC\x51\x8B\x45\x08", "xxxxxxxx");
			if (findstr3 != 0)
			{
				return findstr3 + 1;
			}
			else{//Ruya2P.Patterns
				findstr3 =P.Pattern(findstr2 - 40, 40, (PBYTE)"\xCC\x51\x8A\x44\x24\x08\x56\x8B", "xxxxxxxx");

				if (findstr3 != 0)
				{
					return findstr3 + 1;
				}
				else {//TCP.Patterns

					findstr3 =P.Pattern(findstr2 - 55, 55, (PBYTE)"\xCC\xCC\x55\x8B\xEC\x83", "xxxxxx");

					if (findstr3 != 0)
					{
						return findstr3 + 2;
					}
					else return 2;

				}
			}

		}
		else return 1;

	}
	else return 0;

}

DWORD Scan::FindSendSequenceWithPattern()
{
	PatternCl P;
	char str1[] = "SendQuestInputStringPacket Error";
	DWORD findstr1 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)str1, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	if (findstr1 != 0)
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)(&findstr1), "xxxx");
		if (findstr2 != 0)
		{
			DWORD findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x42\xE8\x0\x0\x0\x0", "xx????");
			if (findstr3 != 0)
			{
				DWORD send1 = *(DWORD*)(findstr3 + 2) + findstr3 + 22;
				return send1;
			}
			else// Rüya2P.Patterns
			{
				findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x8B\xCE\xE8\x0\x0\x0\x0", "xxx????");
				if (findstr3 != 0)
				{
					DWORD send1 = *(DWORD*)(findstr3 + 3) + findstr3 + 23;
					return send1;
				}
				else //Mabed2P.Patterns
				{
					findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x6A\x00\xE8\x0\x0\x0\x0", "x?x????");
					if (findstr3 != 0)
					{
						DWORD send1 = *(DWORD*)(findstr3 + 3) + findstr3 + 23;
						return send1;
					}
					else // TcP.Patterns
					{
						findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x6A\x00\x8B\x4D\xB4\xE8\x0\x0\x0\x0", "x?xxxx????");
						if (findstr3 != 0)
						{
							DWORD send1 = *(DWORD*)(findstr3 + 6) + findstr3 + 26;
							return send1;
						}
						else return 2;

					}

				}
			}

		}
		else
			return 1;
	}
	else
		return 0;

	DWORD findstr3 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (PBYTE)"\x6A\x00\x8B\xCE\x88\x44\x24\x13\xE8\x00\x00\x00\x00\x81\x7E\x70\x00\x80\x00\x00", "x?xxxxxxx????xxxxxxx");
	if (findstr3 != 0)
	{
		DWORD findstr4 =P.Pattern(findstr3 - 70, 70, (PBYTE)"\xCC\xCC\xCC\x51\x56\x8B\xF1", "xxxxxxx");
		if (findstr4 != 0)
		{
			return findstr4 + 3;
		}
		else
			return 3;
	}


}

DWORD Scan::FindSendWithPattern()
{
	PatternCl P;
	char str1[] = "SendQuestInputStringPacket Error";
	DWORD findstr1 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)str1, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	if (findstr1 != 0)
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)(&findstr1), "xxxx");
		if (findstr2 != 0)
		{
			DWORD findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x42\xE8\x0\x0\x0\x0", "xx????");
			if (findstr3 != 0)
			{
				DWORD send1 = *(DWORD*)(findstr3 + 2) + findstr3 + 6;
				DWORD findstr4 =P.Pattern(send1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
				if (findstr4 != 0)
				{
					DWORD send2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;

					return send2;
				}
				else
					return 3;
			}
			else// Rüya2P.Patterns
			{
				findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x8B\xCE\xE8\x0\x0\x0\x0", "xxx????");
				if (findstr3 != 0)
				{
					DWORD send1 = *(DWORD*)(findstr3 + 3) + findstr3 + 7;
					DWORD findstr4 =P.Pattern(send1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
					if (findstr4 != 0)
					{
						DWORD send2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;

						return send2;
					}
					else
						return 3;
				}
				else //Mabed2P.Patterns
				{
					findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x6A\x00\xE8\x0\x0\x0\x0", "x?x????");
					if (findstr3 != 0)
					{
						DWORD send1 = *(DWORD*)(findstr3 + 3) + findstr3 + 7;
						DWORD findstr4 =P.Pattern(send1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
						if (findstr4 != 0)
						{
							DWORD send2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;

							return send2;
						}
						else
							return 3;
					}
					else // TcP.Patterns
					{
						findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x6A\x00\x8B\x4D\xB4\xE8\x0\x0\x0\x0", "x?xxxx????");
						if (findstr3 != 0)
						{
							DWORD send1 = *(DWORD*)(findstr3 + 6) + findstr3 + 10;
							DWORD findstr4 =P.Pattern(send1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
							if (findstr4 != 0)
							{
								DWORD send2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;

								return send2;
							}
							else
								return 3;
						}
						else
							return 2;

					}
				}
			}

		}
		else
			return 1;
	}
	else
		return 0;
}
DWORD Scan::FindRecvWithPattern(){
	PatternCl P;
	char str2[] = "Recv Quest Info Packet Error #1";
	DWORD findstr1 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)str2, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	if (findstr1 != 0)
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (BYTE*)(&findstr1), "xxxx");
		if (findstr2 != 0)
		{
			DWORD findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x6A\x00\xE8\x0\x0\x0\x0", "x?x????");
			if (findstr3 != 0)
			{
				DWORD peek1 = *(DWORD*)(findstr3 + 3) + findstr3 + 7;
				DWORD findstr4 =P.Pattern(peek1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
				if (findstr4 != 0)
				{
					DWORD peek2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;
					DWORD findstr5 =P.Pattern(peek2, 30, (PBYTE)"\xE8\x0\x0\x0\x0", "x????");
					DWORD findstr6 =P.Pattern(findstr5 + 5, 30, (PBYTE)"\xE8\x0\x0\x0\x0", "x????");

					if (findstr6 != 0)
					{
						return findstr6;
					}
					else
					{
						return 4;
					}
				}
				else
				{
					return 3;
				}

			}
			else// Rüya2P.Patterns
			{
				findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x8B\xF9\xE8\x0\x0\x0\x0", "xxx????");
				if (findstr3 != 0)
				{
					DWORD peek1 = *(DWORD*)(findstr3 + 3) + findstr3 + 7;
					DWORD findstr4 =P.Pattern(peek1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
					if (findstr4 != 0)
					{
						DWORD peek2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;
						DWORD findstr5 =P.Pattern(peek2, 30, (PBYTE)"\xE8\x0\x0\x0\x0", "x????");
						DWORD findstr6 =P.Pattern(findstr5 + 5, 30, (PBYTE)"\xE8\x0\x0\x0\x0", "x????");

						if (findstr6 != 0)
						{
							return findstr6;
						}
						else
						{
							return 4;
						}
					}
					else
					{
						return 3;
					}

				}
				else //TcP.Patterns
				{
					DWORD findstr3 =P.Pattern(findstr2 - 30, 30, (PBYTE)"\x6A\x00\x8B\x8D\x0\x0\x0\x0\xE8\x0\x0\x0\x0", "x?xx????x????");
					if (findstr3 != 0)
					{
						DWORD peek1 = *(DWORD*)(findstr3 + 9) + findstr3 + 13;
						DWORD findstr4 =P.Pattern(peek1, 20, (PBYTE)"\xE9\x0\x0\x0\x0", "x????");
						if (findstr4 != 0)
						{
							DWORD peek2 = *(DWORD*)(findstr4 + 1) + findstr4 + 5;
							DWORD findstr5 =P.Pattern(peek2, 30, (PBYTE)"\xE8\x0\x0\x0\x0", "x????");
							DWORD findstr6 =P.Pattern(findstr5 + 5, 30, (PBYTE)"\xE8\x0\x0\x0\x0", "x????");

							if (findstr6 != 0)
							{
								return findstr6;
							}
							else
							{
								return 4;
							}
						}
						else
						{
							return 3;
						}

					}
					else return 2;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else
		return 0;
}
DWORD Scan::FindAntiFlyWithPattern()
{
	PatternCl P;
	DWORD findstr =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (PBYTE)"\x8B\xCF\xE8\xEF\xD7\xFF\xFF\x84\xC0\x0F\x85\x95\x00\x00\x00\x8B\xCF\xE8\x00\xD8\xFF\xFF\x84\xC0\x0F\x85\x86\x00\x00\x00\x8B\xCF", "xxx????x?xx????xxx????x?xx????xx");
	// MÝLASP.PatternS
	if (findstr != 0)
	{
		return findstr + 39;
	}
	else // TCP.PatternS
	{
		DWORD findstr2 =P.Pattern((DWORD)GetModuleHandleA(NULL), 0x00D00000, (PBYTE)"\xE8\x0\x0\x0\x0\x84\xC0\x75\x0\x8B\xCF\xE8\x0\x0\x0\x0\x84\xC0\x75\x0\x8B\xCF\xE8\x0\x0\x0\x0\x84\xC0\x75\x0\x8B\xCF\xE8\x0\x0\x0\x0", "x????xxx?xxx????xxx?xxx????xxx?xxx????");
		if (findstr2 != 0)
			return findstr2 + 7;
	}
	return 0;
}
