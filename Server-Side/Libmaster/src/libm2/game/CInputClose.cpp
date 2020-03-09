/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputClose.hpp"
#include "../addr.hpp"
namespace libm2 {

    int CInputClose::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputClose * const, LPDESC, BYTE, const char *))Addr::CInputClose::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    BYTE CInputClose::GetType() {
        return ((BYTE(*)(CInputClose * const))Addr::CInputClose::GetType)(this);
    }
}
