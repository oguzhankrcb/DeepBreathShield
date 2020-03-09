#include "Enc.h"


char EncLib::pass[16] = { 0x55, 0x8b, 0x6a, 0xcc, 0x98, 0x65, 0xE9, 0x88, 0x5B, 0x44, 0xFF, 0x72, 0xE8, 0x21, 0x3C, 0xCA };

EncLib::EncLib()
{
	passenable = 0;
}


void EncLib::enablepassword()
{
	passenable = 1;
	
	
}
void EncLib::encrpyt(char* string, char* key)
{
	if (passenable == 1)
	{
		key = pass;
	}
	int lenkey = strlen(key);
	int vurdur = 218;
	for (int i = 0; i < strlen(string); i++)
		string[i] = (string[i] ^ key[i % (lenkey / sizeof(char))]) +9 -8 +2 -6 +9 -11 -229 +(vurdur + 1);
}

void EncLib::encrpytenumwin(char* string, char* key)
{
	if (passenable == 1)
	{
		key = pass;
	}
	int lenkey = strlen(key);
	int vurdur33 = 220;
	int pert = 225;
	int xxx = 229;
	for (int i = 0; i < strlen(string); i++)
		string[i] = (string[i] ^ key[i % (lenkey / sizeof(char))]) + 11 - 5 + 4 - 8 + 3 - 12 - 224 + (vurdur33 + 1);
}

void EncLib::decrypt(char* encstring, char* dest, char * key) {
	if (passenable == 1)
	{
		key = pass;
	}
	int lenkey = strlen(key);
	int xxx = 229;
	int pert = 219;
	for (int i = 0; i < strlen(encstring); i++)
		dest[i] = ((encstring[i] -9 +8 -2 +6 -9 +11 + xxx - pert) ^ (key[i % (lenkey / sizeof(char))]));

	dest[strlen(encstring)] = '\0';

}