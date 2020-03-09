/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SSIMPLEPLAYER_HPP
#define __LIBM2_GAME_SSIMPLEPLAYER_HPP
#include "stdInclude.hpp"
#ifdef __GNUC__
#pragma pack(push, 1)
#endif
namespace libm2 {

    struct SSimplePlayer {
        DWORD dwID;
        char szName[25];
        BYTE byJob;
        BYTE byLevel;
        DWORD dwPlayMinutes;
        BYTE byST;
        BYTE byHT;
        BYTE byDX;
        BYTE byIQ;
        WORD wMainPart;
        BYTE bChangeName;
        WORD wHairPart;
        BYTE bDummy[4];
        long x;
        long y;
        long lAddr;
        WORD wPort;
        BYTE skill_group;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TSimplePlayer;
#ifdef __GNUC__
#pragma pack(pop)
#endif
}
#endif // __LIBM2_GAME_SSIMPLEPLAYER_HPP
