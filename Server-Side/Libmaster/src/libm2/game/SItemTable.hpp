/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_ITEMTABLE_HPP
#define __LIBM2_GAME_ITEMTABLE_HPP
#include "SEntityTable.hpp"
#ifdef __GNUC__
#pragma pack(push, 1)
#endif
namespace libm2 {

    struct SItemLimit {
        BYTE bType;
        long lValue;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TItemLimit;

    struct SItemApply {
        BYTE bType;
        long lValue;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TItemApply;

    struct SItemTable : public SEntityTable {
        char szName[25];
        char szLocaleName[25];
        BYTE bType;
        BYTE bSubType;
        BYTE bWeight;
        BYTE bSize;
        DWORD dwAntiFlags;
        DWORD dwFlags;
        DWORD dwWearFlags;
        DWORD dwImmuneFlag;
        DWORD dwGold;
        DWORD dwShopBuyPrice;
        TItemLimit aLimits[2];
        TItemApply aApplies[3];
        long alValues[6];
        long alSockets[3];
        DWORD dwRefinedVnum;
        WORD wRefineSet;
        BYTE bAlterToMagicItemPct;
        BYTE bSpecular;
        BYTE bGainSocketPct;
        short sAddonType;
        char cLimitRealTimeFirstUseIndex;
        char cLimitTimerBasedOnWearIndex;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TItemTable;

    struct TPlayerItemAttribute {
        BYTE bType;
        short sValue;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    ;

    struct SPlayerItem {
        DWORD id;
        BYTE window;
        WORD pos;
        DWORD count;
        DWORD vnum;
        long alSockets[3];
        TPlayerItemAttribute aAttr[7];
        DWORD owner;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TPlayerItem;
}
#ifdef __GNUC__
#pragma pack(pop)
#endif
#endif // __LIBM2_GAME_ITEMTABLE_HPP
