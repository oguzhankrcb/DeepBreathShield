/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_QUEST_NPC_HPP
#define __LIBM2_GAME_QUEST_NPC_HPP
#include "../stdInclude.hpp"
#include "AArgScript.hpp"
#include "PC.hpp"
namespace libm2 {
    namespace quest {

        class NPC {
        protected:
            unsigned int m_vnum;
            std::map<unsigned int, std::map<int, quest::AStateScriptType, std::less<int>, std::allocator<std::pair<int const, quest::AStateScriptType> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::map<int, quest::AStateScriptType, std::less<int>, std::allocator<std::pair<int const, quest::AStateScriptType> > > > > > m_mapOwnQuest[22];
            std::map<unsigned int, std::map<int, std::vector<quest::AArgScript, std::allocator<quest::AArgScript> >, std::less<int>, std::allocator<std::pair<int const, std::vector<quest::AArgScript, std::allocator<quest::AArgScript> > > > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::map<int, std::vector<quest::AArgScript, std::allocator<quest::AArgScript> >, std::less<int>, std::allocator<std::pair<int const, std::vector<quest::AArgScript, std::allocator<quest::AArgScript> > > > > > > > m_mapOwnArgQuest[22];
        public:
            NPC();
            ~NPC();
            void Set(unsigned int, const std::string &);
            static bool HasStartState(const std::map<int, quest::AStateScriptType, std::less<int>, std::allocator<std::pair<int const, quest::AStateScriptType> > > &);
            static bool HasStartState(const std::map<int, std::vector<quest::AArgScript, std::allocator<quest::AArgScript> >, std::less<int>, std::allocator<std::pair<int const, std::vector<quest::AArgScript, std::allocator<quest::AArgScript> > > > > &);
            bool OnServerTimer(quest::PC &);
            bool OnClick(quest::PC &);
            bool OnKill(quest::PC &);
            bool OnPartyKill(quest::PC &);
            bool OnTimer(quest::PC &);
            bool OnLevelUp(quest::PC &);
            bool OnLogin(quest::PC &, const char *);
            bool OnLogout(quest::PC &);
            bool OnButton(quest::PC &, unsigned int);
            bool OnInfo(quest::PC &, unsigned int);
            bool OnAttrIn(quest::PC &);
            bool OnAttrOut(quest::PC &);
            bool OnUseItem(quest::PC &, bool);
            bool OnTakeItem(quest::PC &);
            bool OnEnterState(quest::PC &, DWORD, int);
            bool OnLeaveState(quest::PC &, DWORD, int);
            bool OnLetter(quest::PC &, DWORD, int);
            bool OnChat(quest::PC &);
            bool HasChat(void);
            bool OnTarget(quest::PC &, DWORD, const char *, const char *, bool &);
            bool OnUnmount(quest::PC &);
            bool OnPickupItem(quest::PC &);
            bool OnSIGUse(quest::PC &, bool);
            bool HandleEvent(quest::PC &, int);
            bool HandleReceiveAllEvent(quest::PC &, int);
            bool HandleReceiveAllNoWaitEvent(quest::PC &, int);
            bool ExecuteEventScript(quest::PC &, int, DWORD, int);
            unsigned int GetVnum(void);
        protected:
            void LoadStateScript(int, const char *, const char *);
        };
    }
}
#endif // __LIBM2_GAME_QUEST_NPC_HPP
