/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_REGEN_HPP
#define __LIBM2_GAME_REGEN_HPP
namespace libm2 {
    typedef struct regen* LPREGEN;

    struct regen {
        LPREGEN prev;
        LPREGEN next;
        long lMapIndex;
        int type;
        int sx;
        int sy;
        int ex;
        int ey;
        BYTE z_section;
        BYTE direction;
        DWORD time;
        int max_count;
        int count;
        int vnum;
        bool is_aggressive;
        LPEVENT event;
        size_t id;
    public:
        regen(void);
    };
}
#endif // __LIBM2_GAME_REGEN_HPP
