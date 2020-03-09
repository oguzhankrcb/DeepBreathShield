/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_QUEST_CQUESTMANAGER_HPP
#define __LIBM2_GAME_QUEST_CQUESTMANAGER_HPP
#include "../stdInclude.hpp"
#include "../../lib/GameSingleton.hpp"
#include "../../addr.hpp"
#include "../EVENT.hpp"
#include "NPC.hpp"
#include "../CDungeon.hpp"

namespace libm2 {
    namespace quest {

        enum EQuestConfirmType {
            CONFIRM_NO,
            CONFIRM_YES,
            CONFIRM_TIMEOUT
        };

        class CQuestManager : public GameSingleton<CQuestManager, (unsigned int) Addr::quest::CQuestManager::singleton> {
        public:

            class stringhash {
            public:
                size_t operator()(const std::string &) const;
            };
        public:
            std::map<std::string, int> m_mapEventName;
        private:
            LPDUNGEON m_pSelectedDungeon;
            DWORD m_dwServerTimerArg;

            std::map<std::pair<std::string, unsigned int>, boost::intrusive_ptr<event >> m_mapServerTimer;
            int m_iRunningEventIndex;
            std::map<std::string, int> m_mapEventFlag;
            lua_State* L;
            bool m_bNoSend;
            std::set<unsigned int> m_registeredNPCVnum;
            std::map<unsigned int, quest::NPC, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, quest::NPC> > > m_mapNPC;
            std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, unsigned int> > > m_mapNPCNameID;
            std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, unsigned int, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, unsigned int> > > m_mapTimerID;
            quest::QuestState* m_CurrentRunningState;
            std::map<unsigned int, quest::PC, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, quest::PC> > > m_mapPC;
            LPCHARACTER m_pCurrentCharacter;
            LPCHARACTER m_pCurrentNPCCharacter;
            LPCHARACTER m_pCurrentPartyMember;
            quest::PC* m_pCurrentPC;
            std::string m_strScript;
            int m_iCurrentSkin;
            boost::unordered_map<std::string, int, quest::CQuestManager::stringhash> m_hmQuestName;
            boost::unordered_map<unsigned int, std::vector<char, std::allocator<char> >, boost::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<char, std::allocator<char> > > > > m_hmQuestStartScript;
            std::map<unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > m_mapQuestNameByIndex;
            bool m_bError;
        public:
            CQuestManager(void);
            ~CQuestManager();
            bool Initialize(void);
            void Destroy(void);
            bool InitializeLua(void);
            lua_State* GetLuaState(void);
            void AddLuaFunctionTable(const char*, luaL_reg*);
            quest::QuestState OpenState(const std::string&, int);
            void CloseState(quest::QuestState&);
            bool RunState(quest::QuestState&);
            quest::PC* GetPC(unsigned int);
            quest::PC* GetPCForce(unsigned int);
            unsigned int GetCurrentNPCRace(void);
            const std::string& GetCurrentQuestName(void);
            unsigned int FindNPCIDByName(const std::string&);
            LPCHARACTER GetCurrentNPCCharacterPtr(void);
            void SetCurrentEventIndex(int);
            bool UseItem(unsigned int, LPITEM, bool);
            bool PickupItem(unsigned int, LPITEM);
            bool SIGUse(unsigned int, DWORD, LPITEM, bool);
            bool TakeItem(unsigned int, unsigned int, LPITEM);
            LPITEM GetCurrentItem(void);
            void ClearCurrentItem(void);
            void SetCurrentItem(LPITEM);
            void AddServerTimer(const std::string&, DWORD, LPEVENT);
            void ClearServerTimer(const std::string&, DWORD);
            void ClearServerTimerNotCancel(const std::string&, DWORD);
            void CancelServerTimers(DWORD);
            void SetServerTimerArg(DWORD);
            DWORD GetServerTimerArg(void);
            bool ServerTimer(unsigned int, unsigned int);
            void Login(unsigned int, const char*);
            void Logout(unsigned int);
            bool Timer(unsigned int, unsigned int);
            bool Click(unsigned int, LPCHARACTER);
            void Kill(unsigned int, unsigned int);
            void LevelUp(unsigned int);
            void AttrIn(unsigned int, LPCHARACTER, int);
            void AttrOut(unsigned int, LPCHARACTER, int);
            bool Target(unsigned int, DWORD, const char*, const char*);
            bool GiveItemToPC(unsigned int, LPCHARACTER);
            void Unmount(unsigned int);
            void QuestButton(unsigned int, unsigned int);
            void QuestInfo(unsigned int, unsigned int);
            void EnterState(DWORD, DWORD, int);
            void LeaveState(DWORD, DWORD, int);
            void Letter(DWORD);
            void Letter(DWORD, DWORD, int);
            bool CheckQuestLoaded(quest::PC*);
            void Select(unsigned int, unsigned int);
            void Resume(unsigned int);
            void Input(unsigned int, const char*);
            void Confirm(unsigned int, quest::EQuestConfirmType, unsigned int);
            void SelectItem(unsigned int, unsigned int);
            void LogoutPC(LPCHARACTER);
            void DisconnectPC(LPCHARACTER);
            quest::QuestState* GetCurrentState(void);
            void LoadStartQuest(const std::string&, unsigned int);
            bool CanStartQuest(unsigned int, const quest::PC&);
            bool CanStartQuest(unsigned int);
            bool CanEndQuestAtState(const std::string&, const std::string&);
            LPCHARACTER GetCurrentCharacterPtr(void);
            LPCHARACTER GetCurrentPartyMember(void);
            quest::PC* GetCurrentPC(void);
            LPDUNGEON GetCurrentDungeon(void);
            void SelectDungeon(LPDUNGEON);
            void ClearScript(void);
            void SendScript(void);
            void AddScript(const std::string&);
            void BuildStateIndexToName(const char*);
            int GetQuestStateIndex(const std::string&,
                    const std::string&);
            const char* GetQuestStateName(const std::string&, int);
            void SetSkinStyle(int);
            void SetNoSend(void);
            unsigned int LoadTimerScript(const std::string&);
            void RegisterQuest(const std::string&, unsigned int);
            unsigned int GetQuestIndexByName(const std::string&);
            const std::string& GetQuestNameByIndex(unsigned int);
            void RequestSetEventFlag(const std::string&, int);
            void SetEventFlag(const std::string&, int);
            int GetEventFlag(const std::string&);
            void BroadcastEventFlagOnLogin(LPCHARACTER);
            void SendEventFlagList(LPCHARACTER);
            void Reload(void);
            void SetError(void);
            void ClearError(void);
            bool IsError(void);
            void WriteRunningStateToSyserr(void);
            void QuestError(const char*, int, const char*, ...);
            void RegisterNPCVnum(DWORD);
        private:
            void GotoSelectState(quest::QuestState&);
            void GotoPauseState(quest::QuestState&);
            void GotoEndState(quest::QuestState&);
            void GotoInputState(quest::QuestState&);
            void GotoConfirmState(quest::QuestState&);
            void GotoSelectItemState(quest::QuestState&);
        public:
            static bool ExecuteQuestScript(quest::PC&, const std::string&, int, const char*, int, std::vector<quest::AArgScript*>*, bool);
            static bool ExecuteQuestScript(quest::PC&, DWORD, int, const char*, int, std::vector<quest::AArgScript*>*, bool);
        };
    }
}

#endif // __LIBM2_GAME_QUEST_CQUESTMANAGER_HPP
