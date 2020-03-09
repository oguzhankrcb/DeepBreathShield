/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SSHOPTABLE_HPP
#define __LIBM2_GAME_SSHOPTABLE_HPP
#include "stdInclude.hpp"
namespace libm2 {
#ifdef __GNUC__
#pragma pack(push,1)
#endif

struct SShopItemTable {
        DWORD vnum;
        BYTE count;
        BYTE pos;
        DWORD price;
        BYTE display_pos;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TShopItemTable;

    struct SShopTable {
        DWORD dwVnum;
        DWORD dwNPCVnum;
        BYTE byItemCount;
        TShopItemTable items[40];
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TShopTable;
#ifdef __GNUC__
#pragma pack(pop)
#endif
}
#endif // __LIBM2_GAME_SSHOPTABLE_HPP
