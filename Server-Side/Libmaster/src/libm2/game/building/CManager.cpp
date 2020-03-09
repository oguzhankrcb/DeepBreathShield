/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CManager.hpp"
namespace libm2 {

    building::CManager::CManager() {
        ((void(*)(building::CManager * const))Addr::building::CManager::CManager)(this);
    }

    void building::CManager::ClearLand(DWORD dwLandID) {
        ((void(*)(building::CManager * const, DWORD))Addr::building::CManager::ClearLand__DWORD)(this, dwLandID);
    }

    void building::CManager::ClearLandByGuildID(DWORD dwGuildID) {
        ((void(*)(building::CManager * const, DWORD))Addr::building::CManager::ClearLandByGuildID__DWORD)(this, dwGuildID);
    }

    void building::CManager::DeleteObject(DWORD dwID) {
        ((void(*)(building::CManager * const, DWORD))Addr::building::CManager::DeleteObject__DWORD)(this, dwID);
    }

    void building::CManager::Destroy() {
        ((void(*)(building::CManager * const))Addr::building::CManager::Destroy)(this);
    }

    void building::CManager::FinalizeBoot() {
        ((void(*)(building::CManager * const))Addr::building::CManager::FinalizeBoot)(this);
    }

    building::CLand * building::CManager::FindLand(long lMapIndex, long x, long y) {
        return ((building::CLand * (*)(building::CManager * const, long, long, long))Addr::building::CManager::FindLand__long_long_long)(this, lMapIndex, x, y);
    }

    building::CLand * building::CManager::FindLand(DWORD dwID) {
        return ((building::CLand * (*)(building::CManager * const, DWORD))Addr::building::CManager::FindLand__DWORD)(this, dwID);
    }

    building::CLand * building::CManager::FindLandByGuild(DWORD GID) {
        return ((building::CLand * (*)(building::CManager * const, DWORD))Addr::building::CManager::FindLandByGuild__DWORD)(this, GID);
    }

    building::LPOBJECT building::CManager::FindObjectByVID(DWORD dwVID) {
        return ((building::LPOBJECT(*)(building::CManager * const, DWORD))Addr::building::CManager::FindObjectByVID__DWORD)(this, dwVID);
    }

    building::TObjectProto * building::CManager::GetObjectProto(DWORD dwVnum) {
        return ((building::TObjectProto * (*)(building::CManager * const, DWORD))Addr::building::CManager::GetObjectProto__DWORD)(this, dwVnum);
    }

    bool building::CManager::LoadLand(building::TLand * pTable) {
        return ((bool(*)(building::CManager * const, building::TLand *))Addr::building::CManager::LoadLand__building_CLand_TLand_)(this, pTable);
    }

    bool building::CManager::LoadObject(building::TObject * pTable, bool isBoot) {
        return ((bool(*)(building::CManager * const, building::TObject *, bool))Addr::building::CManager::LoadObject__building_CObject_TObject__bool)(this, pTable, isBoot);
    }

    bool building::CManager::LoadObjectProto(const building::TObjectProto * pProto, int size) {
        return ((bool(*)(building::CManager * const, const building::TObjectProto *, int))Addr::building::CManager::LoadObjectProto__const_building_CObject_TObjectProto__int)(this, pProto, size);
    }

    void building::CManager::SendLandList(LPDESC d, long lMapIndex) {
        ((void(*)(building::CManager * const, LPDESC, long))Addr::building::CManager::SendLandList__LPDESC_long)(this, d, lMapIndex);
    }

    void building::CManager::UnregisterObject(building::LPOBJECT pkObj) {
        ((void(*)(building::CManager * const, building::LPOBJECT))Addr::building::CManager::UnregisterObject__building_CLand_LPOBJECT)(this, pkObj);
    }

    void building::CManager::UpdateLand(building::TLand * pTable) {
        ((void(*)(building::CManager * const, building::TLand *))Addr::building::CManager::UpdateLand__building_CLand_TLand_)(this, pTable);
    }

    building::CManager::~CManager() {
        ((void(*)(building::CManager * const))Addr::building::CManager::__CManager)(this);
    }
}
