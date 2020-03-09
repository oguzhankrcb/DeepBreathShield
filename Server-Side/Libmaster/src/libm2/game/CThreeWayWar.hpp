/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CTHREEWAYWAR_HPP
#define __LIBM2_GAME_CTHREEWAYWAR_HPP
#include "stdInclude.hpp"
#include "../addr.hpp"
#include "../lib/GameSingleton.hpp"
#include "ForkedMapInfo.hpp"
namespace libm2 {

    class CThreeWayWar : public GameSingleton<CThreeWayWar, (unsigned int) Addr::CThreeWayWar::singleton> {
    private:
        int KillScore_[3];
        int RegenFlag_;
        std::set<int, std::less<int>, std::allocator<int> > MapIndexSet_;
        std::vector<ForkedPassMapInfo, std::allocator<ForkedPassMapInfo> > PassInfoMap_;
        std::vector<ForkedSungziMapInfo, std::allocator<ForkedSungziMapInfo> > SungZiInfoMap_;
        boost::unordered_map<unsigned int, unsigned int, boost::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > RegisterUserMap_;
        boost::unordered_map<unsigned int, int, boost::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, int> > > ReviveTokenMap_;

    public:
        CThreeWayWar(void);
        ~CThreeWayWar();
        void Initialize(void);
        bool LoadSetting(const char *);
        int GetKillScore(BYTE) const;
        void SetKillScore(BYTE, int);
        void SetReviveTokenForPlayer(DWORD, int);
        int GetReviveTokenForPlayer(DWORD);
        void DecreaseReviveTokenForPlayer(DWORD);
        const ForkedPassMapInfo & GetEventPassMapInfo(void) const;
        const ForkedSungziMapInfo & GetEventSungZiMapInfo(void) const;
        bool IsThreeWayWarMapIndex(int) const;
        bool IsSungZiMapIndex(int) const;
        void RandomEventMapSet(void);
        void RegisterUser(DWORD);
        bool IsRegisteredUser(DWORD) const;
        void onDead(LPCHARACTER, LPCHARACTER);
        void SetRegenFlag(int);
        int GetRegenFlag(void) const;
        void RemoveAllMonstersInThreeWay(void) const;
    };
}
#endif // __LIBM2_GAME_CTHREEWAYWAR_HPP