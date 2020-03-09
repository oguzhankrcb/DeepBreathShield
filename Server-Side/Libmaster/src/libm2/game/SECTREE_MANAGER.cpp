/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "SECTREE_MANAGER.hpp"
#include "../addr.hpp"
namespace libm2 {

    int SECTREE_MANAGER::Build(const char * c_pszListFileName, const char * c_pszMapBasePath) {
        return ((int(*)(SECTREE_MANAGER * const, const char *, const char *))Addr::SECTREE_MANAGER::Build__const_char__const_char_)(this, c_pszListFileName, c_pszMapBasePath);
    }

    LPSECTREE_MAP SECTREE_MANAGER::BuildSectreeFromSetting(TMapSetting & r_setting) {
        return ((LPSECTREE_MAP(*)(SECTREE_MANAGER * const, TMapSetting &))Addr::SECTREE_MANAGER::BuildSectreeFromSetting__TMapSetting_)(this, r_setting);
    }

    long SECTREE_MANAGER::CreatePrivateMap(long lMapIndex) {
        return ((long(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::CreatePrivateMap__long)(this, lMapIndex);
    }

    void SECTREE_MANAGER::DestroyPrivateMap(long lMapIndex) {
        ((void(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::DestroyPrivateMap__long)(this, lMapIndex);
    }

    const TMapRegion * SECTREE_MANAGER::FindRegionByPartialName(const char * szMapName) {
        return ((const TMapRegion * (*)(SECTREE_MANAGER * const, const char *))Addr::SECTREE_MANAGER::FindRegionByPartialName__const_char_)(this, szMapName);
    }

    bool SECTREE_MANAGER::ForAttrRegion(long lMapIndex, long lStartX, long lStartY, long lEndX, long lEndY, long lRotate, DWORD dwAttr, EAttrRegionMode mode) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegion__long_long_long_long_long_long_DWORD_EAttrRegionMode)(this, lMapIndex, lStartX, lStartY, lEndX, lEndY, lRotate, dwAttr, mode);
    }

    bool SECTREE_MANAGER::ForAttrRegionCell(long lMapIndex, long lCX, long lCY, DWORD dwAttr, EAttrRegionMode mode) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegionCell__long_long_long_DWORD_EAttrRegionMode)(this, lMapIndex, lCX, lCY, dwAttr, mode);
    }

    bool SECTREE_MANAGER::ForAttrRegionFreeAngle(long lMapIndex, long lCX, long lCY, long lCW, long lCH, long lRotate, DWORD dwAttr, EAttrRegionMode mode) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegionFreeAngle__long_long_long_long_long_long_DWORD_EAttrRegionMode)(this, lMapIndex, lCX, lCY, lCW, lCH, lRotate, dwAttr, mode);
    }

    bool SECTREE_MANAGER::ForAttrRegionRightAngle(long lMapIndex, long lCX, long lCY, long lCW, long lCH, long lRotate, DWORD dwAttr, EAttrRegionMode mode) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegionRightAngle__long_long_long_long_long_long_DWORD_EAttrRegionMode)(this, lMapIndex, lCX, lCY, lCW, lCH, lRotate, dwAttr, mode);
    }

    LPSECTREE SECTREE_MANAGER::Get(DWORD dwIndex, DWORD package) {
        return ((LPSECTREE(*)(SECTREE_MANAGER * const, DWORD, DWORD))Addr::SECTREE_MANAGER::Get__DWORD_DWORD)(this, dwIndex, package);
    }

    LPSECTREE SECTREE_MANAGER::Get(DWORD dwIndex, DWORD x, DWORD y) {
        return ((LPSECTREE(*)(SECTREE_MANAGER * const, DWORD, DWORD, DWORD))Addr::SECTREE_MANAGER::Get__DWORD_DWORD_DWORD)(this, dwIndex, x, y);
    }

    bool SECTREE_MANAGER::GetCenterPositionOfMap(BYTE bMapIndex, PIXEL_POSITION & r_pos) {
        return ((bool(*)(SECTREE_MANAGER * const, BYTE, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetCenterPositionOfMap__BYTE_PIXEL_POSITION_)(this, bMapIndex, r_pos);
    }

    TAreaMap & SECTREE_MANAGER::GetDungeonArea(long lMapIndex) {
        return ((TAreaMap & (*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::GetDungeonArea__long)(this, lMapIndex);
    }

    BYTE SECTREE_MANAGER::GetEmpireFromMapIndex(long lMapIndex) {
        return ((BYTE(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::GetEmpireFromMapIndex__long)(this, lMapIndex);
    }

    LPSECTREE_MAP SECTREE_MANAGER::GetMap(long lMapIndex) {
        return ((LPSECTREE_MAP(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::GetMap__long)(this, lMapIndex);
    }

    bool SECTREE_MANAGER::GetMapBasePosition(long x, long y, PIXEL_POSITION & r_pos) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetMapBasePosition__long_long_PIXEL_POSITION_)(this, x, y, r_pos);
    }

    bool SECTREE_MANAGER::GetMapBasePositionByMapIndex(long lMapIndex, PIXEL_POSITION & r_pos) {
        return ((bool(*)(SECTREE_MANAGER * const, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetMapBasePositionByMapIndex__long_PIXEL_POSITION_)(this, lMapIndex, r_pos);
    }

    int SECTREE_MANAGER::GetMapIndex(long x, long y) {
        return ((int(*)(SECTREE_MANAGER * const, long, long))Addr::SECTREE_MANAGER::GetMapIndex__long_long)(this, x, y);
    }

    const TMapRegion * SECTREE_MANAGER::GetMapRegion(long lMapIndex) {
        return ((const TMapRegion * (*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::GetMapRegion__long)(this, lMapIndex);
    }

    size_t SECTREE_MANAGER::GetMonsterCountInMap(long lMapIndex) {
        return ((size_t(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::GetMonsterCountInMap__long)(this, lMapIndex);
    }

    size_t SECTREE_MANAGER::GetMonsterCountInMap(long lMapIndex, DWORD dwVnum) {
        return ((size_t(*)(SECTREE_MANAGER * const, long, DWORD))Addr::SECTREE_MANAGER::GetMonsterCountInMap__long_DWORD)(this, lMapIndex, dwVnum);
    }

    bool SECTREE_MANAGER::GetMovablePosition(long lMapIndex, long x, long y, PIXEL_POSITION & pos) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetMovablePosition__long_long_long_PIXEL_POSITION_)(this, lMapIndex, x, y, pos);
    }

    bool SECTREE_MANAGER::GetRandomLocation(long lMapIndex, PIXEL_POSITION & r_pos, DWORD dwCurrentX, DWORD dwCurrentY, int iMaxDistance) {
        return ((bool(*)(SECTREE_MANAGER * const, long, PIXEL_POSITION &, DWORD, DWORD, int))Addr::SECTREE_MANAGER::GetRandomLocation__long_PIXEL_POSITION__DWORD_DWORD_int)(this, lMapIndex, r_pos, dwCurrentX, dwCurrentY, iMaxDistance);
    }

    bool SECTREE_MANAGER::GetRecallPositionByEmpire(int iMapIndex, BYTE bEmpire, PIXEL_POSITION & r_pos) {
        return ((bool(*)(SECTREE_MANAGER * const, int, BYTE, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetRecallPositionByEmpire__int_BYTE_PIXEL_POSITION_)(this, iMapIndex, bEmpire, r_pos);
    }

    bool SECTREE_MANAGER::GetSpawnPosition(long x, long y, PIXEL_POSITION & r_pos) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetSpawnPosition__long_long_PIXEL_POSITION_)(this, x, y, r_pos);
    }

    bool SECTREE_MANAGER::GetSpawnPositionByMapIndex(long lMapIndex, PIXEL_POSITION & r_pos) {
        return ((bool(*)(SECTREE_MANAGER * const, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetSpawnPositionByMapIndex__long_PIXEL_POSITION_)(this, lMapIndex, r_pos);
    }

    bool SECTREE_MANAGER::GetValidLocation(long lMapIndex, long x, long y, long & r_lValidMapIndex, PIXEL_POSITION & r_pos, BYTE empire) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long, long &, PIXEL_POSITION &, BYTE))Addr::SECTREE_MANAGER::GetValidLocation__long_long_long_long__PIXEL_POSITION__BYTE)(this, lMapIndex, x, y, r_lValidMapIndex, r_pos, empire);
    }

    void SECTREE_MANAGER::InsertNPCPosition(long lMapIndex, BYTE bType, const char * szName, long x, long y) {
        ((void(*)(SECTREE_MANAGER * const, long, BYTE, const char *, long, long))Addr::SECTREE_MANAGER::InsertNPCPosition__long_BYTE_const_char__long_long)(this, lMapIndex, bType, szName, x, y);
    }

    bool SECTREE_MANAGER::IsMovablePosition(long lMapIndex, long x, long y) {
        return ((bool(*)(SECTREE_MANAGER * const, long, long, long))Addr::SECTREE_MANAGER::IsMovablePosition__long_long_long)(this, lMapIndex, x, y);
    }

    bool SECTREE_MANAGER::LoadAttribute(LPSECTREE_MAP pkMapSectree, const char * c_pszFileName, TMapSetting & r_setting) {
        return ((bool(*)(SECTREE_MANAGER * const, LPSECTREE_MAP, const char *, TMapSetting &))Addr::SECTREE_MANAGER::LoadAttribute__LPSECTREE_MAP_const_char__TMapSetting_)(this, pkMapSectree, c_pszFileName, r_setting);
    }

    void SECTREE_MANAGER::LoadDungeon(int iIndex, const char * c_pszFileName) {
        ((void(*)(SECTREE_MANAGER * const, int, const char *))Addr::SECTREE_MANAGER::LoadDungeon__int_const_char_)(this, iIndex, c_pszFileName);
    }

    bool SECTREE_MANAGER::LoadMapRegion(const char * c_pszFileName, TMapSetting & r_setting, const char * c_pszMapName) {
        return ((bool(*)(SECTREE_MANAGER * const, const char *, TMapSetting &, const char *))Addr::SECTREE_MANAGER::LoadMapRegion__const_char__TMapSetting__const_char_)(this, c_pszFileName, r_setting, c_pszMapName);
    }

    int SECTREE_MANAGER::LoadSettingFile(long lMapIndex, const char * c_pszSettingFileName, TMapSetting & r_setting) {
        return ((int(*)(SECTREE_MANAGER * const, long, const char *, TMapSetting &))Addr::SECTREE_MANAGER::LoadSettingFile__long_const_char__TMapSetting_)(this, lMapIndex, c_pszSettingFileName, r_setting);
    }

    void SECTREE_MANAGER::PurgeMonstersInMap(long lMapIndex) {
        ((void(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::PurgeMonstersInMap__long)(this, lMapIndex);
    }

    void SECTREE_MANAGER::PurgeNPCsInMap(long lMapIndex) {
        ((void(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::PurgeNPCsInMap__long)(this, lMapIndex);
    }

    void SECTREE_MANAGER::PurgeStonesInMap(long lMapIndex) {
        ((void(*)(SECTREE_MANAGER * const, long))Addr::SECTREE_MANAGER::PurgeStonesInMap__long)(this, lMapIndex);
    }

    SECTREE_MANAGER::SECTREE_MANAGER() {
        ((void(*)(SECTREE_MANAGER * const))Addr::SECTREE_MANAGER::SECTREE_MANAGER)(this);
    }

    bool SECTREE_MANAGER::SaveAttributeToImage(int lMapIndex, const char * c_pszFileName, LPSECTREE_MAP pMapSrc) {
        return ((bool(*)(SECTREE_MANAGER * const, int, const char *, LPSECTREE_MAP))Addr::SECTREE_MANAGER::SaveAttributeToImage__int_const_char__LPSECTREE_MAP)(this, lMapIndex, c_pszFileName, pMapSrc);
    }

    void SECTREE_MANAGER::SendNPCPosition(LPCHARACTER ch) {
        ((void(*)(SECTREE_MANAGER * const, LPCHARACTER))Addr::SECTREE_MANAGER::SendNPCPosition__LPCHARACTER)(this, ch);
    }

    SECTREE_MANAGER::~SECTREE_MANAGER() {
        ((void(*)(SECTREE_MANAGER * const))Addr::SECTREE_MANAGER::__SECTREE_MANAGER)(this);
    }
}
