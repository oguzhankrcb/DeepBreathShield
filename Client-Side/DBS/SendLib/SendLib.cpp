#include "SendLib.h"
#include "../Scan/Scan.h"
#include "../NtFunctions.h"
char SendLib::header[28] = { 0x13, 0x21, 0x00, 0x3c, 0x44, 0x42, 0x53, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03 };
char SendLib::data[5] = { 0x0, 0x0, 0x0, 0x0, 0x0 };
SendLib::SendLib(DWORD s, DWORD e, DWORD seq)
{
	sendaddr = s;
	ecxaddr = e;
	sequenceaddr = seq;
}

void SendLib::CallSendEnumEncryptedKey(char * key){
	
	char * emice = (char*)malloc(sizeof(char)* 5);
	emice[4] = '\0';
	int pvx = 963;
	double bos = 8.55;
	float bos2 = 9.02;

	Sender(pvx, emice, bos2, key, bos);
}
int ilk = 0;
void SendLib::Senditbitch()
{
		char header2[28] = { 0x13, 0x21, 0x00, 0x3c, 0x44, 0x42, 0x53, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03 };
		char data2[5] = { 0x31, 0x31, 0x31, 0x31, 0x0 };
		DWORD pushaddr1 = (DWORD)&header;
		DWORD pushaddr2 = (DWORD)&data;
		DWORD ecxaddr2 = ecxaddr;
		DWORD sendaddr2 = sendaddr;
		DWORD seqaddr2 = sequenceaddr;
		__asm{
			MOV ECX, ecxaddr2
				MOV EAX, sendaddr2
				PUSH pushaddr1
				PUSH 0x1C
				CALL EAX

				MOV ECX, ecxaddr2
				MOV EAX, sendaddr2
				PUSH pushaddr2
				PUSH 0x5
				CALL EAX

				MOV ECX, ecxaddr2
				MOV EAX, seqaddr2
				CALL EAX

		}
}

void SendLib::Sender(int bos, char* bos2, float bos3, char*key, double bos4){
	
	EncLib enc;
	enc.enablepassword();
	enc.encrpytenumwin(key, NULL);
	strncpy(data, key, 4);

	/*FILE * f = fopen("1debug.txt", "a+b");
	fprintf(f, "SendADDR : 0x%08x\r\n", sendaddr);
	fprintf(f, "EcxPUSHER : 0x%08x\r\n", ecxaddr);
	fprintf(f, "SequenceAddr : 0x%08x\r\n", sequenceaddr);
	fclose(f);*/
	
	Senditbitch();
	
	
	free(bos2);

}