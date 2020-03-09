/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_TAFFECTFLAG_HPP
#define __LIBM2_GAME_TAFFECTFLAG_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class TAffectFlag {
        DWORD bits[2];
    public:
        TAffectFlag();
        TAffectFlag(DWORD, DWORD);
        bool IsSet(int) const;
        void Set(int);
        void Reset(int);
        //TAffectFlag & operator=(const TAffectFlag &);
    };
}
#endif // __LIBM2_GAME_TAFFECTFLAG_HPP
