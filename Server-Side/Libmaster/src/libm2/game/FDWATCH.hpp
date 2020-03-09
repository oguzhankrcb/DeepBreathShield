/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_FDWATCH_HPP
#define __LIBM2_GAME_FDWATCH_HPP
namespace libm2 {
    typedef int KQUEUE;

    typedef struct kevent {
        uintptr_t ident;
        short filter;
        u_short flags;
        u_int fflags;
        intptr_t data;
        void *udata;
    } KEVENT, * LPKEVENT;

    typedef struct fdwatch {
        KQUEUE kq;
        int nfiles;
        LPKEVENT kqevents;
        int nkqevents;
        LPKEVENT kqrevents;
        int *fd_event_idx;
        void **fd_data;
        int *fd_rw;
    } FDWATCH, * LPFDWATCH;
}
#endif // __LIBM2_GAME_FDWATCH_HPP
