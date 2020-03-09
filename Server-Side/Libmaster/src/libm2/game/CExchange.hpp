/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CEXCHANGE_HPP
#define __LIBM2_GAME_CEXCHANGE_HPP
#include "stdInclude.hpp"
#include "CItem.hpp"
#include "CGrid.hpp"
namespace libm2 {

    class CExchange {
    private:
        CExchange *m_pCompany;
        LPCHARACTER m_pOwner;
        BYTE m_abItemPos[12];
        LPITEM m_apItems[12];
        BYTE m_abItemDisplayPos[12];
        bool m_bAccept;
        long m_lGold;
        CGrid *m_pGrid;

    public:
        CExchange(LPCHARACTER);
        ~CExchange();
        bool Accept(bool);
        void Cancel(void);
        bool AddGold(long);
        bool AddItem(BYTE, BYTE);
        bool RemoveItem(BYTE);
        LPCHARACTER GetOwner(void);
        CExchange * GetCompany(void);
        bool GetAcceptStatus(void);
        void SetCompany(CExchange *);
    private:
        bool Done(void);
        bool Check(int *);
        bool CheckSpace(void);
    };
}
#endif // __LIBM2_GAME_CEXCHANGE_HPP
