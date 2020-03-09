/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CHARACTER_MANAGER_HPP
#define __LIBM2_GAME_CHARACTER_MANAGER_HPP
#include "stdInclude.hpp"
#include "CHARACTER.hpp"
#include "../lib/GameSingleton.hpp"
#include "CDungeon.hpp"
#include "regen.hpp"
#include <tr1/unordered_set>
#include "CharacterVectorInteractor.hpp"
#include "../addr.hpp"
namespace libm2 {

    class CHARACTER_MANAGER : public GameSingleton<CHARACTER_MANAGER, (unsigned int) Addr::CHARACTER_MANAGER::singleton> {
    private:
        int m_iMobItemRate;
        int m_iMobDamageRate;
        int m_iMobGoldAmountRate;
        int m_iMobGoldDropRate;
        int m_iMobExpRate;
        int m_iMobItemRatePremium;
        int m_iMobGoldAmountRatePremium;
        int m_iMobGoldDropRatePremium;
        int m_iMobExpRatePremium;
        int m_iUserDamageRate;
        int m_iUserDamageRatePremium;
        int m_iVIDCount;
        std::tr1::unordered_map<unsigned int, CHARACTER*, std::tr1::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, CHARACTER*> >> m_map_pkChrByVID;
        std::tr1::unordered_map<unsigned int, CHARACTER*, std::tr1::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, CHARACTER*> >> m_map_pkChrByPID;
        std::tr1::unordered_map<std::string, CHARACTER*> m_map_pkPCChr;
        char dummy1[1024];
        CHARACTER_SET m_set_pkChrState;
        CHARACTER_SET m_set_pkChrForDelayedSave;
        CHARACTER_SET m_set_pkChrMonsterLog;
        LPCHARACTER m_pkChrSelectedStone;
        std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > m_map_dwMobKillCount;
        std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > m_set_dwRegisteredRaceNum;
        std::map<unsigned int, std::tr1::unordered_set<CHARACTER*, std::tr1::hash<CHARACTER*>, std::equal_to<CHARACTER*>, std::allocator<CHARACTER* >>, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::tr1::unordered_set<CHARACTER*, std::tr1::hash<CHARACTER*>, std::equal_to<CHARACTER*>, std::allocator<CHARACTER* >> > > > m_map_pkChrByRaceNum;

        bool m_bUsePendingDestroy;
        CHARACTER_SET m_set_pkChrPendingDestroy;

    public:
        CHARACTER_MANAGER(void);
        ~CHARACTER_MANAGER();
        void Destroy(void);
        void GracefulShutdown(void);
        DWORD AllocVID(void);
        LPCHARACTER CreateCharacter(const char *, DWORD);
        void DestroyCharacter(LPCHARACTER);
        void Update(int);
        LPCHARACTER SpawnMob(DWORD, long, long, long, long, bool, int, bool);
        LPCHARACTER SpawnMobRange(DWORD, long, int, int, int, int, bool, bool,
                bool);
        LPCHARACTER SpawnGroup(DWORD, long, int, int, int, int, LPREGEN, bool,
                LPDUNGEON);
        bool SpawnGroupGroup(DWORD, long, int, int, int, int, LPREGEN, bool,
                LPDUNGEON);
        bool SpawnMoveGroup(DWORD, long, int, int, int, int, int, int, LPREGEN,
                bool);
        LPCHARACTER SpawnMobRandomPosition(DWORD, long);
        void SelectStone(LPCHARACTER);
        std::tr1::unordered_map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, CHARACTER*, std::tr1::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::equal_to<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, CHARACTER*> >> &GetPCMap(void);
        LPCHARACTER Find(DWORD);
        LPCHARACTER Find(const VID &);
        LPCHARACTER FindPC(const char *);
        LPCHARACTER FindByPID(DWORD);
        bool AddToStateList(LPCHARACTER);
        void RemoveFromStateList(LPCHARACTER);
        void DelayedSave(LPCHARACTER);
        bool FlushDelayedSave(LPCHARACTER);
        void ProcessDelayedSave(void);
        void RegisterForMonsterLog(LPCHARACTER);
        void UnregisterForMonsterLog(LPCHARACTER);
        void PacketMonsterLog(LPCHARACTER, const void *, int);
        void KillLog(DWORD);
        void RegisterRaceNum(DWORD);
        void RegisterRaceNumMap(LPCHARACTER);
        void UnregisterRaceNumMap(LPCHARACTER);
        bool GetCharactersByRaceNum(DWORD, CharacterVectorInteractor &);
        LPCHARACTER FindSpecifyPC(unsigned int, long, LPCHARACTER, int, int);
        void SetMobItemRate(int);
        void SetMobDamageRate(int);
        void SetMobGoldAmountRate(int);
        void SetMobGoldDropRate(int);
        void SetMobExpRate(int);
        void SetMobItemRatePremium(int);
        void SetMobGoldAmountRatePremium(int);
        void SetMobGoldDropRatePremium(int);
        void SetMobExpRatePremium(int);
        void SetUserDamageRatePremium(int);
        void SetUserDamageRate(int);
        int GetMobItemRate(LPCHARACTER);
        int GetMobDamageRate(LPCHARACTER);
        int GetMobGoldAmountRate(LPCHARACTER);
        int GetMobGoldDropRate(LPCHARACTER);
        int GetMobExpRate(LPCHARACTER);
        int GetUserDamageRate(LPCHARACTER);
        void SendScriptToMap(long, const std::string &);
        bool BeginPendingDestroy(void);
        void FlushPendingDestroy(void);
    };
}
#endif // __LIBM2_GAME_CHARACTER_MANAGER_HPP
