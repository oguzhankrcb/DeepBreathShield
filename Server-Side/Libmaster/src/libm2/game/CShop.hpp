/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CSHOP_HPP
#define __LIBM2_GAME_CSHOP_HPP
#include "stdInclude.hpp"
#include "CGrid.hpp"
#include "SShopTable.hpp"
namespace libm2 {

    class CShop {
    public:

        class shop_item {
            DWORD vnum;
            long price;
            BYTE count;
            LPITEM pkItem;
            int itemid;
        public:
            shop_item(void);
        };
    private:
        DWORD m_dwVnum;
        DWORD m_dwNPCVnum;
        CGrid *m_pGrid;
        std::map<CHARACTER*, bool> m_map_guest;
        std::vector<CShop::shop_item, std::allocator<CShop::shop_item> > m_itemVector;
        LPCHARACTER m_pkPC;

    public:
        CShop(void);
        ~CShop();
        bool Create(DWORD, DWORD, TShopItemTable *);
        void SetShopItems(TShopItemTable *, BYTE);
        void SetPCShop(LPCHARACTER);
        bool IsPCShop(void);
        bool AddGuest(LPCHARACTER, DWORD, bool);
        void RemoveGuest(LPCHARACTER);
        int Buy(LPCHARACTER, BYTE);
        void BroadcastUpdateItem(BYTE);
        int GetNumberByVnum(DWORD);
        bool IsSellingItem(DWORD);
        DWORD GetVnum(void);
        DWORD GetNPCVnum(void);
    protected:
        void Broadcast(const void *, int);
    };
    typedef CShop * LPSHOP;
}
#endif // __LIBM2_GAME_CSHOP_HPP
