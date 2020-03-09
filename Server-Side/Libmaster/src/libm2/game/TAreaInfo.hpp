/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_TAREAINFO_HPP
#define __LIBM2_GAME_TAREAINFO_HPP

class TAreaInfo {
    int sx;
    int sy;
    int ex;
    int ey;
    int dir;
public:
    TAreaInfo(int, int, int, int, int);
};
typedef std::map<std::string, TAreaInfo> TAreaMap;
#endif // __LIBM2_GAME_TAREAINFO_HPP
