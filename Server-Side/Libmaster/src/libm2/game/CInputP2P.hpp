/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CINPUTP2P_HPP
#define __LIBM2_GAME_CINPUTP2P_HPP
#include "CInputProcessor.hpp"
#include "CPacketInfo.hpp"

namespace libm2 {

    class CInputP2P : public CInputProcessor {
    protected:
        CPacketInfoGG m_packetInfoGG;
    public:
        CInputP2P(void);
        virtual BYTE GetType(void);
    protected:
        virtual int Analyze(LPDESC, BYTE, const char *);
    public:
        void Setup(LPDESC, const char *);
        void Login(LPDESC, const char *);
        void Logout(LPDESC, const char *);
        int Relay(LPDESC, const char *, size_t);
        int Notice(LPDESC, const char *, size_t);
        int MonarchNotice(LPDESC, const char *, size_t);
        int MonarchTransfer(LPDESC, const char *);
        int Guild(LPDESC, const char *, size_t);
        void Shout(const char *);
        void Disconnect(const char *);
        void MessengerAdd(const char *);
        void MessengerRemove(const char *);
        void MessengerMobile(const char *);
        void FindPosition(LPDESC, const char *);
        void WarpCharacter(const char *);
        void GuildWarZoneMapIndex(const char *);
        void Transfer(const char *);
        void XmasWarpSanta(const char *);
        void XmasWarpSantaReply(const char *);
        void LoginPing(LPDESC, const char *);
        void BlockChat(const char *);
        void PCBangUpdate(const char *);
    };
}
#endif // __LIBM2_GAME_CINPUTP2P_HPP
