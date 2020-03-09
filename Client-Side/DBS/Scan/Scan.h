#ifndef SCAN_H
#define SCAN_H
#include "Pattern.h"


class Scan{
public:
	DWORD FindRecvWithPattern();
	DWORD FindSendWithPattern();
	DWORD FindSendSequenceWithPattern();
	DWORD FindSelectCharErrWithPattern();
	DWORD FindNetOfflineWithPattern();
	DWORD FindEnterGameWithPattern();
	DWORD FindAntiFlyWithPattern();
};
#endif