/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CSEMAPHORE_HPP
#define __LIBM2_GAME_CSEMAPHORE_HPP
#include "stdInclude.hpp"
namespace libm2 {
    typedef void* sem_t;

    class CSemaphore {
    private:
        sem_t *m_hSem;

    public:
        CSemaphore(void);
        ~CSemaphore();
        int Initialize(void);
        void Clear(void);
        void Destroy(void);
        int Wait(void);
        int Release(int);
    };
}

#endif // __LIBM2_GAME_CSEMAPHORE_HPP
