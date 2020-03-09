/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputDead.hpp"
#include "../addr.hpp"
namespace libm2 {
    int CInputDead::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
            return ((int(*)(CInputDead * const, LPDESC, BYTE, const char *))Addr::CInputDead::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }
    BYTE CInputDead::GetType() {
            return ((BYTE(*)(CInputDead * const))Addr::CInputDead::GetType)(this);
    }
    CInputDead::~CInputDead() {
             ((void(*)(CInputDead * const))Addr::CInputDead::__CInputDead)(this);
    }
}
