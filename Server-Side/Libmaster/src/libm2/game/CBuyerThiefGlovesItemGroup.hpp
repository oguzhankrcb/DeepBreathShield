/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CBUYERTHIEFGLOVESITEMGROUP_HPP
#define __LIBM2_GAME_CBUYERTHIEFGLOVESITEMGROUP_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CBuyerThiefGlovesItemGroup {
    private:

        class SThiefGroupInfo {
            DWORD dwVnum;
            DWORD dwPct;
            int iCount;
        public:
            SThiefGroupInfo(DWORD, DWORD, int);
        };

        DWORD m_dwVnum;
        DWORD m_dwMobVnum;
        std::string m_stName;
        std::vector<SThiefGroupInfo> m_vec_items;

    public:
        CBuyerThiefGlovesItemGroup(DWORD, DWORD, const std::string &);
        const std::vector<SThiefGroupInfo> & GetVector(void);
        void AddItem(DWORD, DWORD, int);
    };

}
#endif // __LIBM2_GAME_CBUYERTHIEFGLOVESITEMGROUP_HPP
