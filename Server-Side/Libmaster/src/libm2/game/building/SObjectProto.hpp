/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_BUILDING_SOBJECTPROTO_HPP
#define __LIBM2_GAME_BUILDING_SOBJECTPROTO_HPP
#include "../stdInclude.hpp"
namespace libm2 {
    namespace building {

        struct SObjectMaterial {
            DWORD dwItemVnum;
            DWORD dwCount;
        } typedef TObjectMaterial;

        struct SObjectProto {
            DWORD dwVnum;
            DWORD dwPrice;
            TObjectMaterial kMaterials[5];
            DWORD dwUpgradeVnum;
            DWORD dwUpgradeLimitTime;
            long lLife;
            long lRegion[4];
            DWORD dwNPCVnum;
            long lNPCX;
            long lNPCY;
            DWORD dwGroupVnum;
            DWORD dwDependOnGroupVnum;
        } typedef TObjectProto;
    }
}

#endif // __LIBM2_GAME_BUILDING_SOBJECTPROTO_HPP
