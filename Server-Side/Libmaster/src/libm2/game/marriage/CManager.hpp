/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_MARRIAGE_CMANAGER_HPP
#define __LIBM2_GAME_MARRIAGE_CMANAGER_HPP
#include "../stdInclude.hpp"
#include "TMarriage.hpp"
#include "../../lib/GameSingleton.hpp"
#include "../../addr.hpp"
namespace libm2 {
    namespace marriage {

        class CManager : public GameSingleton<marriage::CManager, (unsigned int) Addr::marriage::CManager::singleton> {
        private:
            std::tr1::unordered_set<marriage::TMarriage*> m_Marriages;
            std::map<unsigned int, marriage::TMarriage*> m_MarriageByPID;
            std::set<std::pair<unsigned int, unsigned int >> m_setWedding;

        public:
            CManager(void);
            ~CManager();
            bool Initialize(void);
            void Destroy(void);
            marriage::TMarriage * Get(DWORD);
            bool IsMarriageUniqueItem(DWORD);
            bool IsMarried(DWORD);
            bool IsEngaged(DWORD);
            bool IsEngagedOrMarried(DWORD);
            void RequestAdd(DWORD, DWORD, const char *, const char *);
            void Add(DWORD, DWORD, time_t, const char *, const char *);
            void RequestUpdate(DWORD, DWORD, int, BYTE);
            void Update(DWORD, DWORD, long, BYTE);
            void RequestRemove(DWORD, DWORD);
            void Remove(DWORD, DWORD);
            void Login(LPCHARACTER);
            void Logout(DWORD);
            void Logout(LPCHARACTER);
            void WeddingReady(DWORD, DWORD, DWORD);
            void WeddingStart(DWORD, DWORD);
            void WeddingEnd(DWORD, DWORD);
            void RequestEndWedding(DWORD, DWORD);
        };
    }
}
#endif // __LIBM2_GAME_MARRIAGE_CMANAGER_HPP
