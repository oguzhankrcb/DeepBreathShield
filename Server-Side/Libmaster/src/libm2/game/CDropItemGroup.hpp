/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CDROPITEMGROUP_HPP
#define __LIBM2_GAME_CDROPITEMGROUP_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CDropItemGroup {
    public:

        class SDropItemGroupInfo {
            DWORD dwVnum;
            DWORD dwPct;
            int iCount;
        public:
            SDropItemGroupInfo(DWORD, DWORD, int);
        };

    private:
        DWORD m_dwVnum;
        DWORD m_dwMobVnum;
        std::string m_stName;
        std::vector<SDropItemGroupInfo> m_vec_items;
    public:
        CDropItemGroup(DWORD, DWORD, const std::string &);
        const std::vector<SDropItemGroupInfo> & GetVector(void);
        void AddItem(DWORD, DWORD, int);
    };
}
#endif // __LIBM2_GAME_CDROPITEMGROUP_HPP
