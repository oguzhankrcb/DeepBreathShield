/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CMOBINSTANCE_HPP
#define __LIBM2_GAME_CMOBINSTANCE_HPP
#include "stdInclude.hpp"
#include "PIXEL_POSITION.hpp"
namespace libm2 {

    class CMobInstance {
        PIXEL_POSITION m_posLastAttacked;
        DWORD m_dwLastAttackedTime;
        DWORD m_dwLastWarpTime;
        bool m_IsBerserk;
        bool m_IsGodSpeed;
        bool m_IsRevive;
    public:
        CMobInstance(void);
    };
}
#endif // __LIBM2_GAME_CMOBINSTANCE_HPP
