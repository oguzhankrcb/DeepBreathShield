/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_FORKEDSUNGZIMAPINFO_HPP
#define __LIBM2_GAME_FORKEDSUNGZIMAPINFO_HPP
#include <string>
namespace libm2 {

    struct ForkedSungziMapInfo {
        int m_iForkedSung;
        int m_iForkedSungziStartPosition[3][2];
        std::string m_stMapName;
        int m_iBossMobVnum;
    };

    struct ForkedPassMapInfo {
        int m_iForkedPass[3];
        int m_iForkedPassStartPosition[3][2];
        std::string m_stMapName[3];
    };

}
#endif