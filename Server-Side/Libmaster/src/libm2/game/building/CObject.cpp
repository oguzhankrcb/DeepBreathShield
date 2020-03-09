/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CObject.hpp"
#include "../../addr.hpp"
namespace libm2 {

    void building::CObject::ApplySpecialEffect() {
        ((void(*)(building::CObject * const))Addr::building::CObject::ApplySpecialEffect)(this);
    }

    void building::CObject::Destroy() {
        ((void(*)(building::CObject * const))Addr::building::CObject::Destroy)(this);
    }

    void building::CObject::EncodeInsertPacket(LPENTITY entity) {
        ((void(*)(building::CObject * const, LPENTITY))Addr::building::CObject::EncodeInsertPacket__LPENTITY)(this, entity);
    }

    void building::CObject::Reconstruct(DWORD dwVnum) {
        ((void(*)(building::CObject * const, DWORD))Addr::building::CObject::Reconstruct__DWORD)(this, dwVnum);
    }

    void building::CObject::RegenNPC() {
        ((void(*)(building::CObject * const))Addr::building::CObject::RegenNPC)(this);
    }

    void building::CObject::RemoveSpecialEffect() {
        ((void(*)(building::CObject * const))Addr::building::CObject::RemoveSpecialEffect)(this);
    }

    void building::CObject::Save() {
        ((void(*)(building::CObject * const))Addr::building::CObject::Save)(this);
    }

    void building::CObject::SetVID(DWORD dwVID) {
        ((void(*)(building::CObject * const, DWORD))Addr::building::CObject::SetVID__DWORD)(this, dwVID);
    }

    bool building::CObject::Show(long lMapIndex, long x, long y) {
        return ((bool(*)(building::CObject * const, long, long, long))Addr::building::CObject::Show__long_long_long)(this, lMapIndex, x, y);
    }

    building::CObject::~CObject() {
        ((void(*)(building::CObject * const))Addr::building::CObject::__CObject)(this);
    }
}
