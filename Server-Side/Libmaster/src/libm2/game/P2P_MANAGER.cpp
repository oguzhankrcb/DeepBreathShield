/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "P2P_MANAGER.hpp"
namespace libm2 {

    void P2P_MANAGER::Boot(LPDESC a1) {
        ((void(*)(P2P_MANAGER * const, LPDESC))Addr::P2P_MANAGER::Boot__LPDESC)(this, a1);
    }

    void P2P_MANAGER::EraseUserByDesc(LPDESC a1) {
        ((void(*)(P2P_MANAGER * const, LPDESC))Addr::P2P_MANAGER::EraseUserByDesc__LPDESC)(this, a1);
    }

    CCI * P2P_MANAGER::Find(const char * c_pszName) {
        return ((CCI * (*)(P2P_MANAGER * const, const char *))Addr::P2P_MANAGER::Find__const_char_)(this, c_pszName);
    }

    CCI * P2P_MANAGER::FindByPID(DWORD pid) {
        return ((CCI * (*)(P2P_MANAGER * const, DWORD))Addr::P2P_MANAGER::FindByPID__DWORD)(this, pid);
    }

    void P2P_MANAGER::FlushOutput() {
        ((void(*)(P2P_MANAGER * const))Addr::P2P_MANAGER::FlushOutput)(this);
    }

    int P2P_MANAGER::GetCount() {
        return ((int(*)(P2P_MANAGER * const))Addr::P2P_MANAGER::GetCount)(this);
    }

    int P2P_MANAGER::GetEmpireUserCount(int idx) {
        return ((int(*)(P2P_MANAGER * const, int))Addr::P2P_MANAGER::GetEmpireUserCount__int)(this, idx);
    }

    void P2P_MANAGER::Login(LPDESC d, const TPacketGGLogin * p) {
        ((void(*)(P2P_MANAGER * const, LPDESC, const TPacketGGLogin *))Addr::P2P_MANAGER::Login__LPDESC_const_TPacketGGLogin_)(this, d, p);
    }

    void P2P_MANAGER::Logout(CCI * pkCCI) {
        ((void(*)(P2P_MANAGER * const, CCI *))Addr::P2P_MANAGER::Logout__CCI_)(this, pkCCI);
    }

    void P2P_MANAGER::Logout(const char * c_pszName) {
        ((void(*)(P2P_MANAGER * const, const char *))Addr::P2P_MANAGER::Logout__const_char_)(this, c_pszName);
    }

    P2P_MANAGER::P2P_MANAGER() {
        ((void(*)(P2P_MANAGER * const))Addr::P2P_MANAGER::P2P_MANAGER)(this);
    }

    void P2P_MANAGER::RegisterAcceptor(LPDESC d) {
        ((void(*)(P2P_MANAGER * const, LPDESC))Addr::P2P_MANAGER::RegisterAcceptor__LPDESC)(this, d);
    }

    void P2P_MANAGER::RegisterConnector(LPDESC d) {
        ((void(*)(P2P_MANAGER * const, LPDESC))Addr::P2P_MANAGER::RegisterConnector__LPDESC)(this, d);
    }

    void P2P_MANAGER::Send(const void * c_pvData, int iSize, LPDESC except) {
        ((void(*)(P2P_MANAGER * const, const void *, int, LPDESC))Addr::P2P_MANAGER::Send__const_void__int_LPDESC)(this, c_pvData, iSize, except);
    }

    void P2P_MANAGER::UnregisterAcceptor(LPDESC d) {
        ((void(*)(P2P_MANAGER * const, LPDESC))Addr::P2P_MANAGER::UnregisterAcceptor__LPDESC)(this, d);
    }

    void P2P_MANAGER::UnregisterConnector(LPDESC d) {
        ((void(*)(P2P_MANAGER * const, LPDESC))Addr::P2P_MANAGER::UnregisterConnector__LPDESC)(this, d);
    }

    P2P_MANAGER::~P2P_MANAGER() {
        ((void(*)(P2P_MANAGER * const))Addr::P2P_MANAGER::__P2P_MANAGER)(this);
    }

}
