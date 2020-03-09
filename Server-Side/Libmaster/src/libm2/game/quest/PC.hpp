/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_QUEST_HPP
#define __LIBM2_GAME_QUEST_HPP
#include "../stdInclude.hpp"
#include "../CHARACTER.hpp"
#include "RewardData.hpp"
#include "QuestState.hpp"
namespace libm2 {
    namespace quest {

        class PC {
        public:

            class TQuestStateChangeInfo {
                DWORD quest_idx;
                int prev_state;
                int next_state;
            public:
                TQuestStateChangeInfo(DWORD, int, int);
            };

        private:
            std::vector<quest::PC::TQuestStateChangeInfo, std::allocator<quest::PC::TQuestStateChangeInfo> > m_QuestStateChange;
            std::vector<quest::RewardData, std::allocator<quest::RewardData> > m_vRewardData;
            bool m_bIsGivenReward;
            bool m_bShouldSendDone;
            DWORD m_dwID;
            std::map<unsigned int, quest::QuestState, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, quest::QuestState> > > m_QuestInfo;
            quest::QuestState *m_RunningQuestState;
            std::string m_stCurQuest;

            std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int> > > m_FlagMap;
            std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int> > > m_FlagSaveMap;
            std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, boost::intrusive_ptr<event>, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, boost::intrusive_ptr<event> > > > m_TimerMap;
            int m_iSendToClient;
            bool m_bLoaded;
            int m_iLastState;
            DWORD m_dwWaitConfirmFromPID;
            bool m_bConfirmWait;

        public:
            PC(void);
            ~PC();
            void Destroy(void);
            void SetID(DWORD);
            DWORD GetID(void);
            bool HasQuest(const std::string &);
            quest::QuestState & GetQuest(const std::string &);
            std::_Rb_tree_iterator<std::pair<unsigned int const, quest::QuestState> > quest_begin(void);
            std::_Rb_tree_iterator<std::pair<unsigned int const, quest::QuestState> > quest_end(void);
            std::_Rb_tree_iterator<std::pair<unsigned int const, quest::QuestState> > quest_find(DWORD);
            bool IsRunning(void);
            void EndRunning(void);
            void CancelRunning(void);
            quest::QuestState * GetRunningQuestState(void);
            void SetQuest(const std::string &, quest::QuestState &);
            void SetCurrentQuestStateName(const std::string &);
            void SetQuestState(const std::string &,
                    const std::string &);
            void SetQuestState(const std::string &, int);
            void SetQuestState(const char *, const char *);
            void ClearQuest(const std::string &);
        private:
            void AddQuestStateChange(const std::string &, int, int);
            void DoQuestStateChange(void);
        public:
            void SetFlag(const std::string &, int, bool);
            int GetFlag(const std::string &);
            bool DeleteFlag(const std::string &);
            const std::string & GetCurrentQuestName(void) const;
            int GetCurrentQuestIndex(void);
            void RemoveTimer(const std::string &);
            void RemoveTimerNotCancel(const std::string &);
            void AddTimer(const std::string &, LPEVENT);
            void ClearTimer(void);
            void SetCurrentQuestStartFlag(void);
            void SetCurrentQuestDoneFlag(void);
            void SetQuestTitle(const std::string &,
                    const std::string &);
            void SetCurrentQuestTitle(const std::string &);
            void SetCurrentQuestClockName(const std::string &);
            void SetCurrentQuestClockValue(int);
            void SetCurrentQuestCounterName(const std::string &);
            void SetCurrentQuestCounterValue(int);
            void SetCurrentQuestIconFile(const std::string &);
            bool IsLoaded(void) const;
            void SetLoaded(void);
            void Build(void);
            void Save(void);
            bool HasReward(void);
            void Reward(LPCHARACTER);
            void GiveItem(const std::string &, DWORD, int);
            void GiveExp(const std::string &, DWORD);
            void SetSendDoneFlag(void);
            bool GetAndResetDoneFlag(void);
            void SendFlagList(LPCHARACTER);
            void SetConfirmWait(DWORD);
            void ClearConfirmWait(void);
            bool IsConfirmWait(void) const;
            bool IsConfirmWait(DWORD) const;
        private:
            void SetSendFlag(int);
            void ClearSendFlag(void);
            void SaveFlag(const std::string &, int);
            void ClearCurrentQuestBeginFlag(void);
            void SetCurrentQuestBeginFlag(void);
            int GetCurrentQuestBeginFlag(void);
            void SendQuestInfoPakcet(void);
        };
    }
}
#endif // __LIBM2_GAME_QUEST_HPP
