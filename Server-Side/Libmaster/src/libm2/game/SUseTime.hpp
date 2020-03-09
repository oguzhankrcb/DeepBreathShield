/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SUSETIME_HPP
#define __LIBM2_GAME_SUSETIME_HPP
#include "stdInclude.hpp"
namespace libm2 {

    struct SUseTime {
        DWORD dwLoginKey;
        char szLogin[31];
        BYTE bBillType;
        DWORD dwUseSec;
        char szIP[16];
    };
}
#endif // __LIBM2_GAME_SUSETIME_HPP
