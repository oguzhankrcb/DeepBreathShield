/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CPrivManager.hpp"
namespace libm2 {

    CPrivManager::CPrivManager() {
        ((void(*)(CPrivManager * const))Addr::CPrivManager::CPrivManager)(this);
    }

    int CPrivManager::GetPriv(LPCHARACTER ch, BYTE type) {
        return ((int(*)(CPrivManager * const, LPCHARACTER, BYTE))Addr::CPrivManager::GetPriv__LPCHARACTER_BYTE)(this, ch, type);
    }

    int CPrivManager::GetPrivByCharacter(DWORD pid, BYTE type) {
        return ((int(*)(CPrivManager * const, DWORD, BYTE))Addr::CPrivManager::GetPrivByCharacter__DWORD_BYTE)(this, pid, type);
    }

    int CPrivManager::GetPrivByEmpire(BYTE bEmpire, BYTE type) {
        return ((int(*)(CPrivManager * const, BYTE, BYTE))Addr::CPrivManager::GetPrivByEmpire__BYTE_BYTE)(this, bEmpire, type);
    }

    CPrivManager::SPrivEmpireData * CPrivManager::GetPrivByEmpireEx(BYTE bEmpire, BYTE type) {
        return ((CPrivManager::SPrivEmpireData * (*)(CPrivManager * const, BYTE, BYTE))Addr::CPrivManager::GetPrivByEmpireEx__BYTE_BYTE)(this, bEmpire, type);
    }

    int CPrivManager::GetPrivByGuild(DWORD guild_id, BYTE type) {
        return ((int(*)(CPrivManager * const, DWORD, BYTE))Addr::CPrivManager::GetPrivByGuild__DWORD_BYTE)(this, guild_id, type);
    }

    const CPrivManager::SPrivGuildData * CPrivManager::GetPrivByGuildEx(DWORD dwGuildID, BYTE byType) const {
        return ((const CPrivManager::SPrivGuildData * (*)(const CPrivManager * const, DWORD, BYTE))Addr::CPrivManager::GetPrivByGuildEx__DWORD_BYTE)(this, dwGuildID, byType);
    }

    void CPrivManager::GiveCharacterPriv(DWORD pid, BYTE type, int value, BYTE bLog) {
        ((void(*)(CPrivManager * const, DWORD, BYTE, int, BYTE))Addr::CPrivManager::GiveCharacterPriv__DWORD_BYTE_int_BYTE)(this, pid, type, value, bLog);
    }

    void CPrivManager::GiveEmpirePriv(BYTE empire, BYTE type, int value, BYTE bLog, time_t end_time_sec) {
        ((void(*)(CPrivManager * const, BYTE, BYTE, int, BYTE, time_t))Addr::CPrivManager::GiveEmpirePriv__BYTE_BYTE_int_BYTE_time_t)(this, empire, type, value, bLog, end_time_sec);
    }

    void CPrivManager::GiveGuildPriv(DWORD guild_id, BYTE type, int value, BYTE bLog, time_t end_time_sec) {
        ((void(*)(CPrivManager * const, DWORD, BYTE, int, BYTE, time_t))Addr::CPrivManager::GiveGuildPriv__DWORD_BYTE_int_BYTE_time_t)(this, guild_id, type, value, bLog, end_time_sec);
    }

    void CPrivManager::RemoveCharacterPriv(DWORD pid, BYTE type) {
        ((void(*)(CPrivManager * const, DWORD, BYTE))Addr::CPrivManager::RemoveCharacterPriv__DWORD_BYTE)(this, pid, type);
    }

    void CPrivManager::RemoveEmpirePriv(BYTE empire, BYTE type) {
        ((void(*)(CPrivManager * const, BYTE, BYTE))Addr::CPrivManager::RemoveEmpirePriv__BYTE_BYTE)(this, empire, type);
    }

    void CPrivManager::RemoveGuildPriv(DWORD guild_id, BYTE type) {
        ((void(*)(CPrivManager * const, DWORD, BYTE))Addr::CPrivManager::RemoveGuildPriv__DWORD_BYTE)(this, guild_id, type);
    }

    void CPrivManager::RequestGiveCharacterPriv(DWORD pid, BYTE type, int value) {
        ((void(*)(CPrivManager * const, DWORD, BYTE, int))Addr::CPrivManager::RequestGiveCharacterPriv__DWORD_BYTE_int)(this, pid, type, value);
    }

    void CPrivManager::RequestGiveEmpirePriv(BYTE empire, BYTE type, int value, time_t duration_sec) {
        ((void(*)(CPrivManager * const, BYTE, BYTE, int, time_t))Addr::CPrivManager::RequestGiveEmpirePriv__BYTE_BYTE_int_time_t)(this, empire, type, value, duration_sec);
    }

    void CPrivManager::RequestGiveGuildPriv(DWORD guild_id, BYTE type, int value, time_t duration_sec) {
        ((void(*)(CPrivManager * const, DWORD, BYTE, int, time_t))Addr::CPrivManager::RequestGiveGuildPriv__DWORD_BYTE_int_time_t)(this, guild_id, type, value, duration_sec);
    }
}
