/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SACCOUNTTABLE_HPP
#define __LIBM2_GAME_SACCOUNTTABLE_HPP
#include "stdInclude.hpp"
#include "SSimplePlayer.hpp"
#ifdef __GNUC__
#pragma pack(push, 1)
#endif
namespace libm2 {

    typedef struct SAccountTable {
        DWORD id;
        char login[31];
        char passwd[17];
        char social_id[19];
        char status[9];
        BYTE bEmpire;
        TSimplePlayer players[4];
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    TAccountTable, * PAccountTable;
#ifdef __GNUC__
#pragma pack(pop)
#endif
}
#endif // __LIBM2_GAME_SACCOUNTTYPE_HPP
