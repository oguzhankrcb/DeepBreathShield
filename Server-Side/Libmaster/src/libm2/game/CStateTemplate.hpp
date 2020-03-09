/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CSTATETEMPLATE_HPP
#define __LIBM2_GAME_CSTATETEMPLATE_HPP
namespace libm2 {

    template<class T>
    class CStateTemplate : public CState {
    protected:
        typedef void (T::*PFNSTATE)(void);
        T*m_pInstance;
        PFNSTATE m_pfnBeginState;
        PFNSTATE m_pfnState;
        PFNSTATE m_pfnEndState;
    public:

        CStateTemplate() : m_pInstance(0), m_pfnBeginState(0), m_pfnState(0), m_pfnEndState(0) {
        }

        void Set(T*pInstance, PFNSTATE pfnBeginState, PFNSTATE pfnState, PFNSTATE pfnEndState) {
            m_pInstance = pInstance;
            m_pfnBeginState = pfnBeginState;
            m_pfnState = pfnState;
            m_pfnEndState = pfnEndState;
        }

        virtual void ExecuteBeginState() {
            (m_pInstance->*m_pfnBeginState)();
        }

        virtual void ExecuteState() {
            (m_pInstance->*m_pfnState)();
        }

        virtual void ExecuteEndState() {
            (m_pInstance->*m_pfnEndState)();

        }
    };
}
#endif // __LIBM2_GAME_CSTATETEMPLATE_HPP
