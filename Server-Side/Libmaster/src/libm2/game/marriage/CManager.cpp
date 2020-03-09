/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CManager.hpp"

namespace libm2 {

    void marriage::CManager::Add(DWORD dwPID1, DWORD dwPID2, time_t tMarryTime, const char * szName1, const char * szName2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD, time_t, const char *, const char *))Addr::marriage::CManager::Add__DWORD_DWORD_time_t_const_char__const_char_)(this, dwPID1, dwPID2, tMarryTime, szName1, szName2);
    }

    marriage::CManager::CManager() {
        ((void(*)(marriage::CManager * const))Addr::marriage::CManager::CManager)(this);
    }

    void marriage::CManager::Destroy() {
        ((void(*)(marriage::CManager * const))Addr::marriage::CManager::Destroy)(this);
    }

    marriage::TMarriage * marriage::CManager::Get(DWORD dwPlayerID) {
        return ((marriage::TMarriage * (*)(marriage::CManager * const, DWORD))Addr::marriage::CManager::Get__DWORD)(this, dwPlayerID);
    }

    bool marriage::CManager::Initialize() {
        return ((bool(*)(marriage::CManager * const))Addr::marriage::CManager::Initialize)(this);
    }

    bool marriage::CManager::IsEngaged(DWORD dwPlayerID) {
        return ((bool(*)(marriage::CManager * const, DWORD))Addr::marriage::CManager::IsEngaged__DWORD)(this, dwPlayerID);
    }

    bool marriage::CManager::IsEngagedOrMarried(DWORD dwPlayerID) {
        return ((bool(*)(marriage::CManager * const, DWORD))Addr::marriage::CManager::IsEngagedOrMarried__DWORD)(this, dwPlayerID);
    }

    bool marriage::CManager::IsMarriageUniqueItem(DWORD dwItemVnum) {
        return ((bool(*)(marriage::CManager * const, DWORD))Addr::marriage::CManager::IsMarriageUniqueItem__DWORD)(this, dwItemVnum);
    }

    bool marriage::CManager::IsMarried(DWORD dwPlayerID) {
        return ((bool(*)(marriage::CManager * const, DWORD))Addr::marriage::CManager::IsMarried__DWORD)(this, dwPlayerID);
    }

    void marriage::CManager::Login(LPCHARACTER ch) {
        ((void(*)(marriage::CManager * const, LPCHARACTER))Addr::marriage::CManager::Login__LPCHARACTER)(this, ch);
    }

    void marriage::CManager::Logout(LPCHARACTER ch) {
        ((void(*)(marriage::CManager * const, LPCHARACTER))Addr::marriage::CManager::Logout__LPCHARACTER)(this, ch);
    }

    void marriage::CManager::Logout(DWORD pid) {
        ((void(*)(marriage::CManager * const, DWORD))Addr::marriage::CManager::Logout__DWORD)(this, pid);
    }

    void marriage::CManager::Remove(DWORD dwPID1, DWORD dwPID2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD))Addr::marriage::CManager::Remove__DWORD_DWORD)(this, dwPID1, dwPID2);
    }

    void marriage::CManager::RequestAdd(DWORD dwPID1, DWORD dwPID2, const char * szName1, const char * szName2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD, const char *, const char *))Addr::marriage::CManager::RequestAdd__DWORD_DWORD_const_char__const_char_)(this, dwPID1, dwPID2, szName1, szName2);
    }

    void marriage::CManager::RequestEndWedding(DWORD dwPID1, DWORD dwPID2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD))Addr::marriage::CManager::RequestEndWedding__DWORD_DWORD)(this, dwPID1, dwPID2);
    }

    void marriage::CManager::RequestRemove(DWORD dwPID1, DWORD dwPID2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD))Addr::marriage::CManager::RequestRemove__DWORD_DWORD)(this, dwPID1, dwPID2);
    }

    void marriage::CManager::RequestUpdate(DWORD dwPID1, DWORD dwPID2, int iUpdatePoint, BYTE byMarried) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD, int, BYTE))Addr::marriage::CManager::RequestUpdate__DWORD_DWORD_int_BYTE)(this, dwPID1, dwPID2, iUpdatePoint, byMarried);
    }

    void marriage::CManager::Update(DWORD dwPID1, DWORD dwPID2, long lTotalPoint, BYTE byMarried) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD, long, BYTE))Addr::marriage::CManager::Update__DWORD_DWORD_long_BYTE)(this, dwPID1, dwPID2, lTotalPoint, byMarried);
    }

    void marriage::CManager::WeddingEnd(DWORD dwPID1, DWORD dwPID2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD))Addr::marriage::CManager::WeddingEnd__DWORD_DWORD)(this, dwPID1, dwPID2);
    }

    void marriage::CManager::WeddingReady(DWORD dwPID1, DWORD dwPID2, DWORD dwMapIndex) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD, DWORD))Addr::marriage::CManager::WeddingReady__DWORD_DWORD_DWORD)(this, dwPID1, dwPID2, dwMapIndex);
    }

    void marriage::CManager::WeddingStart(DWORD dwPID1, DWORD dwPID2) {
        ((void(*)(marriage::CManager * const, DWORD, DWORD))Addr::marriage::CManager::WeddingStart__DWORD_DWORD)(this, dwPID1, dwPID2);
    }

    marriage::CManager::~CManager() {
        ((void(*)(marriage::CManager * const))Addr::marriage::CManager::__CManager)(this);
    }
}
