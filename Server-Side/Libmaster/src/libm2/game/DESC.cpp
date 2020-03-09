/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "DESC.hpp"
#include "../addr.hpp"
#include "CInputLogin.hpp"
namespace libm2 {
    void DESC::AssembleCRCMagicCube(BYTE bProcPiece, BYTE bFilePiece) {
        ((void(*)(DESC * const, BYTE, BYTE))Addr::DESC::AssembleCRCMagicCube__BYTE_BYTE)(this, bProcPiece, bFilePiece);
    }

    void DESC::BindAccountTable(TAccountTable * pAccountTable) {
        ((void(*)(DESC * const, TAccountTable *))Addr::DESC::BindAccountTable__TAccountTable_)(this, pAccountTable);
    }

    void DESC::BindCharacter(LPCHARACTER ch) {
        ((void(*)(DESC * const, LPCHARACTER))Addr::DESC::BindCharacter__LPCHARACTER)(this, ch);
    }

    void DESC::BufferedPacket(const void * c_pvData, int iSize) {
        ((void(*)(DESC * const, const void *, int))Addr::DESC::BufferedPacket__const_void__int)(this, c_pvData, iSize);
    }

    void DESC::ChatPacket(BYTE type, const char * format, ...) {
        va_list va;
        va_start(va, format);
        char buffer[513];
        vsnprintf(buffer, 513, format, va);
        va_end(va);
        ((void(*)(DESC * const, BYTE, const char *, ...))Addr::DESC::ChatPacket__BYTE_const_char___)(this, type, buffer);
    }

    bool DESC::CheckMatrixTryCount() {
        return ((bool(*)(DESC * const))Addr::DESC::CheckMatrixTryCount)(this);
    }

    DESC::DESC() {
        ((void(*)(DESC * const))Addr::DESC::DESC)(this);
    }

    bool DESC::DelayedDisconnect(int iSec) {
        return ((bool(*)(DESC * const, int))Addr::DESC::DelayedDisconnect__int)(this, iSec);
    }

    void DESC::Destroy() {
        ((void(*)(DESC * const))Addr::DESC::Destroy)(this);
    }

    void DESC::DisconnectOfSameLogin() {
        ((void(*)(DESC * const))Addr::DESC::DisconnectOfSameLogin)(this);
    }

    bool DESC::FinishHandshake(size_t agreed_length, const void * buffer, size_t length) {
        return ((bool(*)(DESC * const, size_t, const void *, size_t))Addr::DESC::FinishHandshake__size_t_const_void__size_t)(this, agreed_length, buffer, length);
    }

    void DESC::FlushOutput() {
        ((void(*)(DESC * const))Addr::DESC::FlushOutput)(this);
    }

    DWORD DESC::GetBillingExpireSecond() {
        return ((DWORD(*)(DESC * const))Addr::DESC::GetBillingExpireSecond)(this);
    }

    DWORD DESC::GetClientTime() {
        return ((DWORD(*)(DESC * const))Addr::DESC::GetClientTime)(this);
    }

    BYTE DESC::GetEmpire() {
        return ((BYTE(*)(DESC * const))Addr::DESC::GetEmpire)(this);
    }

    DWORD DESC::GetLoginKey() {
        return ((DWORD(*)(DESC * const))Addr::DESC::GetLoginKey)(this);
    }

    unsigned long DESC::GetMatrixCols() {
        return ((unsigned long(*)(DESC * const))Addr::DESC::GetMatrixCols)(this);
    }

    unsigned long DESC::GetMatrixRows() {
        return ((unsigned long(*)(DESC * const))Addr::DESC::GetMatrixRows)(this);
    }

    BYTE DESC::GetSequence() {
        return ((BYTE(*)(DESC * const))Addr::DESC::GetSequence)(this);
    }

    BYTE DESC::GetType() {
        return ((BYTE(*)(DESC * const))Addr::DESC::GetType)(this);
    }

    bool DESC::HandshakeProcess(DWORD dwTime, long lDelta, bool bInfiniteRetry) {
        return ((bool(*)(DESC * const, DWORD, long, bool))Addr::DESC::HandshakeProcess__DWORD_long_bool)(this, dwTime, lDelta, bInfiniteRetry);
    }

    void DESC::Initialize() {
        ((void(*)(DESC * const))Addr::DESC::Initialize)(this);
    }

    bool DESC::IsAdminMode() {
        return ((bool(*)(DESC * const))Addr::DESC::IsAdminMode)(this);
    }

    bool DESC::IsCipherPrepared() {
        return ((bool(*)(DESC * const))Addr::DESC::IsCipherPrepared)(this);
    }

    bool DESC::IsHandshaking() {
        return ((bool(*)(DESC * const))Addr::DESC::IsHandshaking)(this);
    }

    bool DESC::IsPong() {
        return ((bool(*)(DESC * const))Addr::DESC::IsPong)(this);
    }

    void DESC::LargePacket(const void * c_pvData, int iSize) {
        ((void(*)(DESC * const, const void *, int))Addr::DESC::LargePacket__const_void__int)(this, c_pvData, iSize);
    }

    void DESC::Log(const char * format, ...) {
        va_list va;
        va_start(va, format);
        char buffer[513];
        vsnprintf(buffer, 513, format, va);
        va_end(va);
        ((void(*)(DESC * const, const char *, ...))Addr::DESC::Log__const_char___)(this, buffer);
    }

    void DESC::Packet(const void * c_pvData, int iSize) {
        ((void(*)(DESC * const, const void *, int))Addr::DESC::Packet__const_void__int)(this, c_pvData, iSize);
    }

    int DESC::ProcessInput() {
        return ((int(*)(DESC * const))Addr::DESC::ProcessInput)(this);
    }

    int DESC::ProcessOutput() {
        return ((int(*)(DESC * const))Addr::DESC::ProcessOutput)(this);
    }

    void DESC::SendHandshake(DWORD dwCurTime, long lNewDelta) {
        ((void(*)(DESC * const, DWORD, long))Addr::DESC::SendHandshake__DWORD_long)(this, dwCurTime, lNewDelta);
    }

    void DESC::SendKeyAgreement() {
        ((void(*)(DESC * const))Addr::DESC::SendKeyAgreement)(this);
    }

    void DESC::SendKeyAgreementCompleted() {
        ((void(*)(DESC * const))Addr::DESC::SendKeyAgreementCompleted)(this);
    }

    void DESC::SendLoginSuccessPacket() {
        ((void(*)(DESC * const))Addr::DESC::SendLoginSuccessPacket)(this);
    }

    void DESC::SetAdminMode() {
        ((void(*)(DESC * const))Addr::DESC::SetAdminMode)(this);
    }

    void DESC::SetBillingExpireSecond(DWORD dwSec) {
        ((void(*)(DESC * const, DWORD))Addr::DESC::SetBillingExpireSecond__DWORD)(this, dwSec);
    }

    void DESC::SetLoginKey(CLoginKey * pkKey) {
        ((void(*)(DESC * const, CLoginKey *))Addr::DESC::SetLoginKey__CLoginKey_)(this, pkKey);
    }

    void DESC::SetLoginKey(DWORD dwKey) {
        ((void(*)(DESC * const, DWORD))Addr::DESC::SetLoginKey__DWORD)(this, dwKey);
    }

    void DESC::SetMatrixCardRowsAndColumns(unsigned long rows, unsigned long cols) {
        ((void(*)(DESC * const, unsigned long, unsigned long))Addr::DESC::SetMatrixCardRowsAndColumns__unsigned_long_unsigned_long)(this, rows, cols);
    }

    void DESC::SetNextSequence() {
        ((void(*)(DESC * const))Addr::DESC::SetNextSequence)(this);
    }

    void DESC::SetPhase(int _phase) {
        ((void(*)(DESC * const, int))Addr::DESC::SetPhase__int)(this, _phase);
    }

    void DESC::SetPong(bool b) {
        ((void(*)(DESC * const, bool))Addr::DESC::SetPong__bool)(this, b);
    }

    void DESC::SetRelay(const char * c_pszName) {
        ((void(*)(DESC * const, const char *))Addr::DESC::SetRelay__const_char_)(this, c_pszName);
    }

    bool DESC::Setup(LPFDWATCH _fdw, socket_t _fd, const sockaddr_in & c_rSockAddr, DWORD _handle, DWORD _handshake) {
        return ((bool(*)(DESC * const, LPFDWATCH, socket_t, const sockaddr_in &, DWORD, DWORD))Addr::DESC::Setup__LPFDWATCH_socket_t_const_sockaddr_in__DWORD_DWORD)(this, _fdw, _fd, c_rSockAddr, _handle, _handshake);
    }

    void DESC::StartHandshake(DWORD _handshake) {
        ((void(*)(DESC * const, DWORD))Addr::DESC::StartHandshake__DWORD)(this, _handshake);
    }

    void DESC::UDPGrant(const sockaddr_in & c_rSockAddr) {
        ((void(*)(DESC * const, const sockaddr_in &))Addr::DESC::UDPGrant__const_sockaddr_in_)(this, c_rSockAddr);
    }

    void DESC::push_seq(BYTE hdr, BYTE seq) {
        ((void(*)(DESC * const, BYTE, BYTE))Addr::DESC::push_seq__BYTE_BYTE)(this, hdr, seq);
    }

    DESC::~DESC() {
        ((void(*)(DESC * const))Addr::DESC::__DESC)(this);
    }

    TAccountTable& DESC::GetAccountTable() {
        return m_accountTable;
    }

    LPCHARACTER DESC::GetCharacter() {
        return m_lpCharacter;
    }

    bool DESC::IsPhase(int phase) const {
        return this->m_iPhase == phase;
    }
}
