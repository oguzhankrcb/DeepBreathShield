/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CINPUTCLOSE_HPP
#define __LIBM2_GAME_CINPUTCLOSE_HPP
#include "CInputProcessor.hpp"
namespace libm2 {

    class CInputClose : public CInputProcessor {
    public:
        virtual BYTE GetType(void);
    protected:
        virtual int Analyze(LPDESC, BYTE, const char *);
    };
}
#endif // __LIBM2_GAME_CINPUTCLOSE_HPP
