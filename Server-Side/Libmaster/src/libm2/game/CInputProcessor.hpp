/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CINPUTPROCESSOR_HPP
#define __LIBM2_GAME_CINPUTPROCESSOR_HPP
#include "stdInclude.hpp"
//#include "DESC.hpp"
#include "CPacketInfo.hpp"
namespace libm2 {

    class CInputProcessor {
    protected:
        CPacketInfo *m_pPacketInfo;
        int m_iBufferLeft;
        CPacketInfoCG m_packetInfoCG;

    public:
        CInputProcessor();
        ~CInputProcessor();
        virtual bool Process(LPDESC, const void *, int, int &);
        virtual BYTE GetType(void) = 0;
        void BindPacketInfo(CPacketInfo *);
        void Pong(LPDESC);
        void Handshake(LPDESC, const char *);
        void Version(LPCHARACTER, const char *);
    protected:
        virtual int Analyze(LPDESC, BYTE, const char *) = 0;
    };
}
#endif // __LIBM2_GAME_CINPUTPROCESSOR_HPP
