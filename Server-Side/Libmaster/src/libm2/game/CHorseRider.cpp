/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHorseRider.hpp"
#include "../addr.hpp"

namespace libm2 {

    CHorseRider::CHorseRider() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::CHorseRider)(this);
    }

    void CHorseRider::CheckHorseHealthDropTime(bool bSend) {
        ((void(*)(CHorseRider * const, bool))Addr::CHorseRider::CheckHorseHealthDropTime__bool)(this, bSend);
    }

    void CHorseRider::ClearHorseInfo() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::ClearHorseInfo)(this);
    }

    void CHorseRider::Destroy() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::Destroy)(this);
    }

    void CHorseRider::EnterHorse() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::EnterHorse)(this);
    }

    void CHorseRider::FeedHorse() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::FeedHorse)(this);
    }

    BYTE CHorseRider::GetHorseGrade() {
        return ((BYTE(*)(CHorseRider * const))Addr::CHorseRider::GetHorseGrade)(this);
    }

    short CHorseRider::GetHorseMaxHealth() {
        return ((short(*)(CHorseRider * const))Addr::CHorseRider::GetHorseMaxHealth)(this);
    }

    short CHorseRider::GetHorseMaxStamina() {
        return ((short(*)(CHorseRider * const))Addr::CHorseRider::GetHorseMaxStamina)(this);
    }

    DWORD CHorseRider::GetMyHorseVnum() const {
        return ((DWORD(*)(const CHorseRider * const))Addr::CHorseRider::GetMyHorseVnum)(this);
    }

    void CHorseRider::HorseDie() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::HorseDie)(this);
    }

    void CHorseRider::Initialize() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::Initialize)(this);
    }

    void CHorseRider::ResetHorseHealthDropTime() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::ResetHorseHealthDropTime)(this);
    }

    bool CHorseRider::ReviveHorse() {
        return ((bool(*)(CHorseRider * const))Addr::CHorseRider::ReviveHorse)(this);
    }

    void CHorseRider::SendHorseInfo() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::SendHorseInfo)(this);
    }

    void CHorseRider::SetHorseData(const THorseInfo & crInfo) {
        ((void(*)(CHorseRider * const, const THorseInfo &))Addr::CHorseRider::SetHorseData__const_THorseInfo_)(this, crInfo);
    }

    void CHorseRider::SetHorseLevel(int iLevel) {
        ((void(*)(CHorseRider * const, int))Addr::CHorseRider::SetHorseLevel__int)(this, iLevel);
    }

    bool CHorseRider::StartRiding() {
        return ((bool(*)(CHorseRider * const))Addr::CHorseRider::StartRiding)(this);
    }

    void CHorseRider::StartStaminaConsumeEvent() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::StartStaminaConsumeEvent)(this);
    }

    void CHorseRider::StartStaminaRegenEvent() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::StartStaminaRegenEvent)(this);
    }

    bool CHorseRider::StopRiding() {
        return ((bool(*)(CHorseRider * const))Addr::CHorseRider::StopRiding)(this);
    }

    void CHorseRider::UpdateHorseDataByLogoff(DWORD dwLogoffTime) {
        ((void(*)(CHorseRider * const, DWORD))Addr::CHorseRider::UpdateHorseDataByLogoff__DWORD)(this, dwLogoffTime);
    }

    void CHorseRider::UpdateHorseHealth(int iHealth, bool bSend) {
        ((void(*)(CHorseRider * const, int, bool))Addr::CHorseRider::UpdateHorseHealth__int_bool)(this, iHealth, bSend);
    }

    void CHorseRider::UpdateHorseStamina(int iStamina, bool bSend) {
        ((void(*)(CHorseRider * const, int, bool))Addr::CHorseRider::UpdateHorseStamina__int_bool)(this, iStamina, bSend);
    }

    void CHorseRider::UpdateRideTime(int interval) {
        ((void(*)(CHorseRider * const, int))Addr::CHorseRider::UpdateRideTime__int)(this, interval);
    }

    CHorseRider::~CHorseRider() {
        ((void(*)(CHorseRider * const))Addr::CHorseRider::__CHorseRider)(this);
    }

    BYTE CHorseRider::GetHorseLevel(void) const {
        return m_Horse.bLevel;
    }
}
