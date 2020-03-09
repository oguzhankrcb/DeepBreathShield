/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CSPECIALATTRGROUP_HPP
#define __LIBM2_GAME_CSPECIALATTRGROUP_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CSpecialAttrGroup {

        class CSpecialAttrInfo {
            DWORD apply_type;
            DWORD apply_value;
        public:
            CSpecialAttrInfo(DWORD, DWORD);
        };
        DWORD m_dwVnum;
        std::string m_stEffectFileName;
        std::vector<CSpecialAttrInfo> m_vecAttrs;
    public:
        CSpecialAttrGroup(DWORD);
    };
}
#endif // __LIBM2_GAME_CSPECIALATTRGROUP_HPP
