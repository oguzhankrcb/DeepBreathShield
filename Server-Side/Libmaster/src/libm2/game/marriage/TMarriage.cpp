/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "TMarriage.hpp"
#include "../../addr.hpp"
namespace libm2 {

    int marriage::TMarriage::GetBonus(DWORD dwItemVnum, bool bShare, LPCHARACTER me) {
        return ((int(*)(marriage::TMarriage * const, DWORD, bool, LPCHARACTER))Addr::marriage::TMarriage::GetBonus__DWORD_bool_LPCHARACTER)(this, dwItemVnum, bShare, me);
    }

    int marriage::TMarriage::GetMarriageGrade() {
        return ((int(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::GetMarriageGrade)(this);
    }

    int marriage::TMarriage::GetMarriagePoint() {
        return ((int(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::GetMarriagePoint)(this);
    }

    bool marriage::TMarriage::IsNear() {
        return ((bool(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::IsNear)(this);
    }

    void marriage::TMarriage::Login(LPCHARACTER ch) {
        ((void(*)(marriage::TMarriage * const, LPCHARACTER))Addr::marriage::TMarriage::Login__LPCHARACTER)(this, ch);
    }

    void marriage::TMarriage::Logout(DWORD pid) {
        ((void(*)(marriage::TMarriage * const, DWORD))Addr::marriage::TMarriage::Logout__DWORD)(this, pid);
    }

    void marriage::TMarriage::NearCheck() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::NearCheck)(this);
    }

    void marriage::TMarriage::RequestEndWedding() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::RequestEndWedding)(this);
    }

    void marriage::TMarriage::Save() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::Save)(this);
    }

    void marriage::TMarriage::SetMarried() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::SetMarried)(this);
    }

    void marriage::TMarriage::StartNearCheckEvent() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::StartNearCheckEvent)(this);
    }

    void marriage::TMarriage::StopNearCheckEvent() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::StopNearCheckEvent)(this);
    }

    void marriage::TMarriage::Update(DWORD point) {
        ((void(*)(marriage::TMarriage * const, DWORD))Addr::marriage::TMarriage::Update__DWORD)(this, point);
    }

    void marriage::TMarriage::WarpToWeddingMap(DWORD dwPID) {
        ((void(*)(marriage::TMarriage * const, DWORD))Addr::marriage::TMarriage::WarpToWeddingMap__DWORD)(this, dwPID);
    }

    marriage::TMarriage::~TMarriage() {
        ((void(*)(marriage::TMarriage * const))Addr::marriage::TMarriage::__TMarriage)(this);
    }

}
