/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SECTREE_MANAGER_HPP
#define __LIBM2_GAME_SECTREE_MANAGER_HPP
#include "stdInclude.hpp"
#include "../lib/GameSingleton.hpp"
#include "enums.hpp"
#include "../addr.hpp"
#include "SECTREE_MAP.hpp"
#include "TAreaInfo.hpp"
#include "SMapRegion.hpp"
#include "npc_info.hpp"
namespace libm2 {

    class SECTREE_MANAGER : public GameSingleton<SECTREE_MANAGER, (unsigned int) Addr::SECTREE_MANAGER::singleton> {
    private:
        static WORD current_sectree_version;
        std::map<unsigned int, SECTREE_MAP*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, SECTREE_MAP*> > > m_map_pkSectree;

        std::map<int, std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, TAreaInfo, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TAreaInfo> > >, std::less<int>, std::allocator<std::pair<int const, std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, TAreaInfo, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TAreaInfo> > > > > > m_map_pkArea;
        std::vector<SMapRegion, std::allocator<SMapRegion> > m_vec_mapRegion;

        std::map<unsigned int, std::vector<npc_info, std::allocator<npc_info> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<npc_info, std::allocator<npc_info> > > > > m_mapNPCPosition;
        std::tr1::unordered_map<long, int> next_private_index_map_;

    public:
        SECTREE_MANAGER(void);
        ~SECTREE_MANAGER();
        LPSECTREE_MAP GetMap(long);
        LPSECTREE Get(DWORD, DWORD);
        LPSECTREE Get(DWORD, DWORD, DWORD);
        int LoadSettingFile(long, const char *, TMapSetting &);
        bool LoadMapRegion(const char *, TMapSetting &, const char *);
        int Build(const char *, const char *);
        LPSECTREE_MAP BuildSectreeFromSetting(TMapSetting &);
        bool LoadAttribute(LPSECTREE_MAP, const char *, TMapSetting &);
        void LoadDungeon(int, const char *);
        bool GetValidLocation(long, long, long, long &, PIXEL_POSITION &, BYTE);
        bool GetSpawnPosition(long, long, PIXEL_POSITION &);
        bool GetSpawnPositionByMapIndex(long, PIXEL_POSITION &);
        bool GetRecallPositionByEmpire(int, BYTE, PIXEL_POSITION &);
        const TMapRegion * GetMapRegion(long);
        int GetMapIndex(long, long);
        const TMapRegion * FindRegionByPartialName(const char *);
        bool GetMapBasePosition(long, long, PIXEL_POSITION &);
        bool GetMapBasePositionByMapIndex(long, PIXEL_POSITION &);
        bool GetMovablePosition(long, long, long, PIXEL_POSITION &);
        bool IsMovablePosition(long, long, long);
        bool GetCenterPositionOfMap(BYTE, PIXEL_POSITION &);
        bool GetRandomLocation(long, PIXEL_POSITION &, DWORD, DWORD, int);
        long CreatePrivateMap(long);
        void DestroyPrivateMap(long);
        TAreaMap & GetDungeonArea(long);
        void SendNPCPosition(LPCHARACTER);
        void InsertNPCPosition(long, BYTE, const char *, long, long);
        BYTE GetEmpireFromMapIndex(long);
        void PurgeMonstersInMap(long);
        void PurgeStonesInMap(long);
        void PurgeNPCsInMap(long);
        size_t GetMonsterCountInMap(long);
        size_t GetMonsterCountInMap(long, DWORD);
        bool ForAttrRegion(long, long, long, long, long, long, DWORD, EAttrRegionMode);
        bool SaveAttributeToImage(int, const char *, LPSECTREE_MAP);
    private:
        bool ForAttrRegionRightAngle(long, long, long, long, long, long, DWORD, EAttrRegionMode);
        bool ForAttrRegionFreeAngle(long, long, long, long, long, long, DWORD, EAttrRegionMode);
        bool ForAttrRegionCell(long, long, long, DWORD, EAttrRegionMode);
    };
}
#endif // __LIBM2_GAME_SECTREE_MANAGER_HPP
