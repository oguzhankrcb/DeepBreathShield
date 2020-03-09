/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "TAffectFlag.hpp"
namespace libm2 {

    TAffectFlag::TAffectFlag() {
        bits[0] = 0;
        bits[1] = 0;
    }

    TAffectFlag::TAffectFlag(DWORD bit1, DWORD bit2) {
        bits[0] = bit1;
        bits[1] = bit2;
    }
}
