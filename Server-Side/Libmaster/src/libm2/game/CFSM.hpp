/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CFSM_HPP
#define __LIBM2_GAME_CFSM_HPP
#include "stdInclude.hpp"
#include "CState.hpp"
#include "CStateTemplate.hpp"
namespace libm2 {

    struct CFSM {
    protected:
        CState *m_pCurrentState;
        CState *m_pNewState;
        CStateTemplate<CFSM> m_stateInitial;
    public:
        CFSM();
        ~CFSM();
        virtual void Update(void);
        bool IsState(CState &) const;
        bool GotoState(CState &);
        virtual void BeginStateInitial(void);
        virtual void StateInitial(void);
        virtual void EndStateInitial(void);
    };
}
#endif // __LIBM2_GAME_CFSM_HPP
