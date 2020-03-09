/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "ITEM_MANAGER.hpp"
#include "../addr.hpp"
namespace libm2 {

    bool ITEM_MANAGER::ConvSpecialDropItemFile() {
        return ((bool(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::ConvSpecialDropItemFile)(this);
    }

    bool ITEM_MANAGER::CreateDropItem(LPCHARACTER pkChr, LPCHARACTER pkKiller, std::vector<CItem*, std::allocator<CItem*> > & vec_item) {
        return ((bool(*)(ITEM_MANAGER * const, LPCHARACTER, LPCHARACTER, std::vector<CItem*, std::allocator<CItem*> > &))Addr::ITEM_MANAGER::CreateDropItem__LPCHARACTER_LPCHARACTER_std_vector_CItem_std_allocator_CItem_)(this, pkChr, pkKiller, vec_item);
    }

    LPITEM ITEM_MANAGER::CreateItem(DWORD vnum, DWORD count, DWORD id, bool bTryMagic, int iRarePct, bool bSkipSave) {
        return ((LPITEM(*)(ITEM_MANAGER * const, DWORD, DWORD, DWORD, bool, int, bool))Addr::ITEM_MANAGER::CreateItem__DWORD_DWORD_DWORD_bool_int_bool)(this, vnum, count, id, bTryMagic, iRarePct, bSkipSave);
    }

    void ITEM_MANAGER::CreateQuestDropItem(LPCHARACTER pkChr, LPCHARACTER pkKiller, std::vector<CItem*, std::allocator<CItem*> > & vec_item, int iDeltaPercent, int iRandRange) {
        ((void(*)(ITEM_MANAGER * const, LPCHARACTER, LPCHARACTER, std::vector<CItem*, std::allocator<CItem*> > &, int, int))Addr::ITEM_MANAGER::CreateQuestDropItem__LPCHARACTER_LPCHARACTER_std_vector_CItem_std_allocator_CItem__int_int)(this, pkChr, pkKiller, vec_item, iDeltaPercent, iRandRange);
    }

    void ITEM_MANAGER::DelayedSave(LPITEM item) {
        ((void(*)(ITEM_MANAGER * const, LPITEM))Addr::ITEM_MANAGER::DelayedSave__LPITEM)(this, item);
    }

    void ITEM_MANAGER::Destroy() {
        ((void(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::Destroy)(this);
    }

    void ITEM_MANAGER::DestroyItem(LPITEM item) {
        ((void(*)(ITEM_MANAGER * const, LPITEM))Addr::ITEM_MANAGER::DestroyItem__LPITEM)(this, item);
    }

    LPITEM ITEM_MANAGER::Find(DWORD id) {
        return ((LPITEM(*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::Find__DWORD)(this, id);
    }

    LPITEM ITEM_MANAGER::FindByVID(DWORD vid) {
        return ((LPITEM(*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::FindByVID__DWORD)(this, vid);
    }

    void ITEM_MANAGER::FlushDelayedSave(LPITEM item) {
        ((void(*)(ITEM_MANAGER * const, LPITEM))Addr::ITEM_MANAGER::FlushDelayedSave__LPITEM)(this, item);
    }

    DWORD ITEM_MANAGER::GetMaskVnum(DWORD dwVnum) {
        return ((DWORD(*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::GetMaskVnum__DWORD)(this, dwVnum);
    }

    DWORD ITEM_MANAGER::GetNewID() {
        return ((DWORD(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::GetNewID)(this);
    }

    DWORD ITEM_MANAGER::GetRefineFromVnum(DWORD dwVnum) {
        return ((DWORD(*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::GetRefineFromVnum__DWORD)(this, dwVnum);
    }

    const CSpecialAttrGroup * ITEM_MANAGER::GetSpecialAttrGroup(DWORD dwVnum) {
        return ((const CSpecialAttrGroup * (*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::GetSpecialAttrGroup__DWORD)(this, dwVnum);
    }

    const CSpecialItemGroup * ITEM_MANAGER::GetSpecialItemGroup(DWORD dwVnum) {
        return ((const CSpecialItemGroup * (*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::GetSpecialItemGroup__DWORD)(this, dwVnum);
    }

    TItemTable * ITEM_MANAGER::GetTable(DWORD vnum) {
        return ((TItemTable * (*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::GetTable__DWORD)(this, vnum);
    }

    bool ITEM_MANAGER::GetVnum(const char * c_pszName, DWORD & r_dwVnum) {
        return ((bool(*)(ITEM_MANAGER * const, const char *, DWORD &))Addr::ITEM_MANAGER::GetVnum__const_char__DWORD_)(this, c_pszName, r_dwVnum);
    }

    bool ITEM_MANAGER::GetVnumByOriginalName(const char * c_pszName, DWORD & r_dwVnum) {
        return ((bool(*)(ITEM_MANAGER * const, const char *, DWORD &))Addr::ITEM_MANAGER::GetVnumByOriginalName__const_char__DWORD_)(this, c_pszName, r_dwVnum);
    }

    void ITEM_MANAGER::GracefulShutdown() {
        ((void(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::GracefulShutdown)(this);
    }

    ITEM_MANAGER::ITEM_MANAGER() {
        ((void(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::ITEM_MANAGER)(this);
    }

    bool ITEM_MANAGER::Initialize(TItemTable * table, int size) {
        return ((bool(*)(ITEM_MANAGER * const, TItemTable *, int))Addr::ITEM_MANAGER::Initialize__TItemTable__int)(this, table, size);
    }

    bool ITEM_MANAGER::ReadCommonDropItemFile(const char * c_pszFileName) {
        return ((bool(*)(ITEM_MANAGER * const, const char *))Addr::ITEM_MANAGER::ReadCommonDropItemFile__const_char_)(this, c_pszFileName);
    }

    bool ITEM_MANAGER::ReadDropItemGroup(const char * c_pszFileName) {
        return ((bool(*)(ITEM_MANAGER * const, const char *))Addr::ITEM_MANAGER::ReadDropItemGroup__const_char_)(this, c_pszFileName);
    }

    bool ITEM_MANAGER::ReadEtcDropItemFile(const char * c_pszFileName) {
        return ((bool(*)(ITEM_MANAGER * const, const char *))Addr::ITEM_MANAGER::ReadEtcDropItemFile__const_char_)(this, c_pszFileName);
    }

    bool ITEM_MANAGER::ReadItemVnumMaskTable(const char * c_pszFileName) {
        return ((bool(*)(ITEM_MANAGER * const, const char *))Addr::ITEM_MANAGER::ReadItemVnumMaskTable__const_char_)(this, c_pszFileName);
    }

    bool ITEM_MANAGER::ReadMonsterDropItemGroup(const char * c_pszFileName) {
        return ((bool(*)(ITEM_MANAGER * const, const char *))Addr::ITEM_MANAGER::ReadMonsterDropItemGroup__const_char_)(this, c_pszFileName);
    }

    bool ITEM_MANAGER::ReadSpecialDropItemFile(const char * c_pszFileName) {
        return ((bool(*)(ITEM_MANAGER * const, const char *))Addr::ITEM_MANAGER::ReadSpecialDropItemFile__const_char_)(this, c_pszFileName);
    }

    int ITEM_MANAGER::RealNumber(DWORD a1) {
        return ((int(*)(ITEM_MANAGER * const, DWORD))Addr::ITEM_MANAGER::RealNumber__DWORD)(this, a1);
    }

    void ITEM_MANAGER::RemoveItem(LPITEM item, const char * c_pszReason) {
        ((void(*)(ITEM_MANAGER * const, LPITEM, const char *))Addr::ITEM_MANAGER::RemoveItem__LPITEM_const_char_)(this, item, c_pszReason);
    }

    void ITEM_MANAGER::SaveSingleItem(LPITEM item) {
        ((void(*)(ITEM_MANAGER * const, LPITEM))Addr::ITEM_MANAGER::SaveSingleItem__LPITEM)(this, item);
    }

    bool ITEM_MANAGER::SetMaxItemID(TItemIDRangeTable range) {
        return ((bool(*)(ITEM_MANAGER * const, TItemIDRangeTable))Addr::ITEM_MANAGER::SetMaxItemID__TItemIDRangeTable)(this, range);
    }

    bool ITEM_MANAGER::SetMaxSpareItemID(TItemIDRangeTable range) {
        return ((bool(*)(ITEM_MANAGER * const, TItemIDRangeTable))Addr::ITEM_MANAGER::SetMaxSpareItemID__TItemIDRangeTable)(this, range);
    }

    void ITEM_MANAGER::Update() {
        ((void(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::Update)(this);
    }

    ITEM_MANAGER::~ITEM_MANAGER() {
        ((void(*)(ITEM_MANAGER * const))Addr::ITEM_MANAGER::__ITEM_MANAGER)(this);
    }


}
