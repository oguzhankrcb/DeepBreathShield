/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SPLAYERTABLE_HPP
#define __LIBM2_GAME_SPLAYERTABLE_HPP
#include "stdInclude.hpp"
namespace libm2 {

    struct SQuickslot {
        BYTE type;
        BYTE pos;
    } typedef TQuickslot;

    struct SPlayerSkill {
        BYTE bMasterType;
        BYTE bLevel;
        time_t tNextRead;
    } typedef TPlayerSkill;

    struct SPlayerTable {
        DWORD id;
        char name[25];
        char ip[16];
        WORD job;
        BYTE voice;
        BYTE level;
        BYTE level_step;
        short st;
        short ht;
        short dx;
        short iq;
        DWORD exp;
        int gold;
        BYTE dir;
        int x;
        int y;
        int z;
        int lMapIndex;
        long lExitX;
        long lExitY;
        long lExitMapIndex;
        short hp;
        short sp;
        short sRandomHP;
        short sRandomSP;
        int playtime;
        short stat_point;
        short skill_point;
        short sub_skill_point;
        short horse_skill_point;
        TPlayerSkill skills[255];
        TQuickslot quickslot[36];
        BYTE part_base;
        WORD parts[4];
        short stamina;
        BYTE skill_group;
        long lAlignment;
        char szMobile[33];
        short stat_reset_count;
        THorseInfo horse;
        DWORD logoff_interval;
        int aiPremiumTimes[9];
    } typedef TPlayerTable;
}
#endif // __LIBM2_GAME_SPLAYERTABLE_HPP
