/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_NPC_INFO_HPP
#define __LIBM2_GAME_NPC_INFO_HPP
namespace libm2 {

    class npc_info {
        BYTE bType;
        const char *name;
        long x;
        long y;
    public:
        npc_info(BYTE, const char *, long, long);
    };
}
#endif // __LIBM2_GAME_NPC_INFO_HPP
