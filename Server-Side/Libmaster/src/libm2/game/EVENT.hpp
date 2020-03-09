/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_EVENT_HPP
#define __LIBM2_GAME_EVENT_HPP
#include "stdInclude.hpp"
namespace libm2 {
    class event;
    typedef event* LPEVENT;
    void intrusive_ptr_add_ref(event *); //0x81107C0
    void intrusive_ptr_release(event *); //0x81108B0

    typedef long (*TEVENTFUNC)(LPEVENT);

    struct TQueueElement {
        LPEVENT pvData;
        int iKey;
        bool bCancel;
    };

    class event_info_data {
    public:
        event_info_data();
        ~event_info_data();
    };

    class event {
        TEVENTFUNC func;
        event_info_data *info;
        TQueueElement *q_el;
        char is_force_to_end;
        char is_processing;
        size_t ref_count;
    public:
        event();
        ~event();
    } typedef EVENT, * LPEVENT;
    LPEVENT event_create_ex(TEVENTFUNC func, event_info_data * info, long when);
}

#endif // __LIBM2_GAME_EVENT_HPP
