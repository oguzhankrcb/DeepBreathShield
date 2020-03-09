/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHARACTER_MANAGER.hpp"
namespace libm2 {

    bool CHARACTER_MANAGER::AddToStateList(LPCHARACTER ch) {
        return ((bool(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::AddToStateList__LPCHARACTER)(this, ch);
    }

    DWORD CHARACTER_MANAGER::AllocVID() {
        return ((DWORD(*)(CHARACTER_MANAGER * const))Addr::CHARACTER_MANAGER::AllocVID)(this);
    }

    bool CHARACTER_MANAGER::BeginPendingDestroy() {
        return ((bool(*)(CHARACTER_MANAGER * const))Addr::CHARACTER_MANAGER::BeginPendingDestroy)(this);
    }

    LPCHARACTER CHARACTER_MANAGER::CreateCharacter(const char * name, DWORD dwPID) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, const char *, DWORD))Addr::CHARACTER_MANAGER::CreateCharacter__const_char__DWORD)(this, name, dwPID);
    }

    void CHARACTER_MANAGER::DelayedSave(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::DelayedSave__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::Destroy() {
        ((void(*)(CHARACTER_MANAGER * const))Addr::CHARACTER_MANAGER::Destroy)(this);
    }

    void CHARACTER_MANAGER::DestroyCharacter(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::DestroyCharacter__LPCHARACTER)(this, ch);
    }

    LPCHARACTER CHARACTER_MANAGER::Find(const VID & vid) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, const VID &))Addr::CHARACTER_MANAGER::Find__const_VID_)(this, vid);
    }

    LPCHARACTER CHARACTER_MANAGER::Find(DWORD dwVID) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, DWORD))Addr::CHARACTER_MANAGER::Find__DWORD)(this, dwVID);
    }

    LPCHARACTER CHARACTER_MANAGER::FindByPID(DWORD dwPID) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, DWORD))Addr::CHARACTER_MANAGER::FindByPID__DWORD)(this, dwPID);
    }

    LPCHARACTER CHARACTER_MANAGER::FindPC(const char * name) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, const char *))Addr::CHARACTER_MANAGER::FindPC__const_char_)(this, name);
    }

    LPCHARACTER CHARACTER_MANAGER::FindSpecifyPC(unsigned int uiJobFlag, long lMapIndex, LPCHARACTER except, int iMinLevel, int iMaxLevel) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, unsigned int, long, LPCHARACTER, int, int))Addr::CHARACTER_MANAGER::FindSpecifyPC__unsigned_int_long_LPCHARACTER_int_int)(this, uiJobFlag, lMapIndex, except, iMinLevel, iMaxLevel);
    }

    bool CHARACTER_MANAGER::FlushDelayedSave(LPCHARACTER ch) {
        return ((bool(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::FlushDelayedSave__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::FlushPendingDestroy() {
        ((void(*)(CHARACTER_MANAGER * const))Addr::CHARACTER_MANAGER::FlushPendingDestroy)(this);
    }

    bool CHARACTER_MANAGER::GetCharactersByRaceNum(DWORD dwRaceNum, CharacterVectorInteractor & i) {
        return ((bool(*)(CHARACTER_MANAGER * const, DWORD, CharacterVectorInteractor &))Addr::CHARACTER_MANAGER::GetCharactersByRaceNum__DWORD_CharacterVectorInteractor_)(this, dwRaceNum, i);
    }

    int CHARACTER_MANAGER::GetMobDamageRate(LPCHARACTER ch) {
        return ((int(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobDamageRate__LPCHARACTER)(this, ch);
    }

    int CHARACTER_MANAGER::GetMobExpRate(LPCHARACTER ch) {
        return ((int(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobExpRate__LPCHARACTER)(this, ch);
    }

    int CHARACTER_MANAGER::GetMobGoldAmountRate(LPCHARACTER ch) {
        return ((int(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobGoldAmountRate__LPCHARACTER)(this, ch);
    }

    int CHARACTER_MANAGER::GetMobGoldDropRate(LPCHARACTER ch) {
        return ((int(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobGoldDropRate__LPCHARACTER)(this, ch);
    }

    int CHARACTER_MANAGER::GetMobItemRate(LPCHARACTER ch) {
        return ((int(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::GetMobItemRate__LPCHARACTER)(this, ch);
    }

    int CHARACTER_MANAGER::GetUserDamageRate(LPCHARACTER ch) {
        return ((int(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::GetUserDamageRate__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::GracefulShutdown() {
        ((void(*)(CHARACTER_MANAGER * const))Addr::CHARACTER_MANAGER::GracefulShutdown)(this);
    }

    void CHARACTER_MANAGER::KillLog(DWORD dwVnum) {
        ((void(*)(CHARACTER_MANAGER * const, DWORD))Addr::CHARACTER_MANAGER::KillLog__DWORD)(this, dwVnum);
    }

    void CHARACTER_MANAGER::PacketMonsterLog(LPCHARACTER ch, const void * buf, int size) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER, const void *, int))Addr::CHARACTER_MANAGER::PacketMonsterLog__LPCHARACTER_const_void__int)(this, ch, buf, size);
    }

    void CHARACTER_MANAGER::ProcessDelayedSave() {
        ((void(*)(CHARACTER_MANAGER * const))Addr::CHARACTER_MANAGER::ProcessDelayedSave)(this);
    }

    void CHARACTER_MANAGER::RegisterForMonsterLog(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::RegisterForMonsterLog__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::RegisterRaceNum(DWORD dwVnum) {
        ((void(*)(CHARACTER_MANAGER * const, DWORD))Addr::CHARACTER_MANAGER::RegisterRaceNum__DWORD)(this, dwVnum);
    }

    void CHARACTER_MANAGER::RegisterRaceNumMap(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::RegisterRaceNumMap__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::RemoveFromStateList(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::RemoveFromStateList__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::SelectStone(LPCHARACTER pkChr) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::SelectStone__LPCHARACTER)(this, pkChr);
    }

    void CHARACTER_MANAGER::SendScriptToMap(long lMapIndex, const std::string & s) {
        ((void(*)(CHARACTER_MANAGER * const, long, const std::string &))Addr::CHARACTER_MANAGER::SendScriptToMap__long_const_std_locale_string_)(this, lMapIndex, s);
    }

    LPCHARACTER CHARACTER_MANAGER::SpawnGroup(DWORD dwVnum, long lMapIndex, int sx, int sy, int ex, int ey, LPREGEN pkRegen, bool bAggressive_, LPDUNGEON pDungeon) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, DWORD, long, int, int, int, int, LPREGEN, bool, LPDUNGEON))Addr::CHARACTER_MANAGER::SpawnGroup__DWORD_long_int_int_int_int_LPREGEN_bool_LPDUNGEON)(this, dwVnum, lMapIndex, sx, sy, ex, ey, pkRegen, bAggressive_, pDungeon);
    }

    bool CHARACTER_MANAGER::SpawnGroupGroup(DWORD dwVnum, long lMapIndex, int sx, int sy, int ex, int ey, LPREGEN pkRegen, bool bAggressive_, LPDUNGEON pDungeon) {
        return ((bool(*)(CHARACTER_MANAGER * const, DWORD, long, int, int, int, int, LPREGEN, bool, LPDUNGEON))Addr::CHARACTER_MANAGER::SpawnGroupGroup__DWORD_long_int_int_int_int_LPREGEN_bool_LPDUNGEON)(this, dwVnum, lMapIndex, sx, sy, ex, ey, pkRegen, bAggressive_, pDungeon);
    }

    LPCHARACTER CHARACTER_MANAGER::SpawnMob(DWORD dwVnum, long lMapIndex, long x, long y, long z, bool bSpawnMotion, int iRot, bool bShow) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, DWORD, long, long, long, long, bool, int, bool))Addr::CHARACTER_MANAGER::SpawnMob__DWORD_long_long_long_long_bool_int_bool)(this, dwVnum, lMapIndex, x, y, z, bSpawnMotion, iRot, bShow);
    }

    LPCHARACTER CHARACTER_MANAGER::SpawnMobRandomPosition(DWORD dwVnum, long lMapIndex) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, DWORD, long))Addr::CHARACTER_MANAGER::SpawnMobRandomPosition__DWORD_long)(this, dwVnum, lMapIndex);
    }

    LPCHARACTER CHARACTER_MANAGER::SpawnMobRange(DWORD dwVnum, long lMapIndex, int sx, int sy, int ex, int ey, bool bIsException, bool bSpawnMotion, bool bAggressive) {
        return ((LPCHARACTER(*)(CHARACTER_MANAGER * const, DWORD, long, int, int, int, int, bool, bool, bool))Addr::CHARACTER_MANAGER::SpawnMobRange__DWORD_long_int_int_int_int_bool_bool_bool)(this, dwVnum, lMapIndex, sx, sy, ex, ey, bIsException, bSpawnMotion, bAggressive);
    }

    bool CHARACTER_MANAGER::SpawnMoveGroup(DWORD dwVnum, long lMapIndex, int sx, int sy, int ex, int ey, int tx, int ty, LPREGEN pkRegen, bool bAggressive_) {
        return ((bool(*)(CHARACTER_MANAGER * const, DWORD, long, int, int, int, int, int, int, LPREGEN, bool))Addr::CHARACTER_MANAGER::SpawnMoveGroup__DWORD_long_int_int_int_int_int_int_LPREGEN_bool)(this, dwVnum, lMapIndex, sx, sy, ex, ey, tx, ty, pkRegen, bAggressive_);
    }

    void CHARACTER_MANAGER::UnregisterForMonsterLog(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::UnregisterForMonsterLog__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::UnregisterRaceNumMap(LPCHARACTER ch) {
        ((void(*)(CHARACTER_MANAGER * const, LPCHARACTER))Addr::CHARACTER_MANAGER::UnregisterRaceNumMap__LPCHARACTER)(this, ch);
    }

    void CHARACTER_MANAGER::Update(int iPulse) {
        ((void(*)(CHARACTER_MANAGER * const, int))Addr::CHARACTER_MANAGER::Update__int)(this, iPulse);
    }
}
