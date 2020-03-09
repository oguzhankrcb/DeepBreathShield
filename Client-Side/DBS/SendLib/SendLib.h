#ifndef SENDLIB_H
#define SENDLIB_H
#include "../EncLib/Enc.h"
#include <Windows.h>

class SendLib{
public:
	void CallSendEnumEncryptedKey(char * key);
	SendLib(DWORD s, DWORD e, DWORD seq);
	void Sender(int bos, char* bos2, float bos3, char*key, double bos4);
private:
	
	void Senditbitch();
	static char header[28];
	static char data[5]; 
	DWORD sendaddr;
	DWORD ecxaddr;
	DWORD sequenceaddr;
};



#endif