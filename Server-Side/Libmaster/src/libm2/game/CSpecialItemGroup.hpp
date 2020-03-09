/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CSPECIALITEMGROUP_HPP
#define __LIBM2_GAME_CSPECIALITEMGROUP_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CSpecialItemGroup {

        class CSpecialItemInfo {
            DWORD vnum;
            int count;
            int rare;
        public:
            CSpecialItemInfo(DWORD, int, int);
        };
        DWORD m_dwVnum;
        BYTE m_bType;
        std::vector<int> m_vecProbs;
        std::vector<CSpecialItemInfo> m_vecItems;
    public:
        CSpecialItemGroup(DWORD, BYTE);
        void AddItem(DWORD, int, int, int);
        bool IsEmpty(void) const;
        int GetMultiIndex(std::vector<int> &) const;
        int GetOneIndex(void) const;
        int GetVnum(int) const;
        int GetCount(int) const;
        int GetRarePct(int) const;
        bool Contains(DWORD) const;
        DWORD GetAttrVnum(DWORD) const;
    };
}
#endif // __LIBM2_GAME_CSPECIALITEMGROUP_HPP
