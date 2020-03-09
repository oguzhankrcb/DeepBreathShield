/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_BUILDING_CLAND_HPP
#define __LIBM2_GAME_BUILDING_CLAND_HPP
#include "../stdInclude.hpp"
#include "CObject.hpp"
namespace libm2 {
    namespace building {

        struct SLand {
            DWORD dwID;
            long lMapIndex;
            long x;
            long y;
            long width;
            long height;
            DWORD dwGuildID;
            BYTE bGuildLevelLimit;
            DWORD dwPrice;
        } typedef TLand;

        class CLand {
        protected:
            TLand m_data;
            std::map<unsigned int, CObject*> m_map_pkObject;
            std::map<unsigned int, CObject*> m_map_pkObjectByVID;

        public:
            CLand(TLand *);
            ~CLand();
            void Destroy(void);
            const TLand & GetData(void);
            void PutData(const TLand *);
            DWORD GetID(void) const;
            void SetOwner(DWORD);
            DWORD GetOwner(void) const;
            void InsertObject(LPOBJECT);
            LPOBJECT FindObject(DWORD);
            LPOBJECT FindObjectByVID(DWORD);
            LPOBJECT FindObjectByVnum(DWORD);
            LPOBJECT FindObjectByGroup(DWORD);
            LPOBJECT FindObjectByNPC(LPCHARACTER);
            void DeleteObject(DWORD);
            bool RequestCreateObject(DWORD, long, long, long, float, float, float, bool);
            void RequestDeleteObject(DWORD);
            void RequestDeleteObjectByVID(DWORD);
            void RequestUpdate(DWORD);
            void ClearLand(void);
            bool RequestCreateWall(long, float);
            void RequestDeleteWall(void);
            bool RequestCreateWallBlocks(DWORD, long, char, bool, bool, bool, bool);
            void RequestDeleteWallBlocks(DWORD);
            DWORD GetMapIndex(void);
        private:
            void DrawWall(DWORD, long, long &, long &, char, float);
        };
    }
}

#endif // __LIBM2_GAME_BUILDING_CLAND_HPP
