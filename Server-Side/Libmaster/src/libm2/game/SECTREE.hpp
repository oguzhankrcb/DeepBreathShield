/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SECTREE_HPP
#define __LIBM2_GAME_SECTREE_HPP
#include "stdInclude.hpp"
#include "CEntity.hpp"
#include "CAttribute.hpp"
#include "fwDecl.hpp"
namespace libm2 {
    class SECTREE;
    typedef SECTREE* LPSECTREE;

    typedef struct sectree_coord {
        unsigned int x : 16;
        unsigned int y : 16;
    } SECTREE_COORD;

    union sectreeid {
        DWORD package;
        SECTREE_COORD coord;
    } typedef SECTREEID;
    
    enum
{
	ATTR_BLOCK = (1 << 0),
	ATTR_WATER = (1 << 1),
	ATTR_BANPK = (1 << 2),
	ATTR_OBJECT = (1 << 7),
};

    typedef std::list<SECTREE*, std::allocator<SECTREE*> > LPSECTREE_LIST;

    class SECTREE {
    private:
        SECTREEID m_id;
        ENTITY_SET m_set_entity;
        LPSECTREE_LIST m_neighbor_list;
        int m_iPCCount;
        bool isClone;
        CAttribute *m_pkAttribute;
    public:
        SECTREE();
        ~SECTREE();
        void Initialize(void);
        void Destroy(void);
        SECTREEID GetID(void);
        bool InsertEntity(LPENTITY);
        void RemoveEntity(LPENTITY);
        void SetRegenEvent(LPEVENT);
        bool Regen(void);
        void IncreasePC(void);
        void DecreasePC(void);
        void BindAttribute(CAttribute *);
        CAttribute * GetAttributePtr(void);
        DWORD GetAttribute(long, long);
        bool IsAttr(long, long, DWORD);
        void CloneAttribute(LPSECTREE);
        int GetEventAttribute(long, long);
        void SetAttribute(DWORD, DWORD, DWORD);
        void RemoveAttribute(DWORD, DWORD, DWORD);
        const ENTITY_SET & GetEntitySet(void) const;
    private:
        //void for_each_entity<FCollectEntity>(FCollectEntity &);
    };
}
#endif // __LIBM2_GAME_SECTREE_HPP
