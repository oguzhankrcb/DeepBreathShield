/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
// Forward declarations
#include <tr1/unordered_set>
namespace libm2 {
    class CEntity;
    typedef CEntity ENTITY;
    typedef CEntity* LPENTITY;
    class CHARACTER;
    typedef CHARACTER* LPCHARACTER;
    class DESC;
    typedef DESC* LPDESC;
    class CItem;
    typedef CItem* LPITEM;
    class CParty;
    typedef CParty* LPPARTY;
    class CDungeon;
    typedef CDungeon* LPDUNGEON;
    class SECTREE;
    typedef SECTREE* LPSECTREE;
    class CInputProcessor;
    class CInputClose;
    class CInputHandshake;
    class CInputLogin;
    class CInputMain;
    class CInputDead;
    class CInputAuth;
    typedef std::tr1::unordered_set<CHARACTER*, std::tr1::hash<CHARACTER*>, std::equal_to<CHARACTER*>, std::allocator<CHARACTER* >> CHARACTER_SET;
}
