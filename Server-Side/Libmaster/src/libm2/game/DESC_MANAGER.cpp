/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "DESC_MANAGER.hpp"
#include "../addr.hpp"
namespace libm2 {

    LPDESC DESC_MANAGER::AcceptDesc(LPFDWATCH fdw, socket_t s) {
        return ((LPDESC(*)(DESC_MANAGER * const, LPFDWATCH, socket_t))Addr::DESC_MANAGER::AcceptDesc__LPFDWATCH_socket_t)(this, fdw, s);
    }

    LPDESC DESC_MANAGER::AcceptP2PDesc(LPFDWATCH fdw, socket_t bind_fd) {
        return ((LPDESC(*)(DESC_MANAGER * const, LPFDWATCH, socket_t))Addr::DESC_MANAGER::AcceptP2PDesc__LPFDWATCH_socket_t)(this, fdw, bind_fd);
    }

    void DESC_MANAGER::ConnectAccount(const std::string & login, LPDESC d) {
        ((void(*)(DESC_MANAGER * const, const std::string &, LPDESC))Addr::DESC_MANAGER::ConnectAccount__const_std_locale_string__LPDESC)(this, login, d);
    }

    LPCLIENT_DESC DESC_MANAGER::CreateConnectionDesc(LPFDWATCH fdw, const char * host, WORD port, int iPhaseWhenSucceed, bool bRetryWhenClosed) {
        return ((LPCLIENT_DESC(*)(DESC_MANAGER * const, LPFDWATCH, const char *, WORD, int, bool))Addr::DESC_MANAGER::CreateConnectionDesc__LPFDWATCH_const_char__WORD_int_bool)(this, fdw, host, port, iPhaseWhenSucceed, bRetryWhenClosed);
    }

    DWORD DESC_MANAGER::CreateHandshake() {
        return ((DWORD(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::CreateHandshake)(this);
    }

    DWORD DESC_MANAGER::CreateLoginKey(LPDESC d) {
        return ((DWORD(*)(DESC_MANAGER * const, LPDESC))Addr::DESC_MANAGER::CreateLoginKey__LPDESC)(this, d);
    }

    DESC_MANAGER::DESC_MANAGER() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::DESC_MANAGER)(this);
    }

    void DESC_MANAGER::Destroy() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::Destroy)(this);
    }

    void DESC_MANAGER::DestroyClosed() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::DestroyClosed)(this);
    }

    void DESC_MANAGER::DestroyDesc(LPDESC d, bool bEraseFromSet) {
        ((void(*)(DESC_MANAGER * const, LPDESC, bool))Addr::DESC_MANAGER::DestroyDesc__LPDESC_bool)(this, d, bEraseFromSet);
    }

    void DESC_MANAGER::DisconnectAccount(const std::string & login) {
        ((void(*)(DESC_MANAGER * const, const std::string &))Addr::DESC_MANAGER::DisconnectAccount__const_std_locale_string_)(this, login);
    }

    LPDESC DESC_MANAGER::FindByCharacterName(const char * name) {
        return ((LPDESC(*)(DESC_MANAGER * const, const char *))Addr::DESC_MANAGER::FindByCharacterName__const_char_)(this, name);
    }

    LPDESC DESC_MANAGER::FindByHandle(DWORD handle) {
        return ((LPDESC(*)(DESC_MANAGER * const, DWORD))Addr::DESC_MANAGER::FindByHandle__DWORD)(this, handle);
    }

    LPDESC DESC_MANAGER::FindByHandshake(DWORD dwHandshake) {
        return ((LPDESC(*)(DESC_MANAGER * const, DWORD))Addr::DESC_MANAGER::FindByHandshake__DWORD)(this, dwHandshake);
    }

    LPDESC DESC_MANAGER::FindByLoginKey(DWORD dwKey) {
        return ((LPDESC(*)(DESC_MANAGER * const, DWORD))Addr::DESC_MANAGER::FindByLoginKey__DWORD)(this, dwKey);
    }

    LPDESC DESC_MANAGER::FindByLoginName(const std::string & login) {
        return ((LPDESC(*)(DESC_MANAGER * const, const std::string &))Addr::DESC_MANAGER::FindByLoginName__const_std_locale_string_)(this, login);
    }

    const std::tr1::unordered_set<DESC*> & DESC_MANAGER::GetClientSet() {
        return ((const std::tr1::unordered_set<DESC*> &(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::GetClientSet)(this);
    }

    void DESC_MANAGER::GetUserCount(int & iTotal, int ** paiEmpireUserCount, int & iLocalCount) {
        ((void(*)(DESC_MANAGER * const, int &, int **, int &))Addr::DESC_MANAGER::GetUserCount__int__int__int_)(this, iTotal, paiEmpireUserCount, iLocalCount);
    }

    void DESC_MANAGER::Initialize() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::Initialize)(this);
    }

    bool DESC_MANAGER::IsP2PDescExist(const char * szHost, WORD wPort) {
        return ((bool(*)(DESC_MANAGER * const, const char *, WORD))Addr::DESC_MANAGER::IsP2PDescExist__const_char__WORD)(this, szHost, wPort);
    }

    bool DESC_MANAGER::LoadClientPackageCryptInfo(const char * pDirName) {
        return ((bool(*)(DESC_MANAGER * const, const char *))Addr::DESC_MANAGER::LoadClientPackageCryptInfo__const_char_)(this, pDirName);
    }

    DWORD DESC_MANAGER::MakeRandomKey(DWORD dwHandle) {
        return ((DWORD(*)(DESC_MANAGER * const, DWORD))Addr::DESC_MANAGER::MakeRandomKey__DWORD)(this, dwHandle);
    }

    void DESC_MANAGER::ProcessExpiredLoginKey() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::ProcessExpiredLoginKey)(this);
    }

    void DESC_MANAGER::SendClientPackageCryptKey(LPDESC desc) {
        ((void(*)(DESC_MANAGER * const, LPDESC))Addr::DESC_MANAGER::SendClientPackageCryptKey__LPDESC)(this, desc);
    }

    void DESC_MANAGER::SendClientPackageSDBToLoadMap(LPDESC desc, const char * pMapName) {
        ((void(*)(DESC_MANAGER * const, LPDESC, const char *))Addr::DESC_MANAGER::SendClientPackageSDBToLoadMap__LPDESC_const_char_)(this, desc, pMapName);
    }

    void DESC_MANAGER::TryConnect() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::TryConnect)(this);
    }

    void DESC_MANAGER::UpdateLocalUserCount() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::UpdateLocalUserCount)(this);
    }

    DESC_MANAGER::~DESC_MANAGER() {
        ((void(*)(DESC_MANAGER * const))Addr::DESC_MANAGER::__DESC_MANAGER)(this);
    }
}


