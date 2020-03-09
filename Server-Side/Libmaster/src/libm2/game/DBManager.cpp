/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "DBManager.hpp"
namespace libm2 {

    void DBManager::AnalyzeReturnQuery(SQLMsg * pMsg) {
        ((void(*)(DBManager * const, SQLMsg *))Addr::DBManager::AnalyzeReturnQuery__SQLMsg_)(this, pMsg);
    }

    void DBManager::CheckBilling() {
        ((void(*)(DBManager * const))Addr::DBManager::CheckBilling)(this);
    }

    bool DBManager::Connect(const char * host, const int port, const char * user, const char * pwd, const char * db) {
        return ((bool(*)(DBManager * const, const char *, const int, const char *, const char *, const char *))Addr::DBManager::Connect__const_char__const_int_const_char__const_char__const_char_)(this, host, port, user, pwd, db);
    }

    DBManager::DBManager() {
        ((void(*)(DBManager * const))Addr::DBManager::DBManager)(this);
    }

    void DBManager::DeleteLoginData(CLoginData * pkLD) {
        ((void(*)(DBManager * const, CLoginData *))Addr::DBManager::DeleteLoginData__CLoginData_)(this, pkLD);
    }

    SQLMsg * DBManager::DirectQuery(const char * c_pszFormat, ...) {
        va_list va;
        va_start(va, c_pszFormat);
        char buffer[4095];
        vsnprintf(buffer, 4096, c_pszFormat, va);
        va_end(va);
        return ((SQLMsg * (*)(DBManager * const, const char *, ...))Addr::DBManager::DirectQuery__const_char___)(this, buffer);
    }

    size_t DBManager::EscapeString(char * dst, size_t dstSize, const char * src, size_t srcSize) {
        return ((size_t(*)(DBManager * const, char *, size_t, const char *, size_t))Addr::DBManager::EscapeString__char__size_t_const_char__size_t)(this, dst, dstSize, src, srcSize);
    }

    void DBManager::FlushBilling(bool bForce) {
        ((void(*)(DBManager * const, bool))Addr::DBManager::FlushBilling__bool)(this, bForce);
    }

    const std::string & DBManager::GetDBString(const std::string & key) {
        return ((const std::string & (*)(DBManager * const, const std::string &))Addr::DBManager::GetDBString__const_std_locale_string_)(this, key);
    }

    const std::vector<std::string> & DBManager::GetGreetMessage() {
        return ((const std::vector<std::string> &(*)(DBManager * const))Addr::DBManager::GetGreetMessage)(this);
    }

    CLoginData * DBManager::GetLoginData(DWORD dwKey) {
        return ((CLoginData * (*)(DBManager * const, DWORD))Addr::DBManager::GetLoginData__DWORD)(this, dwKey);
    }

    void DBManager::InsertLoginData(CLoginData * pkLD) {
        ((void(*)(DBManager * const, CLoginData *))Addr::DBManager::InsertLoginData__CLoginData_)(this, pkLD);
    }

    bool DBManager::IsConnected() {
        return ((bool(*)(DBManager * const))Addr::DBManager::IsConnected)(this);
    }

    void DBManager::LoadDBString() {
        ((void(*)(DBManager * const))Addr::DBManager::LoadDBString)(this);
    }

    void DBManager::LoginPrepare(BYTE bBillType, DWORD dwBillID, long lRemainSecs, LPDESC d, DWORD * pdwClientKey, int * paiPremiumTimes) {
        ((void(*)(DBManager * const, BYTE, DWORD, long, LPDESC, DWORD *, int *))Addr::DBManager::LoginPrepare__BYTE_DWORD_long_LPDESC_DWORD__int_)(this, bBillType, dwBillID, lRemainSecs, d, pdwClientKey, paiPremiumTimes);
    }

    SQLMsg * DBManager::PopResult() {
        return ((SQLMsg * (*)(DBManager * const))Addr::DBManager::PopResult)(this);
    }

    void DBManager::Process() {
        ((void(*)(DBManager * const))Addr::DBManager::Process)(this);
    }

    void DBManager::PushBilling(CLoginData * pkLD) {
        ((void(*)(DBManager * const, CLoginData *))Addr::DBManager::PushBilling__CLoginData_)(this, pkLD);
    }

    void DBManager::Query(const char * c_pszFormat, ...) {
        va_list va;
        va_start(va, c_pszFormat);
        char buffer[4095];
        vsnprintf(buffer, 4096, c_pszFormat, va);
        va_end(va);
        ((void(*)(DBManager * const, const char *, ...))Addr::DBManager::Query__const_char___)(this, buffer);
    }

    void DBManager::RequestBlockException(const char * login, int cmd) {
        ((void(*)(DBManager * const, const char *, int))Addr::DBManager::RequestBlockException__const_char__int)(this, login, cmd);
    }

    void DBManager::ReturnQuery(int iType, DWORD dwIdent, void * pvData, const char * c_pszFormat, ...) {
        va_list va;
        va_start(va, c_pszFormat);
        char buffer[4095];
        vsnprintf(buffer, 4096, c_pszFormat, va);
        va_end(va);
        ((void(*)(DBManager * const, int, DWORD, void *, const char *, ...))Addr::DBManager::ReturnQuery__int_DWORD_void__const_char___)(this, iType, dwIdent, pvData, buffer);
    }

    void DBManager::SendAuthLogin(LPDESC d) {
        ((void(*)(DBManager * const, LPDESC))Addr::DBManager::SendAuthLogin__LPDESC)(this, d);
    }

    void DBManager::SendLoginPing(const char * c_pszLogin) {
        ((void(*)(DBManager * const, const char *))Addr::DBManager::SendLoginPing__const_char_)(this, c_pszLogin);
    }

    void DBManager::SendMoneyLog(BYTE type, DWORD vnum, int gold) {
        ((void(*)(DBManager * const, BYTE, DWORD, int))Addr::DBManager::SendMoneyLog__BYTE_DWORD_int)(this, type, vnum, gold);
    }

    void DBManager::SetBilling(DWORD dwKey, bool bOn, bool bSkipPush) {
        ((void(*)(DBManager * const, DWORD, bool, bool))Addr::DBManager::SetBilling__DWORD_bool_bool)(this, dwKey, bOn, bSkipPush);
    }

    void DBManager::StopAllBilling() {
        ((void(*)(DBManager * const))Addr::DBManager::StopAllBilling)(this);
    }

    DBManager::~DBManager() {
        ((void(*)(DBManager * const))Addr::DBManager::__DBManager)(this);
    }
}
