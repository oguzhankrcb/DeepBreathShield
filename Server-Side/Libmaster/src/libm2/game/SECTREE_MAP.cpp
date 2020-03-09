/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "SECTREE_MAP.hpp"
#include "../addr.hpp"
namespace libm2 {

    void SECTREE_MAP::Build() {
        ((void(*)(SECTREE_MAP * const))Addr::SECTREE_MAP::Build)(this);
    }

    void SECTREE_MAP::DumpAllToSysErr() {
        ((void(*)(SECTREE_MAP * const))Addr::SECTREE_MAP::DumpAllToSysErr)(this);
    }

    LPSECTREE SECTREE_MAP::Find(DWORD dwPackage) {
        return ((LPSECTREE(*)(SECTREE_MAP * const, DWORD))Addr::SECTREE_MAP::Find__DWORD)(this, dwPackage);
    }

    LPSECTREE SECTREE_MAP::Find(DWORD x, DWORD y) {
        return ((LPSECTREE(*)(SECTREE_MAP * const, DWORD, DWORD))Addr::SECTREE_MAP::Find__DWORD_DWORD)(this, x, y);
    }

    SECTREE_MAP::SECTREE_MAP(SECTREE_MAP & r) {
        ((void(*)(SECTREE_MAP * const, SECTREE_MAP &))Addr::SECTREE_MAP::SECTREE_MAP__SECTREE_MAP_)(this, r);
    }
    SECTREE_MAP::SECTREE_MAP() {
        ((void(*)(SECTREE_MAP * const))Addr::SECTREE_MAP::SECTREE_MAP)(this);
    }

    SECTREE_MAP::~SECTREE_MAP() {
        ((void(*)(SECTREE_MAP * const))Addr::SECTREE_MAP::__SECTREE_MAP)(this);
    }

    const std::map<unsigned int, SECTREE*> & SECTREE_MAP::GetSectreeMap(void) const {
        return this->map_;
    }
}
