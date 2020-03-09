/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputLogin.hpp"
#include "../addr.hpp"
namespace libm2 {

    int CInputLogin::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputLogin * const, LPDESC, BYTE, const char *))Addr::CInputLogin::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    void CInputLogin::ChangeName(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::ChangeName__LPDESC_const_char_)(this, d, data);
    }

    void CInputLogin::CharacterCreate(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::CharacterCreate__LPDESC_const_char_)(this, d, data);
    }

    void CInputLogin::CharacterDelete(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::CharacterDelete__LPDESC_const_char_)(this, d, data);
    }

    void CInputLogin::CharacterSelect(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::CharacterSelect__LPDESC_const_char_)(this, d, data);
    }

    void CInputLogin::Empire(LPDESC d, const char * c_pData) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::Empire__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputLogin::Entergame(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::Entergame__LPDESC_const_char_)(this, d, data);
    }

    void CInputLogin::GuildMarkCRCList(LPDESC d, const char * c_pData) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::GuildMarkCRCList__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputLogin::GuildMarkIDXList(LPDESC a1, const char * a2) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::GuildMarkIDXList__LPDESC_const_char_)(this, a1, a2);
    }

    void CInputLogin::GuildMarkUpload(LPDESC d, const char * c_pData) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::GuildMarkUpload__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputLogin::GuildSymbolCRC(LPDESC d, const char * c_pData) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::GuildSymbolCRC__LPDESC_const_char_)(this, d, c_pData);
    }

    int CInputLogin::GuildSymbolUpload(LPDESC d, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputLogin * const, LPDESC, const char *, size_t))Addr::CInputLogin::GuildSymbolUpload__LPDESC_const_char__size_t)(this, d, c_pData, uiBytes);
    }

    void CInputLogin::Login(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::Login__LPDESC_const_char_)(this, d, data);
    }

    void CInputLogin::LoginByKey(LPDESC d, const char * data) {
        ((void(*)(CInputLogin * const, LPDESC, const char *))Addr::CInputLogin::LoginByKey__LPDESC_const_char_)(this, d, data);
    }

    BYTE CInputLogin::GetType() {
        return ((BYTE(*)(const CInputLogin*))Addr::CInputLogin::GetType)(this);
    }
}
