/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CEntity.hpp"
#include "../addr.hpp"
namespace libm2 {

    CEntity::CEntity() {
        ((void(*)(CEntity * const))Addr::CEntity::CEntity)(this);
    }

    void CEntity::Destroy() {
        ((void(*)(CEntity * const))Addr::CEntity::Destroy)(this);
    }

    int CEntity::GetType() const {
        return ((int(*)(const CEntity * const))Addr::CEntity::GetType)(this);
    }

    void CEntity::Initialize(int type) {
        ((void(*)(CEntity * const, int))Addr::CEntity::Initialize__int)(this, type);
    }

    bool CEntity::IsType(int type) const {
        return ((bool(*)(const CEntity * const, int))Addr::CEntity::IsType__int)(this, type);
    }

    void CEntity::PacketAround(const void * data, int bytes, LPENTITY except) {
        ((void(*)(CEntity * const, const void *, int, LPENTITY))Addr::CEntity::PacketAround__const_void__int_LPENTITY)(this, data, bytes, except);
    }

    void CEntity::PacketView(const void * data, int bytes, LPENTITY except) {
        ((void(*)(CEntity * const, const void *, int, LPENTITY))Addr::CEntity::PacketView__const_void__int_LPENTITY)(this, data, bytes, except);
    }

    void CEntity::SetObserverMode(bool bFlag) {
        ((void(*)(CEntity * const, bool))Addr::CEntity::SetObserverMode__bool)(this, bFlag);
    }

    void CEntity::SetType(int type) {
        ((void(*)(CEntity * const, int))Addr::CEntity::SetType__int)(this, type);
    }

    void CEntity::UpdateSectree() {
        ((void(*)(CEntity * const))Addr::CEntity::UpdateSectree)(this);
    }

    void CEntity::ViewCleanup() {
        ((void(*)(CEntity * const))Addr::CEntity::ViewCleanup)(this);
    }

    void CEntity::ViewInsert(LPENTITY entity, bool recursive) {
        ((void(*)(CEntity * const, LPENTITY, bool))Addr::CEntity::ViewInsert__LPENTITY_bool)(this, entity, recursive);
    }

    void CEntity::ViewReencode() {
        ((void(*)(CEntity * const))Addr::CEntity::ViewReencode)(this);
    }

    void CEntity::ViewRemove(LPENTITY entity, bool recursive) {
        ((void(*)(CEntity * const, LPENTITY, bool))Addr::CEntity::ViewRemove__LPENTITY_bool)(this, entity, recursive);
    }

    CEntity::~CEntity() {
        ((void(*)(CEntity * const))Addr::CEntity::__CEntity)(this);
    }

    LPDESC CEntity::GetDesc(void) const {
        return m_lpDesc;
    }

    long CEntity::GetX() const {
        return this->m_pos.x;
    };

    long CEntity::GetY() const {
        return this->m_pos.y;
    };

    long CEntity::GetZ() const {
        return this->m_pos.z;
    };

    const PIXEL_POSITION& CEntity::GetXYZ() const {
        return this->m_pos;
    };

    long CEntity::GetMapIndex() const {
        return this->m_lMapIndex;
    }
}
