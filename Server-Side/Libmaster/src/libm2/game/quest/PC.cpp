/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "PC.hpp"
namespace libm2 {
    namespace quest {

        void quest::PC::AddQuestStateChange(const std::string & quest_name, int prev_state, int next_state) {
            ((void(*)(quest::PC * const, const std::string &, int, int))Addr::quest::PC::AddQuestStateChange__const_std_locale_string__int_int)(this, quest_name, prev_state, next_state);
        }

        void quest::PC::AddTimer(const std::string & name, LPEVENT pEvent) {
            ((void(*)(quest::PC * const, const std::string &, LPEVENT))Addr::quest::PC::AddTimer__const_std_locale_string__LPEVENT_)(this, name, pEvent);
        }

        void quest::PC::Build() {
            ((void(*)(quest::PC * const))Addr::quest::PC::Build)(this);
        }

        void quest::PC::CancelRunning() {
            ((void(*)(quest::PC * const))Addr::quest::PC::CancelRunning)(this);
        }

        void quest::PC::ClearCurrentQuestBeginFlag() {
            ((void(*)(quest::PC * const))Addr::quest::PC::ClearCurrentQuestBeginFlag)(this);
        }

        void quest::PC::ClearQuest(const std::string & quest_name) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::ClearQuest__const_std_locale_string_)(this, quest_name);
        }

        void quest::PC::ClearTimer() {
            ((void(*)(quest::PC * const))Addr::quest::PC::ClearTimer)(this);
        }

        bool quest::PC::DeleteFlag(const std::string & a1) {
            return ((bool(*)(quest::PC * const, const std::string &))Addr::quest::PC::DeleteFlag__const_std_locale_string_)(this, a1);
        }

        void quest::PC::Destroy() {
            ((void(*)(quest::PC * const))Addr::quest::PC::Destroy)(this);
        }

        void quest::PC::DoQuestStateChange() {
            ((void(*)(quest::PC * const))Addr::quest::PC::DoQuestStateChange)(this);
        }

        void quest::PC::EndRunning() {
            ((void(*)(quest::PC * const))Addr::quest::PC::EndRunning)(this);
        }

        int quest::PC::GetCurrentQuestBeginFlag() {
            return ((int(*)(quest::PC * const))Addr::quest::PC::GetCurrentQuestBeginFlag)(this);
        }

        int quest::PC::GetCurrentQuestIndex() {
            return ((int(*)(quest::PC * const))Addr::quest::PC::GetCurrentQuestIndex)(this);
        }

        const std::string & quest::PC::GetCurrentQuestName() const {
            return ((const std::string & (*)(const quest::PC * const))Addr::quest::PC::GetCurrentQuestName)(this);
        }

        int quest::PC::GetFlag(const std::string & a1) {
            return ((int(*)(quest::PC * const, const std::string &))Addr::quest::PC::GetFlag__const_std_locale_string_)(this, a1);
        }

        quest::QuestState & quest::PC::GetQuest(const std::string & quest_name) {
            return ((quest::QuestState & (*)(quest::PC * const, const std::string &))Addr::quest::PC::GetQuest__const_std_locale_string_)(this, quest_name);
        }

        void quest::PC::GiveExp(const std::string & label, DWORD exp) {
            ((void(*)(quest::PC * const, const std::string &, DWORD))Addr::quest::PC::GiveExp__const_std_locale_string__DWORD)(this, label, exp);
        }

        void quest::PC::GiveItem(const std::string & label, DWORD dwVnum, int count) {
            ((void(*)(quest::PC * const, const std::string &, DWORD, int))Addr::quest::PC::GiveItem__const_std_locale_string__DWORD_int)(this, label, dwVnum, count);
        }

        bool quest::PC::HasQuest(const std::string & quest_name) {
            return ((bool(*)(quest::PC * const, const std::string &))Addr::quest::PC::HasQuest__const_std_locale_string_)(this, quest_name);
        }

        quest::PC::PC() {
            ((void(*)(quest::PC * const))Addr::quest::PC::PC)(this);
        }

        void quest::PC::RemoveTimer(const std::string & a1) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::RemoveTimer__const_std_locale_string_)(this, a1);
        }

        void quest::PC::RemoveTimerNotCancel(const std::string & a1) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::RemoveTimerNotCancel__const_std_locale_string_)(this, a1);
        }

        void quest::PC::Reward(LPCHARACTER ch) {
            ((void(*)(quest::PC * const, LPCHARACTER))Addr::quest::PC::Reward__LPCHARACTER)(this, ch);
        }

        void quest::PC::Save() {
            ((void(*)(quest::PC * const))Addr::quest::PC::Save)(this);
        }

        void quest::PC::SaveFlag(const std::string & name, int value) {
            ((void(*)(quest::PC * const, const std::string &, int))Addr::quest::PC::SaveFlag__const_std_locale_string__int)(this, name, value);
        }

        void quest::PC::SendFlagList(LPCHARACTER ch) {
            ((void(*)(quest::PC * const, LPCHARACTER))Addr::quest::PC::SendFlagList__LPCHARACTER)(this, ch);
        }

        void quest::PC::SendQuestInfoPakcet() {
            ((void(*)(quest::PC * const))Addr::quest::PC::SendQuestInfoPakcet)(this);
        }

        void quest::PC::SetCurrentQuestBeginFlag() {
            ((void(*)(quest::PC * const))Addr::quest::PC::SetCurrentQuestBeginFlag)(this);
        }

        void quest::PC::SetCurrentQuestClockName(const std::string & name) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::SetCurrentQuestClockName__const_std_locale_string_)(this, name);
        }

        void quest::PC::SetCurrentQuestClockValue(int value) {
            ((void(*)(quest::PC * const, int))Addr::quest::PC::SetCurrentQuestClockValue__int)(this, value);
        }

        void quest::PC::SetCurrentQuestCounterName(const std::string & name) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::SetCurrentQuestCounterName__const_std_locale_string_)(this, name);
        }

        void quest::PC::SetCurrentQuestCounterValue(int value) {
            ((void(*)(quest::PC * const, int))Addr::quest::PC::SetCurrentQuestCounterValue__int)(this, value);
        }

        void quest::PC::SetCurrentQuestDoneFlag() {
            ((void(*)(quest::PC * const))Addr::quest::PC::SetCurrentQuestDoneFlag)(this);
        }

        void quest::PC::SetCurrentQuestIconFile(const std::string & icon_file) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::SetCurrentQuestIconFile__const_std_locale_string_)(this, icon_file);
        }

        void quest::PC::SetCurrentQuestStartFlag() {
            ((void(*)(quest::PC * const))Addr::quest::PC::SetCurrentQuestStartFlag)(this);
        }

        void quest::PC::SetCurrentQuestStateName(const std::string & state_name) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::SetCurrentQuestStateName__const_std_locale_string_)(this, state_name);
        }

        void quest::PC::SetCurrentQuestTitle(const std::string & title) {
            ((void(*)(quest::PC * const, const std::string &))Addr::quest::PC::SetCurrentQuestTitle__const_std_locale_string_)(this, title);
        }

        void quest::PC::SetFlag(const std::string & name, int value, bool bSkipSave) {
            ((void(*)(quest::PC * const, const std::string &, int, bool))Addr::quest::PC::SetFlag__const_std_locale_string__int_bool)(this, name, value, bSkipSave);
        }

        void quest::PC::SetID(DWORD dwID) {
            ((void(*)(quest::PC * const, DWORD))Addr::quest::PC::SetID__DWORD)(this, dwID);
        }

        void quest::PC::SetQuest(const std::string & quest_name, quest::QuestState & qs) {
            ((void(*)(quest::PC * const, const std::string &, quest::QuestState &))Addr::quest::PC::SetQuest__const_std_locale_string__quest_QuestState_)(this, quest_name, qs);
        }

        void quest::PC::SetQuestState(const std::string & a1, int a2) {
            ((void(*)(quest::PC * const, const std::string &, int))Addr::quest::PC::SetQuestState__const_std_locale_string__int)(this, a1, a2);
        }

        void quest::PC::SetQuestState(const std::string & quest_name, const std::string & state_name) {
            ((void(*)(quest::PC * const, const std::string &, const std::string &))Addr::quest::PC::SetQuestState__const_std_locale_string__const_std_locale_string_)(this, quest_name, state_name);
        }

        void quest::PC::SetQuestTitle(const std::string & quest, const std::string & title) {
            ((void(*)(quest::PC * const, const std::string &, const std::string &))Addr::quest::PC::SetQuestTitle__const_std_locale_string__const_std_locale_string_)(this, quest, title);
        }

        void quest::PC::SetSendFlag(int idx) {
            ((void(*)(quest::PC * const, int))Addr::quest::PC::SetSendFlag__int)(this, idx);
        }

        quest::PC::~PC() {
            ((void(*)(quest::PC * const))Addr::quest::PC::__PC)(this);
        }
    }
}
