/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_BUILDING_COBJECT_HPP
#define __LIBM2_GAME_BUILDING_COBJECT_HPP
#include "../stdInclude.hpp"
#include "../CEntity.hpp"
#include "SObjectProto.hpp"
namespace libm2 {
    namespace building {

        struct SObject {
            DWORD dwID;
            DWORD dwLandID;
            DWORD dwVnum;
            long lMapIndex;
            long x;
            long y;
            float xRot;
            float yRot;
            float zRot;
            long lLife;
        } typedef TObject;
        // fwdecl
        class CLand;

        struct CObject : public CEntity {
        protected:
            TObjectProto *m_pProto;
            TObject m_data;
            DWORD m_dwVID;
            building::CLand *m_pkLand;
            LPCHARACTER m_chNPC;

        public:
            CObject(TObject *, TObjectProto *);
            ~CObject();
            void Destroy(void);
            virtual void EncodeInsertPacket(LPENTITY);
            //virtual void EncodeRemovePacket(LPENTITY); isnt implemented
            DWORD GetID(void);
            void SetVID(DWORD);
            DWORD GetVID(void);
            bool Show(long, long, long);
            void Save(void);
            void SetLand(building::CLand *);
            CLand * GetLand(void);
            DWORD GetVnum(void);
            DWORD GetGroup(void);
            void RegenNPC(void);
            void ApplySpecialEffect(void);
            void RemoveSpecialEffect(void);
            void Reconstruct(DWORD);
            LPCHARACTER GetNPC(void);
        } typedef * LPOBJECT;
    }
}
#endif // __LIBM2_GAME_BUILDING_COBJECT_HPP
