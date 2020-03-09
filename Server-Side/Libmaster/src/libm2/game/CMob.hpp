/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CMOB_HPP
#define __LIBM2_GAME_CMOB_HPP
#include "stdInclude.hpp"
#include "SEntityTable.hpp"
namespace libm2 {
#ifdef __GNUC__
#pragma pack(push, 1)
#endif

struct SMobSkillLevel {
        DWORD dwVnum;
        BYTE bLevel;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TMobSkillLevel;

    struct SMobTable : public SEntityTable {
        char szName[25];
        char szLocaleName[25];
        BYTE bType;
        BYTE bRank;
        BYTE bBattleType;
        BYTE bLevel;
        BYTE bSize;
        DWORD dwGoldMin;
        DWORD dwGoldMax;
        DWORD dwExp;
        DWORD dwMaxHP;
        BYTE bRegenCycle;
        BYTE bRegenPercent;
        WORD wDef;
        DWORD dwAIFlag;
        DWORD dwRaceFlag;
        DWORD dwImmuneFlag;
        BYTE bStr;
        BYTE bDex;
        BYTE bCon;
        BYTE bInt;
        DWORD dwDamageRange[2];
        short sAttackSpeed;
        short sMovingSpeed;
        BYTE bAggresiveHPPct;
        WORD wAggressiveSight;
        WORD wAttackRange;
        char cEnchants[6];
        char cResists[11];
        DWORD dwResurrectionVnum;
        DWORD dwDropItemVnum;
        BYTE bMountCapacity;
        BYTE bOnClickType;
        BYTE bEmpire;
        char szFolder[65];
        float fDamMultiply;
        DWORD dwSummonVnum;
        DWORD dwDrainSP;
        DWORD dwMobColor;
        DWORD dwPolymorphItemVnum;
        TMobSkillLevel Skills[5];
        BYTE bBerserkPoint;
        BYTE bStoneSkinPoint;
        BYTE bGodSpeedPoint;
        BYTE bDeathBlowPoint;
        BYTE bRevivePoint;
    }
#ifndef __GNUC__
    __attribute__((packed))
#endif
    typedef TMobTable;
#ifdef __GNUC__
#pragma pack(pop)
#endif

class SMobSplashAttackInfo {
        DWORD dwTiming;
        DWORD dwHitDistance;
    public:
        SMobSplashAttackInfo(DWORD, DWORD);
    };

    struct SMobSkillInfo {
        DWORD dwSkillVnum;
        BYTE bSkillLevel;
        std::vector<SMobSplashAttackInfo, std::allocator<SMobSplashAttackInfo> > vecSplashAttack;
    } typedef TMobSkillInfo;

    class CMob {
        TMobTable m_table;
        TMobSkillInfo m_mobSkillInfo[5];
    public:
        CMob(void);
        ~CMob();
        void AddSkillSplash(int, DWORD, DWORD);
    };
}
#endif
