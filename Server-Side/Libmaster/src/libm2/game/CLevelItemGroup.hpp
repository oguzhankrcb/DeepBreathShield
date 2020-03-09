/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CLEVELITEMGROUP_HPP
#define __LIBM2_GAME_CLEVELITEMGROUP_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CLevelItemGroup {
    private:

        class SLevelItemGroupInfo {
            DWORD dwVNum;
            DWORD dwPct;
            int iCount;
        public:
            SLevelItemGroupInfo(DWORD, DWORD, int);
        };
        DWORD m_dwLevelLimit;
        std::string m_stName;
        std::vector<SLevelItemGroupInfo> m_vec_items;

    public:
        CLevelItemGroup(DWORD);
        DWORD GetLevelLimit(void);
        void AddItem(DWORD, DWORD, int);
        const std::vector<SLevelItemGroupInfo> & GetVector(void);
    };
}
#endif // __LIBM2_GAME_CLEVELITEMGROUP_HPP
