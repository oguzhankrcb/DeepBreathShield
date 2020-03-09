/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CLand.hpp"
#include "../../addr.hpp"
namespace libm2 {

    void building::CLand::ClearLand() {
        ((void(*)(building::CLand * const))Addr::building::CLand::ClearLand)(this);
    }

    void building::CLand::DeleteObject(DWORD dwID) {
        ((void(*)(building::CLand * const, DWORD))Addr::building::CLand::DeleteObject__DWORD)(this, dwID);
    }

    void building::CLand::Destroy() {
        ((void(*)(building::CLand * const))Addr::building::CLand::Destroy)(this);
    }

    void building::CLand::DrawWall(DWORD dwVnum, long nMapIndex, long & x, long & y, char length, float zRot) {
        ((void(*)(building::CLand * const, DWORD, long, long &, long &, char, float))Addr::building::CLand::DrawWall__DWORD_long_long__long__char_float)(this, dwVnum, nMapIndex, x, y, length, zRot);
    }

    building::LPOBJECT building::CLand::FindObject(DWORD dwID) {
        return ((building::LPOBJECT(*)(building::CLand * const, DWORD))Addr::building::CLand::FindObject__DWORD)(this, dwID);
    }

    building::LPOBJECT building::CLand::FindObjectByGroup(DWORD dwGroupVnum) {
        return ((building::LPOBJECT(*)(building::CLand * const, DWORD))Addr::building::CLand::FindObjectByGroup__DWORD)(this, dwGroupVnum);
    }

    building::LPOBJECT building::CLand::FindObjectByNPC(LPCHARACTER npc) {
        return ((building::LPOBJECT(*)(building::CLand * const, LPCHARACTER))Addr::building::CLand::FindObjectByNPC__LPCHARACTER)(this, npc);
    }

    building::LPOBJECT building::CLand::FindObjectByVID(DWORD dwVID) {
        return ((building::LPOBJECT(*)(building::CLand * const, DWORD))Addr::building::CLand::FindObjectByVID__DWORD)(this, dwVID);
    }

    building::LPOBJECT building::CLand::FindObjectByVnum(DWORD dwVnum) {
        return ((building::LPOBJECT(*)(building::CLand * const, DWORD))Addr::building::CLand::FindObjectByVnum__DWORD)(this, dwVnum);
    }

    const building::TLand & building::CLand::GetData() {
        return ((const building::TLand & (*)(building::CLand * const))Addr::building::CLand::GetData)(this);
    }

    void building::CLand::InsertObject(building::LPOBJECT pkObj) {
        ((void(*)(building::CLand * const, building::LPOBJECT))Addr::building::CLand::InsertObject__building_CLand_LPOBJECT)(this, pkObj);
    }

    void building::CLand::PutData(const building::TLand * data) {
        ((void(*)(building::CLand * const, const building::TLand *))Addr::building::CLand::PutData__const_building_CLand_TLand_)(this, data);
    }

    bool building::CLand::RequestCreateObject(DWORD dwVnum, long lMapIndex, long x, long y, float xRot, float yRot, float zRot, bool checkAnother) {
        return ((bool(*)(building::CLand * const, DWORD, long, long, long, float, float, float, bool))Addr::building::CLand::RequestCreateObject__DWORD_long_long_long_float_float_float_bool)(this, dwVnum, lMapIndex, x, y, xRot, yRot, zRot, checkAnother);
    }

    bool building::CLand::RequestCreateWall(long nMapIndex, float rot) {
        return ((bool(*)(building::CLand * const, long, float))Addr::building::CLand::RequestCreateWall__long_float)(this, nMapIndex, rot);
    }

    bool building::CLand::RequestCreateWallBlocks(DWORD dwVnum, long nMapIndex, char wallSize, bool doorEast, bool doorWest, bool doorSouth, bool doorNorth) {
        return ((bool(*)(building::CLand * const, DWORD, long, char, bool, bool, bool, bool))Addr::building::CLand::RequestCreateWallBlocks__DWORD_long_char_bool_bool_bool_bool)(this, dwVnum, nMapIndex, wallSize, doorEast, doorWest, doorSouth, doorNorth);
    }

    void building::CLand::RequestDeleteObject(DWORD dwID) {
        ((void(*)(building::CLand * const, DWORD))Addr::building::CLand::RequestDeleteObject__DWORD)(this, dwID);
    }

    void building::CLand::RequestDeleteObjectByVID(DWORD dwVID) {
        ((void(*)(building::CLand * const, DWORD))Addr::building::CLand::RequestDeleteObjectByVID__DWORD)(this, dwVID);
    }

    void building::CLand::RequestDeleteWall() {
        ((void(*)(building::CLand * const))Addr::building::CLand::RequestDeleteWall)(this);
    }

    void building::CLand::RequestDeleteWallBlocks(DWORD dwID) {
        ((void(*)(building::CLand * const, DWORD))Addr::building::CLand::RequestDeleteWallBlocks__DWORD)(this, dwID);
    }

    void building::CLand::RequestUpdate(DWORD dwGuild) {
        ((void(*)(building::CLand * const, DWORD))Addr::building::CLand::RequestUpdate__DWORD)(this, dwGuild);
    }

    void building::CLand::SetOwner(DWORD dwGuild) {
        ((void(*)(building::CLand * const, DWORD))Addr::building::CLand::SetOwner__DWORD)(this, dwGuild);
    }

    building::CLand::~CLand() {
        ((void(*)(building::CLand * const))Addr::building::CLand::__CLand)(this);
    }
}
