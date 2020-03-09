/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SSETTINGS_HPP
#define __LIBM2_GAME_SSETTINGS_HPP
#include "PIXEL_POSITION.hpp"
namespace libm2 {

    struct SSetting {
        int iIndex;
        int iCellScale;
        int iBaseX;
        int iBaseY;
        int iWidth;
        int iHeight;
        PIXEL_POSITION posSpawn;
    } typedef TMapSetting;
}
#endif // __LIBM2_GAME_SSETTINGS_HPP
