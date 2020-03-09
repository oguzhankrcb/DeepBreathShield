/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_BUILDING_CMANAGER_HPP
#define __LIBM2_GAME_BUILDING_CMANAGER_HPP
#include "../../lib/GameSingleton.hpp"
#include "../../addr.hpp"
#include "CLand.hpp"
namespace libm2 {
    namespace building {

        class CManager : public GameSingleton<CManager, (unsigned int) Addr::building::CManager::singleton> {
        protected:
            std::vector<SObjectProto> m_vec_kObjectProto;
            std::map<unsigned int, SObjectProto*> m_map_pkObjectProto;
            std::map<unsigned int, CLand*> m_map_pkLand;
            std::map<unsigned int, CObject*> m_map_pkObjByID;
            std::map<unsigned int, CObject*> m_map_pkObjByVID;

        public:
            CManager(void);
            ~CManager();
            void Destroy(void);
            void FinalizeBoot(void);
            bool LoadObjectProto(const TObjectProto *, int);
            TObjectProto * GetObjectProto(DWORD);
            bool LoadLand(TLand *);
            CLand * FindLand(DWORD);
            CLand * FindLand(long, long, long);
            CLand * FindLandByGuild(DWORD);
            void UpdateLand(TLand *);
            bool LoadObject(TObject *, bool);
            void DeleteObject(DWORD);
            void UnregisterObject(LPOBJECT);
            LPOBJECT FindObjectByVID(DWORD);
            void SendLandList(LPDESC, long);
            void ClearLand(DWORD);
            void ClearLandByGuildID(DWORD);
        };
    }
}
#endif // __LIBM2_GAME_BUILDING_CMANAGER_HPP
