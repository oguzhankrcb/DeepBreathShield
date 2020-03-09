/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputAuth.hpp"
#include "../addr.hpp"
namespace libm2 {

    int CInputAuth::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputAuth * const, LPDESC, BYTE, const char *))Addr::CInputAuth::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    CInputAuth::CInputAuth() {
        ((void(*)(CInputAuth * const))Addr::CInputAuth::CInputAuth)(this);
    }

    BYTE CInputAuth::GetType() {
        return ((BYTE(*)(CInputAuth * const))Addr::CInputAuth::GetType)(this);
    }

    void CInputAuth::Login(LPDESC d, const char * c_pData) {
        ((void(*)(CInputAuth * const, LPDESC, const char *))Addr::CInputAuth::Login__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputAuth::LoginOpenID(LPDESC d, const char * c_pData) {
        ((void(*)(CInputAuth * const, LPDESC, const char *))Addr::CInputAuth::LoginOpenID__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputAuth::PasspodAnswer(LPDESC d, const char * c_pData) {
        ((void(*)(CInputAuth * const, LPDESC, const char *))Addr::CInputAuth::PasspodAnswer__LPDESC_const_char_)(this, d, c_pData);
    }

    int CInputAuth::auth_OpenID(const char * authKey, const char * ipAddr, char * rID) {
        return ((int(*)(CInputAuth * const, const char *, const char *, char *))Addr::CInputAuth::auth_OpenID__const_char__const_char__char_)(this, authKey, ipAddr, rID);
    }

    CInputAuth::~CInputAuth() {
        ((void(*)(CInputAuth * const))Addr::CInputAuth::__CInputAuth)(this);
    }
}
