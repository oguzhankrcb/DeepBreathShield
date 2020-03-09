/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CGUILDWARRESERVEFORGAME_HPP
#define __LIBM2_GAME_CGUILDWARRESERVEFORGAME_HPP
#include "stdInclude.hpp"
#include "CGuild.hpp"
namespace libm2 {

    class CGuildWarReserveForGame {
        TGuildWarReserve data;
        std::map<std::string, std::pair<unsigned int, unsigned int >> mapBet;
    };
}

#endif // __LIBM2_GAME_CGUILDWARRESERVEFORGAME_HPP
