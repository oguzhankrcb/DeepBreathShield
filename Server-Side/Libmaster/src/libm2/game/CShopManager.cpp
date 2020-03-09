/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CShopManager.hpp"
namespace libm2 {

    void CShopManager::Buy(LPCHARACTER ch, BYTE pos) {
        ((void(*)(CShopManager * const, LPCHARACTER, BYTE))Addr::CShopManager::Buy__LPCHARACTER_BYTE)(this, ch, pos);
    }

    CShopManager::CShopManager() {
        ((void(*)(CShopManager * const))Addr::CShopManager::CShopManager)(this);
    }

    LPSHOP CShopManager::CreatePCShop(LPCHARACTER ch, TShopItemTable * pTable, BYTE bItemCount) {
        return ((LPSHOP(*)(CShopManager * const, LPCHARACTER, TShopItemTable *, BYTE))Addr::CShopManager::CreatePCShop__LPCHARACTER_TShopItemTable__BYTE)(this, ch, pTable, bItemCount);
    }

    void CShopManager::Destroy() {
        ((void(*)(CShopManager * const))Addr::CShopManager::Destroy)(this);
    }

    void CShopManager::DestroyPCShop(LPCHARACTER ch) {
        ((void(*)(CShopManager * const, LPCHARACTER))Addr::CShopManager::DestroyPCShop__LPCHARACTER)(this, ch);
    }

    LPSHOP CShopManager::FindPCShop(DWORD dwVID) {
        return ((LPSHOP(*)(CShopManager * const, DWORD))Addr::CShopManager::FindPCShop__DWORD)(this, dwVID);
    }

    LPSHOP CShopManager::Get(DWORD dwVnum) {
        return ((LPSHOP(*)(CShopManager * const, DWORD))Addr::CShopManager::Get__DWORD)(this, dwVnum);
    }

    LPSHOP CShopManager::GetByNPCVnum(DWORD dwVnum) {
        return ((LPSHOP(*)(CShopManager * const, DWORD))Addr::CShopManager::GetByNPCVnum__DWORD)(this, dwVnum);
    }

    bool CShopManager::Initialize(TShopTable * table, int size) {
        return ((bool(*)(CShopManager * const, TShopTable *, int))Addr::CShopManager::Initialize__TShopTable__int)(this, table, size);
    }

    void CShopManager::Sell(LPCHARACTER ch, BYTE bCell, BYTE bCount) {
        ((void(*)(CShopManager * const, LPCHARACTER, BYTE, BYTE))Addr::CShopManager::Sell__LPCHARACTER_BYTE_BYTE)(this, ch, bCell, bCount);
    }

    bool CShopManager::StartShopping(LPCHARACTER pkChr, LPCHARACTER pkChrShopKeeper, int iShopVnum) {
        return ((bool(*)(CShopManager * const, LPCHARACTER, LPCHARACTER, int))Addr::CShopManager::StartShopping__LPCHARACTER_LPCHARACTER_int)(this, pkChr, pkChrShopKeeper, iShopVnum);
    }

    void CShopManager::StopShopping(LPCHARACTER ch) {
        ((void(*)(CShopManager * const, LPCHARACTER))Addr::CShopManager::StopShopping__LPCHARACTER)(this, ch);
    }
}
