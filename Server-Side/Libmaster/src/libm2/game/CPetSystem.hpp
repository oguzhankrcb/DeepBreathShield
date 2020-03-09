/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CPETSYSTEM_HPP
#define __LIBM2_GAME_CPETSYSTEM_HPP
#include "stdInclude.hpp"
#include "EVENT.hpp"
#include "CPetActor.hpp"
namespace libm2 {

    struct SPetAbility {
    };

    class CPetSystem {
    private:
        void* ___vtable;
        boost::unordered_map<unsigned int, CPetActor*, boost::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<unsigned int const, CPetActor*> > > m_petActorMap;
        LPCHARACTER m_pkOwner;
        DWORD m_dwUpdatePeriod;
        DWORD m_dwLastUpdateTime;
        LPEVENT m_pkPetSystemUpdateEvent;

    public:
        CPetSystem(LPCHARACTER);
        ~CPetSystem();
        CPetActor * GetByVID(DWORD) const;
        CPetActor * GetByVnum(DWORD) const;
        bool Update(DWORD);
        void Destroy(void);
        size_t CountSummoned(void) const;
        void SetUpdatePeriod(DWORD);
        CPetActor * Summon(DWORD, LPITEM, const char *, bool, DWORD);
        void Unsummon(DWORD, bool);
        void Unsummon(CPetActor *, bool);
        CPetActor * AddPet(DWORD, const char *, const SPetAbility &, DWORD);
        void DeletePet(DWORD);
        void DeletePet(CPetActor *);
        void RefreshBuff(void);
    };
}
#endif // __LIBM2_GAME_CPETSYSTEM_HPP
