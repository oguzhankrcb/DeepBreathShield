/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CFSM.hpp"
#include "../addr.hpp"
#include "CState.hpp"
namespace libm2 {

    void CFSM::BeginStateInitial() {
        ((void(*)(CFSM * const))Addr::CFSM::BeginStateInitial)(this);
    }

    CFSM::CFSM() {
        ((void(*)(CFSM * const))Addr::CFSM::CFSM)(this);
    }

    void CFSM::EndStateInitial() {
        ((void(*)(CFSM * const))Addr::CFSM::EndStateInitial)(this);
    }

    bool CFSM::GotoState(CState & NewState) {
        return ((bool(*)(CFSM * const, CState &))Addr::CFSM::GotoState__CState_)(this, NewState);
    }

    bool CFSM::IsState(CState & State) const {
        return ((bool(*)(const CFSM * const, CState &))Addr::CFSM::IsState__CState_)(this, State);
    }

    void CFSM::StateInitial() {
        ((void(*)(CFSM * const))Addr::CFSM::StateInitial)(this);
    }

    void CFSM::Update() {
        ((void(*)(CFSM * const))Addr::CFSM::Update)(this);
    }

    CFSM::~CFSM() {
        ((void(*)(CFSM * const))Addr::CFSM::__CFSM)(this);
    }
}
