/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CLOGINDATA_HPP
#define __LIBM2_GAME_CLOGINDATA_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CLoginData {
    private:
        DWORD m_dwKey;
        DWORD m_adwClientKey[4];
        BYTE m_bBillType;
        DWORD m_dwBillID;
        DWORD m_dwConnectedPeerHandle;
        DWORD m_dwLogonTime;
        long m_lRemainSecs;
        char m_szIP[16];
        bool m_bBilling;
        bool m_bDeleted;
        std::string m_stLogin;
        int m_aiPremiumTimes[9];

    public:
        CLoginData(void);
        void SetClientKey(const DWORD *);
        const DWORD * GetClientKey(void);
        void SetKey(DWORD);
        DWORD GetKey(void);
        void SetLogin(const char *);
        const char * GetLogin(void);
        void SetBillType(BYTE);
        DWORD GetBillID(void);
        void SetBillID(DWORD);
        BYTE GetBillType(void);
        void SetConnectedPeerHandle(DWORD);
        DWORD GetConnectedPeerHandle(void);
        void SetLogonTime(void);
        DWORD GetLogonTime(void);
        void SetIP(const char *);
        const char * GetIP(void);
        void SetRemainSecs(long);
        long GetRemainSecs(void);
        void SetBilling(bool);
        bool IsBilling(void);
        void SetDeleted(bool);
        bool IsDeleted(void);
        void SetPremium(int *);
        int GetPremium(BYTE);
        int * GetPremiumPtr(void);
    };
}
#endif // __LIBM2_GAME_CLOGINDATA_HPP
