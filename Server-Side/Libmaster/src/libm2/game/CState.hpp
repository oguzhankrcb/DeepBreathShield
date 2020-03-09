/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CSTATE_HPP
#define __LIBM2_GAME_CSTATE_HPP
namespace libm2 {

    class CState {
    public:
        ~CState();
        virtual void ExecuteBeginState(void) = 0;
        virtual void ExecuteState(void) = 0;
        virtual void ExecuteEndState(void) = 0;
    };
}
#endif // __LIBM2_GAME_CSTATE_HPP
