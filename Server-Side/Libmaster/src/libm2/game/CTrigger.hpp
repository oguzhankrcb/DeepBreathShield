/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CTRIGGER_HPP
#define __LIBM2_GAME_CTRIGGER_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CTrigger {
        BYTE bType;
        int (*pFunc)(LPCHARACTER, LPCHARACTER);
    public:
        CTrigger(void);
    };
}

#endif // __LIBM2_GAME_CTRIGGER_HPP

