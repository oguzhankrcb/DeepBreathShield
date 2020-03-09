/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputP2P.hpp"
#include "../addr.hpp"
namespace libm2 {

    int CInputP2P::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputP2P * const, LPDESC, BYTE, const char *))Addr::CInputP2P::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    void CInputP2P::BlockChat(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::BlockChat__const_char_)(this, c_pData);
    }

    CInputP2P::CInputP2P() {
        ((void(*)(CInputP2P * const))Addr::CInputP2P::CInputP2P)(this);
    }

    void CInputP2P::Disconnect(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::Disconnect__const_char_)(this, c_pData);
    }

    void CInputP2P::FindPosition(LPDESC d, const char * c_pData) {
        ((void(*)(CInputP2P * const, LPDESC, const char *))Addr::CInputP2P::FindPosition__LPDESC_const_char_)(this, d, c_pData);
    }

    BYTE CInputP2P::GetType() {
        return ((BYTE(*)(CInputP2P * const))Addr::CInputP2P::GetType)(this);
    }

    int CInputP2P::Guild(LPDESC d, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputP2P * const, LPDESC, const char *, size_t))Addr::CInputP2P::Guild__LPDESC_const_char__size_t)(this, d, c_pData, uiBytes);
    }

    void CInputP2P::GuildWarZoneMapIndex(const char * a1) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::GuildWarZoneMapIndex__const_char_)(this, a1);
    }

    void CInputP2P::Login(LPDESC d, const char * c_pData) {
        ((void(*)(CInputP2P * const, LPDESC, const char *))Addr::CInputP2P::Login__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputP2P::LoginPing(LPDESC d, const char * c_pData) {
        ((void(*)(CInputP2P * const, LPDESC, const char *))Addr::CInputP2P::LoginPing__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputP2P::Logout(LPDESC d, const char * c_pData) {
        ((void(*)(CInputP2P * const, LPDESC, const char *))Addr::CInputP2P::Logout__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputP2P::MessengerAdd(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::MessengerAdd__const_char_)(this, c_pData);
    }

    void CInputP2P::MessengerRemove(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::MessengerRemove__const_char_)(this, c_pData);
    }

    int CInputP2P::MonarchNotice(LPDESC d, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputP2P * const, LPDESC, const char *, size_t))Addr::CInputP2P::MonarchNotice__LPDESC_const_char__size_t)(this, d, c_pData, uiBytes);
    }

    int CInputP2P::MonarchTransfer(LPDESC d, const char * c_pData) {
        return ((int(*)(CInputP2P * const, LPDESC, const char *))Addr::CInputP2P::MonarchTransfer__LPDESC_const_char_)(this, d, c_pData);
    }

    int CInputP2P::Notice(LPDESC d, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputP2P * const, LPDESC, const char *, size_t))Addr::CInputP2P::Notice__LPDESC_const_char__size_t)(this, d, c_pData, uiBytes);
    }

    void CInputP2P::PCBangUpdate(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::PCBangUpdate__const_char_)(this, c_pData);
    }

    int CInputP2P::Relay(LPDESC d, const char * c_pData, size_t uiBytes) {
        return ((int(*)(CInputP2P * const, LPDESC, const char *, size_t))Addr::CInputP2P::Relay__LPDESC_const_char__size_t)(this, d, c_pData, uiBytes);
    }

    void CInputP2P::Setup(LPDESC d, const char * c_pData) {
        ((void(*)(CInputP2P * const, LPDESC, const char *))Addr::CInputP2P::Setup__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputP2P::Shout(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::Shout__const_char_)(this, c_pData);
    }

    void CInputP2P::Transfer(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::Transfer__const_char_)(this, c_pData);
    }

    void CInputP2P::WarpCharacter(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::WarpCharacter__const_char_)(this, c_pData);
    }

    void CInputP2P::XmasWarpSanta(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::XmasWarpSanta__const_char_)(this, c_pData);
    }

    void CInputP2P::XmasWarpSantaReply(const char * c_pData) {
        ((void(*)(CInputP2P * const, const char *))Addr::CInputP2P::XmasWarpSantaReply__const_char_)(this, c_pData);
    }
}
