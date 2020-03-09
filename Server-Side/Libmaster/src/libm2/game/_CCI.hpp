/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CCI_HPP
#define __LIBM2_GAME_CCI_HPP
#include "DESC.hpp"
namespace libm2 {

    struct _CCI {
        char szName[25];
        DWORD dwPID;
        BYTE bEmpire;
        BYTE bMapIndex;
        BYTE bChannel;
        LPDESC pkDesc;
    } typedef CCI;
}
#endif // __LIBM2_GAME_CCI_HPP
