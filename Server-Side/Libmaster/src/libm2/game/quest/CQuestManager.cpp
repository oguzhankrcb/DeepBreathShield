/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CQuestManager.hpp"
namespace libm2 {

    void quest::CQuestManager::AddLuaFunctionTable(const char * c_pszName, luaL_reg * preg) {
        ((void(*)(quest::CQuestManager * const, const char *, luaL_reg *))Addr::quest::CQuestManager::AddLuaFunctionTable__const_char__luaL_reg_)(this, c_pszName, preg);
    }

    void quest::CQuestManager::AddScript(const std::string & str) {
        ((void(*)(quest::CQuestManager * const, const std::string &))Addr::quest::CQuestManager::AddScript__const_std_locale_string_)(this, str);
    }

    void quest::CQuestManager::AddServerTimer(const std::string & name, DWORD arg, LPEVENT event) {
        ((void(*)(quest::CQuestManager * const, const std::string &, DWORD, LPEVENT))Addr::quest::CQuestManager::AddServerTimer__const_std_locale_string__DWORD_LPEVENT_)(this, name, arg, event);
    }

    void quest::CQuestManager::AttrIn(unsigned int pc, LPCHARACTER ch, int attr) {
        ((void(*)(quest::CQuestManager * const, unsigned int, LPCHARACTER, int))Addr::quest::CQuestManager::AttrIn__unsigned_int_LPCHARACTER_int)(this, pc, ch, attr);
    }

    void quest::CQuestManager::AttrOut(unsigned int pc, LPCHARACTER ch, int attr) {
        ((void(*)(quest::CQuestManager * const, unsigned int, LPCHARACTER, int))Addr::quest::CQuestManager::AttrOut__unsigned_int_LPCHARACTER_int)(this, pc, ch, attr);
    }

    void quest::CQuestManager::BroadcastEventFlagOnLogin(LPCHARACTER ch) {
        ((void(*)(quest::CQuestManager * const, LPCHARACTER))Addr::quest::CQuestManager::BroadcastEventFlagOnLogin__LPCHARACTER)(this, ch);
    }

    void quest::CQuestManager::BuildStateIndexToName(const char * questName) {
        ((void(*)(quest::CQuestManager * const, const char *))Addr::quest::CQuestManager::BuildStateIndexToName__const_char_)(this, questName);
    }

    quest::CQuestManager::CQuestManager() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::CQuestManager)(this);
    }

    bool quest::CQuestManager::CanEndQuestAtState(const std::string & quest_name, const std::string & state_name) {
        return ((bool(*)(quest::CQuestManager * const, const std::string &, const std::string &))Addr::quest::CQuestManager::CanEndQuestAtState__const_std_locale_string__const_std_locale_string_)(this, quest_name, state_name);
    }

    bool quest::CQuestManager::CanStartQuest(unsigned int quest_index) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::CanStartQuest__unsigned_int)(this, quest_index);
    }

    bool quest::CQuestManager::CanStartQuest(unsigned int quest_index, const quest::PC & pc) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, const quest::PC &))Addr::quest::CQuestManager::CanStartQuest__unsigned_int_const_quest_PC_)(this, quest_index, pc);
    }

    void quest::CQuestManager::CancelServerTimers(DWORD arg) {
        ((void(*)(quest::CQuestManager * const, DWORD))Addr::quest::CQuestManager::CancelServerTimers__DWORD)(this, arg);
    }

    void quest::CQuestManager::ClearCurrentItem() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::ClearCurrentItem)(this);
    }

    void quest::CQuestManager::ClearScript() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::ClearScript)(this);
    }

    void quest::CQuestManager::ClearServerTimer(const std::string & name, DWORD arg) {
        ((void(*)(quest::CQuestManager * const, const std::string &, DWORD))Addr::quest::CQuestManager::ClearServerTimer__const_std_locale_string__DWORD)(this, name, arg);
    }

    void quest::CQuestManager::ClearServerTimerNotCancel(const std::string & name, DWORD arg) {
        ((void(*)(quest::CQuestManager * const, const std::string &, DWORD))Addr::quest::CQuestManager::ClearServerTimerNotCancel__const_std_locale_string__DWORD)(this, name, arg);
    }

    bool quest::CQuestManager::Click(unsigned int pc, LPCHARACTER pkChrTarget) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, LPCHARACTER))Addr::quest::CQuestManager::Click__unsigned_int_LPCHARACTER)(this, pc, pkChrTarget);
    }

    void quest::CQuestManager::CloseState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::CloseState__quest_QuestState_)(this, qs);
    }

    void quest::CQuestManager::Confirm(unsigned int pc, quest::EQuestConfirmType confirm, unsigned int pc2) {
        ((void(*)(quest::CQuestManager * const, unsigned int, quest::EQuestConfirmType, unsigned int))Addr::quest::CQuestManager::Confirm__unsigned_int_quest_EQuestConfirmType_unsigned_int)(this, pc, confirm, pc2);
    }

    void quest::CQuestManager::Destroy() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::Destroy)(this);
    }

    void quest::CQuestManager::DisconnectPC(LPCHARACTER ch) {
        ((void(*)(quest::CQuestManager * const, LPCHARACTER))Addr::quest::CQuestManager::DisconnectPC__LPCHARACTER)(this, ch);
    }

    void quest::CQuestManager::EnterState(DWORD pc, DWORD quest_index, int state) {
        ((void(*)(quest::CQuestManager * const, DWORD, DWORD, int))Addr::quest::CQuestManager::EnterState__DWORD_DWORD_int)(this, pc, quest_index, state);
    }

    bool quest::CQuestManager::ExecuteQuestScript(quest::PC& pc, const std::string & quest_name, int state, const char * code, int code_size, std::vector<quest::AArgScript*> * pChatScripts, bool bUseCache) {
        return ((bool(*)(quest::PC &, const std::string &, int, const char *, int, std::vector<quest::AArgScript*> *, bool))Addr::quest::CQuestManager::ExecuteQuestScript__const_std_locale_string__const_int_const_char__const_int_std_vector_quest_AArgScript_std_allocator_quest_AArgScript__bool)(pc, quest_name, state, code, code_size, pChatScripts, bUseCache);
    }

    bool quest::CQuestManager::ExecuteQuestScript(quest::PC& pc, DWORD quest_index, int state, const char * code, int code_size, std::vector<quest::AArgScript*> * pChatScripts, bool bUseCache) {
        return ((bool(*)(quest::PC &, DWORD, int, const char *, int, std::vector<quest::AArgScript*> *, bool))Addr::quest::CQuestManager::ExecuteQuestScript__DWORD_const_int_const_char__const_int_std_vector_quest_AArgScript_std_allocator_quest_AArgScript__bool)(pc, quest_index, state, code, code_size, pChatScripts, bUseCache);
    }

    unsigned int quest::CQuestManager::FindNPCIDByName(const std::string & name) {
        return ((unsigned int(*)(quest::CQuestManager * const, const std::string &))Addr::quest::CQuestManager::FindNPCIDByName__const_std_locale_string_)(this, name);
    }

    LPDUNGEON quest::CQuestManager::GetCurrentDungeon() {
        return ((LPDUNGEON(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::GetCurrentDungeon)(this);
    }

    LPITEM quest::CQuestManager::GetCurrentItem() {
        return ((LPITEM(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::GetCurrentItem)(this);
    }

    LPCHARACTER quest::CQuestManager::GetCurrentNPCCharacterPtr() {
        return ((LPCHARACTER(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::GetCurrentNPCCharacterPtr)(this);
    }

    unsigned int quest::CQuestManager::GetCurrentNPCRace() {
        return ((unsigned int(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::GetCurrentNPCRace)(this);
    }

    const std::string & quest::CQuestManager::GetCurrentQuestName() {
        return ((const std::string & (*)(quest::CQuestManager * const))Addr::quest::CQuestManager::GetCurrentQuestName)(this);
    }

    int quest::CQuestManager::GetEventFlag(const std::string & name) {
        return ((int(*)(quest::CQuestManager * const, const std::string &))Addr::quest::CQuestManager::GetEventFlag__const_std_locale_string_)(this, name);
    }

    quest::PC * quest::CQuestManager::GetPC(unsigned int pc) {
        return ((quest::PC * (*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::GetPC__unsigned_int)(this, pc);
    }

    quest::PC * quest::CQuestManager::GetPCForce(unsigned int a1) {
        return ((quest::PC * (*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::GetPCForce__unsigned_int)(this, a1);
    }

    unsigned int quest::CQuestManager::GetQuestIndexByName(const std::string & name) {
        return ((unsigned int(*)(quest::CQuestManager * const, const std::string &))Addr::quest::CQuestManager::GetQuestIndexByName__const_std_locale_string_)(this, name);
    }

    const std::string & quest::CQuestManager::GetQuestNameByIndex(unsigned int idx) {
        return ((const std::string & (*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::GetQuestNameByIndex__unsigned_int)(this, idx);
    }

    int quest::CQuestManager::GetQuestStateIndex(const std::string & quest_name, const std::string & state_name) {
        return ((int(*)(quest::CQuestManager * const, const std::string &, const std::string &))Addr::quest::CQuestManager::GetQuestStateIndex__const_std_locale_string__const_std_locale_string_)(this, quest_name, state_name);
    }

    const char * quest::CQuestManager::GetQuestStateName(const std::string & quest_name, const int state_index) {
        return ((const char *(*)(quest::CQuestManager * const, const std::string &, const int))Addr::quest::CQuestManager::GetQuestStateName__const_std_locale_string__const_int)(this, quest_name, state_index);
    }

    DWORD quest::CQuestManager::GetServerTimerArg() {
        return ((DWORD(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::GetServerTimerArg)(this);
    }

    bool quest::CQuestManager::GiveItemToPC(unsigned int pc, LPCHARACTER pkChr) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, LPCHARACTER))Addr::quest::CQuestManager::GiveItemToPC__unsigned_int_LPCHARACTER)(this, pc, pkChr);
    }

    void quest::CQuestManager::GotoConfirmState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::GotoConfirmState__quest_QuestState_)(this, qs);
    }

    void quest::CQuestManager::GotoEndState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::GotoEndState__quest_QuestState_)(this, qs);
    }

    void quest::CQuestManager::GotoInputState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::GotoInputState__quest_QuestState_)(this, qs);
    }

    void quest::CQuestManager::GotoPauseState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::GotoPauseState__quest_QuestState_)(this, qs);
    }

    void quest::CQuestManager::GotoSelectItemState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::GotoSelectItemState__quest_QuestState_)(this, qs);
    }

    void quest::CQuestManager::GotoSelectState(quest::QuestState & qs) {
        ((void(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::GotoSelectState__quest_QuestState_)(this, qs);
    }

    bool quest::CQuestManager::Initialize() {
        return ((bool(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::Initialize)(this);
    }

    bool quest::CQuestManager::InitializeLua() {
        return ((bool(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::InitializeLua)(this);
    }

    void quest::CQuestManager::Input(unsigned int pc, const char * msg) {
        ((void(*)(quest::CQuestManager * const, unsigned int, const char *))Addr::quest::CQuestManager::Input__unsigned_int_const_char_)(this, pc, msg);
    }

    void quest::CQuestManager::Kill(unsigned int pc, unsigned int npc) {
        ((void(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::Kill__unsigned_int_unsigned_int)(this, pc, npc);
    }

    void quest::CQuestManager::LeaveState(DWORD pc, DWORD quest_index, int state) {
        ((void(*)(quest::CQuestManager * const, DWORD, DWORD, int))Addr::quest::CQuestManager::LeaveState__DWORD_DWORD_int)(this, pc, quest_index, state);
    }

    void quest::CQuestManager::Letter(DWORD pc, DWORD quest_index, int state) {
        ((void(*)(quest::CQuestManager * const, DWORD, DWORD, int))Addr::quest::CQuestManager::Letter__DWORD_DWORD_int)(this, pc, quest_index, state);
    }

    void quest::CQuestManager::LevelUp(unsigned int pc) {
        ((void(*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::LevelUp__unsigned_int)(this, pc);
    }

    void quest::CQuestManager::LoadStartQuest(const std::string & quest_name, unsigned int idx) {
        ((void(*)(quest::CQuestManager * const, const std::string &, unsigned int))Addr::quest::CQuestManager::LoadStartQuest__const_std_locale_string__unsigned_int)(this, quest_name, idx);
    }

    unsigned int quest::CQuestManager::LoadTimerScript(const std::string & name) {
        return ((unsigned int(*)(quest::CQuestManager * const, const std::string &))Addr::quest::CQuestManager::LoadTimerScript__const_std_locale_string_)(this, name);
    }

    void quest::CQuestManager::Login(unsigned int pc, const char * c_pszQuest) {
        ((void(*)(quest::CQuestManager * const, unsigned int, const char *))Addr::quest::CQuestManager::Login__unsigned_int_const_char_)(this, pc, c_pszQuest);
    }

    void quest::CQuestManager::Logout(unsigned int pc) {
        ((void(*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::Logout__unsigned_int)(this, pc);
    }

    void quest::CQuestManager::LogoutPC(LPCHARACTER ch) {
        ((void(*)(quest::CQuestManager * const, LPCHARACTER))Addr::quest::CQuestManager::LogoutPC__LPCHARACTER)(this, ch);
    }

    quest::QuestState quest::CQuestManager::OpenState(const std::string & a1, int a2) {
        return ((quest::QuestState(*)(quest::CQuestManager * const, const std::string &, int))Addr::quest::CQuestManager::OpenState__const_std_locale_string__int)(this, a1, a2);
    }

    bool quest::CQuestManager::PickupItem(unsigned int pc, LPITEM item) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, LPITEM))Addr::quest::CQuestManager::PickupItem__unsigned_int_LPITEM)(this, pc, item);
    }

    void quest::CQuestManager::QuestButton(unsigned int pc, unsigned int quest_index) {
        ((void(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::QuestButton__unsigned_int_unsigned_int)(this, pc, quest_index);
    }

    void quest::CQuestManager::QuestError(const char * func, int line, const char * fmt, ...) {
        ((void(*)(quest::CQuestManager * const, const char *, int, const char *, ...))Addr::quest::CQuestManager::QuestError__const_char__int_const_char___)(this, func, line, fmt);
    }

    void quest::CQuestManager::QuestInfo(unsigned int pc, unsigned int quest_index) {
        ((void(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::QuestInfo__unsigned_int_unsigned_int)(this, pc, quest_index);
    }

    void quest::CQuestManager::RegisterNPCVnum(DWORD dwVnum) {
        ((void(*)(quest::CQuestManager * const, DWORD))Addr::quest::CQuestManager::RegisterNPCVnum__DWORD)(this, dwVnum);
    }

    void quest::CQuestManager::RegisterQuest(const std::string & stQuestName, unsigned int idx) {
        ((void(*)(quest::CQuestManager * const, const std::string &, unsigned int))Addr::quest::CQuestManager::RegisterQuest__const_std_locale_string__unsigned_int)(this, stQuestName, idx);
    }

    void quest::CQuestManager::Reload() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::Reload)(this);
    }

    void quest::CQuestManager::RequestSetEventFlag(const std::string & name, int value) {
        ((void(*)(quest::CQuestManager * const, const std::string &, int))Addr::quest::CQuestManager::RequestSetEventFlag__const_std_locale_string__int)(this, name, value);
    }

    void quest::CQuestManager::Resume(unsigned int pc) {
        ((void(*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::Resume__unsigned_int)(this, pc);
    }

    bool quest::CQuestManager::RunState(quest::QuestState & qs) {
        return ((bool(*)(quest::CQuestManager * const, quest::QuestState &))Addr::quest::CQuestManager::RunState__quest_QuestState_)(this, qs);
    }

    bool quest::CQuestManager::SIGUse(unsigned int pc, DWORD sig_vnum, LPITEM item, bool bReceiveAll) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, DWORD, LPITEM, bool))Addr::quest::CQuestManager::SIGUse__unsigned_int_DWORD_LPITEM_bool)(this, pc, sig_vnum, item, bReceiveAll);
    }

    void quest::CQuestManager::Select(unsigned int pc, unsigned int selection) {
        ((void(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::Select__unsigned_int_unsigned_int)(this, pc, selection);
    }

    void quest::CQuestManager::SelectDungeon(LPDUNGEON pDungeon) {
        ((void(*)(quest::CQuestManager * const, LPDUNGEON))Addr::quest::CQuestManager::SelectDungeon__LPDUNGEON)(this, pDungeon);
    }

    void quest::CQuestManager::SelectItem(unsigned int pc, unsigned int selection) {
        ((void(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::SelectItem__unsigned_int_unsigned_int)(this, pc, selection);
    }

    void quest::CQuestManager::SendEventFlagList(LPCHARACTER ch) {
        ((void(*)(quest::CQuestManager * const, LPCHARACTER))Addr::quest::CQuestManager::SendEventFlagList__LPCHARACTER)(this, ch);
    }

    void quest::CQuestManager::SendScript() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::SendScript)(this);
    }

    bool quest::CQuestManager::ServerTimer(unsigned int npc, unsigned int arg) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::ServerTimer__unsigned_int_unsigned_int)(this, npc, arg);
    }

    void quest::CQuestManager::SetCurrentItem(LPITEM item) {
        ((void(*)(quest::CQuestManager * const, LPITEM))Addr::quest::CQuestManager::SetCurrentItem__LPITEM)(this, item);
    }

    void quest::CQuestManager::SetEventFlag(const std::string & name, int value) {
        ((void(*)(quest::CQuestManager * const, const std::string &, int))Addr::quest::CQuestManager::SetEventFlag__const_std_locale_string__int)(this, name, value);
    }

    void quest::CQuestManager::SetServerTimerArg(DWORD dwArg) {
        ((void(*)(quest::CQuestManager * const, DWORD))Addr::quest::CQuestManager::SetServerTimerArg__DWORD)(this, dwArg);
    }

    void quest::CQuestManager::SetSkinStyle(int iStyle) {
        ((void(*)(quest::CQuestManager * const, int))Addr::quest::CQuestManager::SetSkinStyle__int)(this, iStyle);
    }

    bool quest::CQuestManager::TakeItem(unsigned int pc, unsigned int npc, LPITEM item) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, unsigned int, LPITEM))Addr::quest::CQuestManager::TakeItem__unsigned_int_unsigned_int_LPITEM)(this, pc, npc, item);
    }

    bool quest::CQuestManager::Target(unsigned int pc, DWORD dwQuestIndex, const char * c_pszTargetName, const char * c_pszVerb) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, DWORD, const char *, const char *))Addr::quest::CQuestManager::Target__unsigned_int_DWORD_const_char__const_char_)(this, pc, dwQuestIndex, c_pszTargetName, c_pszVerb);
    }

    bool quest::CQuestManager::Timer(unsigned int pc, unsigned int npc) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, unsigned int))Addr::quest::CQuestManager::Timer__unsigned_int_unsigned_int)(this, pc, npc);
    }

    void quest::CQuestManager::Unmount(unsigned int pc) {
        ((void(*)(quest::CQuestManager * const, unsigned int))Addr::quest::CQuestManager::Unmount__unsigned_int)(this, pc);
    }

    bool quest::CQuestManager::UseItem(unsigned int pc, LPITEM item, bool bReceiveAll) {
        return ((bool(*)(quest::CQuestManager * const, unsigned int, LPITEM, bool))Addr::quest::CQuestManager::UseItem__unsigned_int_LPITEM_bool)(this, pc, item, bReceiveAll);
    }

    void quest::CQuestManager::WriteRunningStateToSyserr() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::WriteRunningStateToSyserr)(this);
    }

    quest::CQuestManager::~CQuestManager() {
        ((void(*)(quest::CQuestManager * const))Addr::quest::CQuestManager::__CQuestManager)(this);
    }

    LPCHARACTER quest::CQuestManager::GetCurrentCharacterPtr(void) {
        return m_pCurrentCharacter;
    }
}
