/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CPetSystem.hpp"
#include "../addr.hpp"
namespace libm2 {

    size_t CPetSystem::CountSummoned() const {
        return ((size_t(*)(const CPetSystem * const))Addr::CPetSystem::CountSummoned)(this);
    }

    void CPetSystem::DeletePet(CPetActor * petActor) {
        ((void(*)(CPetSystem * const, CPetActor *))Addr::CPetSystem::DeletePet__CPetActor_)(this, petActor);
    }

    void CPetSystem::DeletePet(DWORD mobVnum) {
        ((void(*)(CPetSystem * const, DWORD))Addr::CPetSystem::DeletePet__DWORD)(this, mobVnum);
    }

    void CPetSystem::Destroy() {
        ((void(*)(CPetSystem * const))Addr::CPetSystem::Destroy)(this);
    }

    CPetActor * CPetSystem::GetByVID(DWORD vid) const {
        return ((CPetActor * (*)(const CPetSystem * const, DWORD))Addr::CPetSystem::GetByVID__DWORD)(this, vid);
    }

    CPetActor * CPetSystem::GetByVnum(DWORD vnum) const {
        return ((CPetActor * (*)(const CPetSystem * const, DWORD))Addr::CPetSystem::GetByVnum__DWORD)(this, vnum);
    }

    void CPetSystem::RefreshBuff() {
        ((void(*)(CPetSystem * const))Addr::CPetSystem::RefreshBuff)(this);
    }

    CPetActor * CPetSystem::Summon(DWORD mobVnum, LPITEM pSummonItem, const char * petName, bool bSpawnFar, DWORD options) {
        return ((CPetActor * (*)(CPetSystem * const, DWORD, LPITEM, const char *, bool, DWORD))Addr::CPetSystem::Summon__DWORD_LPITEM_const_char__bool_DWORD)(this, mobVnum, pSummonItem, petName, bSpawnFar, options);
    }

    void CPetSystem::Unsummon(DWORD vnum, bool bDeleteFromList) {
        ((void(*)(CPetSystem * const, DWORD, bool))Addr::CPetSystem::Unsummon__DWORD_bool)(this, vnum, bDeleteFromList);
    }

    bool CPetSystem::Update(DWORD deltaTime) {
        return ((bool(*)(CPetSystem * const, DWORD))Addr::CPetSystem::Update__DWORD)(this, deltaTime);
    }
}