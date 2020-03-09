#ifndef ENC_H
#define ENC_H
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
class EncLib {
public:
	void encrpyt(char* string, char* key);
	void encrpytenumwin(char* string, char* key);
	void decrypt(char* encstrig, char* dest, char * key);
	void enablepassword();
	EncLib();
private:
	static char pass[16];
	int passenable;
	
};
#endif