/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CLIENT_DESC_HPP
#define __LIBM2_GAME_CLIENT_DESC_HPP
#include "stdInclude.hpp"
#include "CInputDB.hpp"
#include "CInputP2P.hpp"
#include "CInputTeen.hpp"
#include "DESC.hpp"
namespace libm2 {

    class CLIENT_DESC : public DESC {
    protected:
        int m_iPhaseWhenSucceed;
        bool m_bRetryWhenClosed;
        time_t m_LastTryToConnectTime;
        CInputDB m_inputDB;
        CInputP2P m_inputP2P;
        CInputTeen m_inputTeen;
    public:
        CLIENT_DESC(void);
        ~CLIENT_DESC();
        virtual BYTE GetType(void);
        virtual void Destroy(void);
        virtual void SetPhase(int);
        bool Connect(int);
        void Setup(LPFDWATCH, const char *, WORD);
        void SetRetryWhenClosed(bool);
        void DBPacketHeader(BYTE, DWORD, DWORD);
        void DBPacket(BYTE, DWORD, const void *, DWORD);
        void Packet(const void *, int);
        bool IsRetryWhenClosed(void);
        void Reset(void);
    private:
        void InitializeBuffers(void);
    };
    typedef CLIENT_DESC* LPCLIENT_DESC;
}
#endif // __LIBM2_GAME_CLIENT_DESC_HPP
