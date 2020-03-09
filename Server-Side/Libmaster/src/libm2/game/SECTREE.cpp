/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "SECTREE.hpp"
#include "../addr.hpp"
namespace libm2 {

    void SECTREE::BindAttribute(CAttribute * pkAttribute) {
        ((void(*)(SECTREE * const, CAttribute *))Addr::SECTREE::BindAttribute__CAttribute_)(this, pkAttribute);
    }

    void SECTREE::CloneAttribute(LPSECTREE tree) {
        ((void(*)(SECTREE * const, LPSECTREE))Addr::SECTREE::CloneAttribute__LPSECTREE)(this, tree);
    }

    void SECTREE::DecreasePC() {
        ((void(*)(SECTREE * const))Addr::SECTREE::DecreasePC)(this);
    }

    void SECTREE::Destroy() {
        ((void(*)(SECTREE * const))Addr::SECTREE::Destroy)(this);
    }

    DWORD SECTREE::GetAttribute(long x, long y) {
        return ((DWORD(*)(SECTREE * const, long, long))Addr::SECTREE::GetAttribute__long_long)(this, x, y);
    }

    int SECTREE::GetEventAttribute(long x, long y) {
        return ((int(*)(SECTREE * const, long, long))Addr::SECTREE::GetEventAttribute__long_long)(this, x, y);
    }

    SECTREEID SECTREE::GetID() {
        return ((SECTREEID(*)(SECTREE * const))Addr::SECTREE::GetID)(this);
    }

    void SECTREE::IncreasePC() {
        ((void(*)(SECTREE * const))Addr::SECTREE::IncreasePC)(this);
    }

    void SECTREE::Initialize() {
        ((void(*)(SECTREE * const))Addr::SECTREE::Initialize)(this);
    }

    bool SECTREE::InsertEntity(LPENTITY a1) {
        return ((bool(*)(SECTREE * const, LPENTITY))Addr::SECTREE::InsertEntity__LPENTITY)(this, a1);
    }

    bool SECTREE::IsAttr(long x, long y, DWORD dwFlag) {
        return ((bool(*)(SECTREE * const, long, long, DWORD))Addr::SECTREE::IsAttr__long_long_DWORD)(this, x, y, dwFlag);
    }

    void SECTREE::RemoveAttribute(DWORD x, DWORD y, DWORD dwAttr) {
        ((void(*)(SECTREE * const, DWORD, DWORD, DWORD))Addr::SECTREE::RemoveAttribute__DWORD_DWORD_DWORD)(this, x, y, dwAttr);
    }

    void SECTREE::RemoveEntity(LPENTITY pkEnt) {
        ((void(*)(SECTREE * const, LPENTITY))Addr::SECTREE::RemoveEntity__LPENTITY)(this, pkEnt);
    }

    SECTREE::SECTREE() {
        ((void(*)(SECTREE * const))Addr::SECTREE::SECTREE)(this);
    }

    void SECTREE::SetAttribute(DWORD x, DWORD y, DWORD dwAttr) {
        ((void(*)(SECTREE * const, DWORD, DWORD, DWORD))Addr::SECTREE::SetAttribute__DWORD_DWORD_DWORD)(this, x, y, dwAttr);
    }

    SECTREE::~SECTREE() {
        ((void(*)(SECTREE * const))Addr::SECTREE::__SECTREE)(this);
    }

    const ENTITY_SET & SECTREE::GetEntitySet(void) const {
        return this->m_set_entity;
    }
}