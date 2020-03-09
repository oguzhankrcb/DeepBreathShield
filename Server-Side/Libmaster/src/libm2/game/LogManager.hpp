/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_LOGMANAGER_HPP
#define __LIBM2_GAME_LOGMANAGER_HPP
#include "stdInclude.hpp"
#include "../lib/GameSingleton.hpp"
#include "../addr.hpp"
#include "CAsyncSQL.hpp"
#include "enums.hpp"
namespace libm2 {

    class LogManager : public GameSingleton<LogManager, (unsigned int) Addr::LogManager::singleton> {
    private:
        CAsyncSQL m_sql;
        bool m_bIsConnect;

    public:
        LogManager(void);
        ~LogManager();
        bool IsConnected(void);
        bool Connect(const char *, int, const char *, const char *, const char *);
        void ItemLog(DWORD, DWORD, DWORD, DWORD, const char *, const char *, const char *, DWORD);
        void ItemLog(LPCHARACTER, LPITEM, const char *, const char *);
        void ItemLog(LPCHARACTER, int, int, const char *, const char *);
        void CharLog(DWORD, DWORD, DWORD, DWORD, const char *, const char *, const char *);
        void CharLog(LPCHARACTER, DWORD, const char *, const char *);
        void LoginLog(bool, DWORD, DWORD, BYTE, BYTE, DWORD);
        void MoneyLog(BYTE, DWORD, int);
        void HackLog(const char *, const char *, const char *, const char *);
        void HackLog(const char *, LPCHARACTER);
        void HackCRCLog(const char *, const char *, const char *, const char *, DWORD);
        void GoldBarLog(DWORD, DWORD, GOLDBAR_HOW, const char *);
        void PCBangLoginLog(DWORD, const char *, DWORD, DWORD);
        void CubeLog(DWORD, DWORD, DWORD, DWORD, DWORD, int, bool);
        void GMCommandLog(DWORD, const char *, const char *, BYTE, const char *);
        void SpeedHackLog(DWORD, DWORD, DWORD, int);
        void ChangeNameLog(DWORD, const char *, const char *, const char *);
        void RefineLog(DWORD, const char *, DWORD, int, int, const char *);
        void ShoutLog(BYTE, BYTE, const char *);
        void LevelLog(LPCHARACTER, unsigned int, unsigned int);
        void BootLog(const char *, BYTE);
        void VCardLog(DWORD, DWORD, DWORD, const char *, const char *, const char *, const char *, const char *);
        void FishLog(DWORD, int, int, int, DWORD, DWORD, DWORD);
        void QuestRewardLog(const char *, DWORD, DWORD, int, int);
        void DetailLoginLog(bool, LPCHARACTER);
        void DragonSlayLog(DWORD, DWORD, DWORD, DWORD);
        void HackShieldLog(unsigned long, LPCHARACTER);
    private:
        void Query(const char *, ...);
    };
}

#endif // __LIBM2_GAME_LOGMANAGER_HPP
