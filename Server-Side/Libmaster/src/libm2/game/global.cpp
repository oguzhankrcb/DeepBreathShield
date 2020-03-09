/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "global.hpp"
#include "../addr.hpp"
namespace libm2 {
    const long* g_start_map = (long*) Addr::global::g_start_map;
    const int* g_start_position = (int*) Addr::global::g_start_position;
}