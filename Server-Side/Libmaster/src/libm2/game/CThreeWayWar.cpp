/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CThreeWayWar.hpp"
namespace libm2 {
    CThreeWayWar::CThreeWayWar() {
        ((void(*)(CThreeWayWar * const))Addr::CThreeWayWar::CThreeWayWar)(this);
    }

    void CThreeWayWar::DecreaseReviveTokenForPlayer(DWORD PlayerID) {
        ((void(*)(CThreeWayWar * const, DWORD))Addr::CThreeWayWar::DecreaseReviveTokenForPlayer__DWORD)(this, PlayerID);
    }

    const ForkedPassMapInfo & CThreeWayWar::GetEventPassMapInfo() const {
        return ((const ForkedPassMapInfo & (*)(const CThreeWayWar * const))Addr::CThreeWayWar::GetEventPassMapInfo)(this);
    }

    const ForkedSungziMapInfo & CThreeWayWar::GetEventSungZiMapInfo() const {
        return ((const ForkedSungziMapInfo & (*)(const CThreeWayWar * const))Addr::CThreeWayWar::GetEventSungZiMapInfo)(this);
    }

    int CThreeWayWar::GetKillScore(BYTE empire) const {
        return ((int(*)(const CThreeWayWar * const, BYTE))Addr::CThreeWayWar::GetKillScore__BYTE)(this, empire);
    }

    int CThreeWayWar::GetReviveTokenForPlayer(DWORD PlayerID) {
        return ((int(*)(CThreeWayWar * const, DWORD))Addr::CThreeWayWar::GetReviveTokenForPlayer__DWORD)(this, PlayerID);
    }

    void CThreeWayWar::Initialize() {
        ((void(*)(CThreeWayWar * const))Addr::CThreeWayWar::Initialize)(this);
    }

    bool CThreeWayWar::IsRegisteredUser(DWORD PlayerID) const {
        return ((bool(*)(const CThreeWayWar * const, DWORD))Addr::CThreeWayWar::IsRegisteredUser__DWORD)(this, PlayerID);
    }

    bool CThreeWayWar::IsSungZiMapIndex(int iMapIndex) const {
        return ((bool(*)(const CThreeWayWar * const, int))Addr::CThreeWayWar::IsSungZiMapIndex__int)(this, iMapIndex);
    }

    bool CThreeWayWar::IsThreeWayWarMapIndex(int iMapIndex) const {
        return ((bool(*)(const CThreeWayWar * const, int))Addr::CThreeWayWar::IsThreeWayWarMapIndex__int)(this, iMapIndex);
    }

    bool CThreeWayWar::LoadSetting(const char * szFileName) {
        return ((bool(*)(CThreeWayWar * const, const char *))Addr::CThreeWayWar::LoadSetting__const_char_)(this, szFileName);
    }

    void CThreeWayWar::RandomEventMapSet() {
        ((void(*)(CThreeWayWar * const))Addr::CThreeWayWar::RandomEventMapSet)(this);
    }

    void CThreeWayWar::RegisterUser(DWORD PlayerID) {
        ((void(*)(CThreeWayWar * const, DWORD))Addr::CThreeWayWar::RegisterUser__DWORD)(this, PlayerID);
    }

    void CThreeWayWar::RemoveAllMonstersInThreeWay() const {
        ((void(*)(const CThreeWayWar * const))Addr::CThreeWayWar::RemoveAllMonstersInThreeWay)(this);
    }

    void CThreeWayWar::SetKillScore(BYTE empire, int count) {
        ((void(*)(CThreeWayWar * const, BYTE, int))Addr::CThreeWayWar::SetKillScore__BYTE_int)(this, empire, count);
    }

    void CThreeWayWar::SetReviveTokenForPlayer(DWORD PlayerID, int count) {
        ((void(*)(CThreeWayWar * const, DWORD, int))Addr::CThreeWayWar::SetReviveTokenForPlayer__DWORD_int)(this, PlayerID, count);
    }

    void CThreeWayWar::onDead(LPCHARACTER pChar, LPCHARACTER pkKiller) {
        ((void(*)(CThreeWayWar * const, LPCHARACTER, LPCHARACTER))Addr::CThreeWayWar::onDead__LPCHARACTER_LPCHARACTER)(this, pChar, pkKiller);
    }

    CThreeWayWar::~CThreeWayWar() {
        ((void(*)(CThreeWayWar * const))Addr::CThreeWayWar::__CThreeWayWar)(this);
    }
}
