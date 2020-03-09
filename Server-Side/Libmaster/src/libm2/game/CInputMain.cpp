/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputMain.hpp"
#include "../addr.hpp"
namespace libm2 {

    int CInputMain::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputMain * const, LPDESC, BYTE, const char *))Addr::CInputMain::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    void CInputMain::AnswerMakeGuild(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::AnswerMakeGuild__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::Attack(LPCHARACTER ch, const BYTE header, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const BYTE, const char *))Addr::CInputMain::Attack__LPCHARACTER_const_BYTE_const_char_)(this, ch, header, data);
    }

    int CInputMain::Chat(LPCHARACTER ch, const char * data, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::Chat__LPCHARACTER_const_char__size_t)(this, ch, data, uiBytes);
    }

    void CInputMain::Exchange(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Exchange__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::Fishing(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Fishing__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::FlyTarget(LPCHARACTER ch, const char * pcData, BYTE bHeader) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *, BYTE))Addr::CInputMain::FlyTarget__LPCHARACTER_const_char__BYTE)(this, ch, pcData, bHeader);
    }

    BYTE CInputMain::GetType() {
        return ((BYTE(*)(CInputMain * const))Addr::CInputMain::GetType)(this);
    }

    int CInputMain::Guild(LPCHARACTER ch, const char * data, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::Guild__LPCHARACTER_const_char__size_t)(this, ch, data, uiBytes);
    }

    void CInputMain::Hack(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Hack__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::ItemDrop(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemDrop__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::ItemDrop2(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemDrop2__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::ItemGive(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemGive__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::ItemMove(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemMove__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::ItemPickup(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemPickup__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::ItemToItem(LPCHARACTER ch, const char * pcData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemToItem__LPCHARACTER_const_char_)(this, ch, pcData);
    }

    void CInputMain::ItemUse(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::ItemUse__LPCHARACTER_const_char_)(this, ch, data);
    }

    int CInputMain::Messenger(LPCHARACTER ch, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::Messenger__LPCHARACTER_const_char__size_t)(this, ch, c_pData, uiBytes);
    }

    void CInputMain::Move(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Move__LPCHARACTER_const_char_)(this, ch, data);
    }

    int CInputMain::MyShop(LPCHARACTER ch, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::MyShop__LPCHARACTER_const_char__size_t)(this, ch, c_pData, uiBytes);
    }

    void CInputMain::OnClick(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::OnClick__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::PartyInvite(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::PartyInvite__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::PartyInviteAnswer(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::PartyInviteAnswer__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::PartyParameter(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::PartyParameter__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::PartyRemove(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::PartyRemove__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::PartySetState(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::PartySetState__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::PartyUseSkill(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::PartyUseSkill__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::Position(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Position__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::QuestConfirm(LPCHARACTER ch, const void * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const void *))Addr::CInputMain::QuestConfirm__LPCHARACTER_const_void_)(this, ch, c_pData);
    }

    void CInputMain::QuestInputString(LPCHARACTER ch, const void * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const void *))Addr::CInputMain::QuestInputString__LPCHARACTER_const_void_)(this, ch, c_pData);
    }

    void CInputMain::QuickslotAdd(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::QuickslotAdd__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::QuickslotDelete(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::QuickslotDelete__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::QuickslotSwap(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::QuickslotSwap__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::Refine(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Refine__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::SafeboxCheckin(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::SafeboxCheckin__LPCHARACTER_const_char_)(this, ch, c_pData);
    }

    void CInputMain::SafeboxCheckout(LPCHARACTER ch, const char * c_pData, bool bMall) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *, bool))Addr::CInputMain::SafeboxCheckout__LPCHARACTER_const_char__bool)(this, ch, c_pData, bMall);
    }

    void CInputMain::SafeboxItemMove(LPCHARACTER ch, const char * data) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::SafeboxItemMove__LPCHARACTER_const_char_)(this, ch, data);
    }

    void CInputMain::ScriptAnswer(LPCHARACTER ch, const void * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const void *))Addr::CInputMain::ScriptAnswer__LPCHARACTER_const_void_)(this, ch, c_pData);
    }

    void CInputMain::ScriptButton(LPCHARACTER ch, const void * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const void *))Addr::CInputMain::ScriptButton__LPCHARACTER_const_void_)(this, ch, c_pData);
    }

    void CInputMain::ScriptSelectItem(LPCHARACTER ch, const void * c_pData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const void *))Addr::CInputMain::ScriptSelectItem__LPCHARACTER_const_void_)(this, ch, c_pData);
    }

    int CInputMain::Shop(LPCHARACTER ch, const char * data, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::Shop__LPCHARACTER_const_char__size_t)(this, ch, data, uiBytes);
    }

    int CInputMain::SyncPosition(LPCHARACTER ch, const char * c_pcData, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::SyncPosition__LPCHARACTER_const_char__size_t)(this, ch, c_pcData, uiBytes);
    }

    void CInputMain::Target(LPCHARACTER ch, const char * pcData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Target__LPCHARACTER_const_char_)(this, ch, pcData);
    }

    void CInputMain::UseSkill(LPCHARACTER ch, const char * pcData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::UseSkill__LPCHARACTER_const_char_)(this, ch, pcData);
    }

    void CInputMain::Warp(LPCHARACTER ch, const char * pcData) {
        ((void(*)(CInputMain * const, LPCHARACTER, const char *))Addr::CInputMain::Warp__LPCHARACTER_const_char_)(this, ch, pcData);
    }

    int CInputMain::Whisper(LPCHARACTER ch, const char * data, size_t uiBytes) {
        return ((int(*)(CInputMain * const, LPCHARACTER, const char *, size_t))Addr::CInputMain::Whisper__LPCHARACTER_const_char__size_t)(this, ch, data, uiBytes);
    }

}
