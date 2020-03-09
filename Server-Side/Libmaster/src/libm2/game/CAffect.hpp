/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CAFFECT_HPP
#define __LIBM2_GAME_CAFFECT_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CAffect {
        DWORD dwType;
        BYTE bApplyOn;
        long lApplyValue;
        DWORD dwFlag;
        long lDuration;
        long lSPCost;
    public:
        static CAffect * Acquire(void);
        static void Release(CAffect *);
    };
}

#endif // __LIBM2_GAME_CAFFECT_HPP
