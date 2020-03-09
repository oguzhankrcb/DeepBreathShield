/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputProcessor.hpp"
#include "../addr.hpp"
#include "DESC.hpp"
namespace libm2 {

    void CInputProcessor::BindPacketInfo(CPacketInfo * pPacketInfo) {
        ((void(*)(CInputProcessor * const, CPacketInfo *))Addr::CInputProcessor::BindPacketInfo__CPacketInfo_)(this, pPacketInfo);
    }

    CInputProcessor::CInputProcessor() {
        ((void(*)(CInputProcessor * const))Addr::CInputProcessor::CInputProcessor)(this);
    }

    void CInputProcessor::Handshake(LPDESC d, const char * c_pData) {
        ((void(*)(CInputProcessor * const, LPDESC, const char *))Addr::CInputProcessor::Handshake__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputProcessor::Pong(LPDESC d) {
        ((void(*)(CInputProcessor * const, LPDESC))Addr::CInputProcessor::Pong__LPDESC)(this, d);
    }

    bool CInputProcessor::Process(LPDESC lpDesc, const void * c_pvOrig, int iBytes, int & r_iBytesProceed) {
        return ((bool(*)(CInputProcessor * const, LPDESC, const void *, int, int &))Addr::CInputProcessor::Process__LPDESC_const_void__int_int_)(this, lpDesc, c_pvOrig, iBytes, r_iBytesProceed);
    }

    void CInputProcessor::Version(LPCHARACTER ch, const char * c_pData) {
        ((void(*)(CInputProcessor * const, LPCHARACTER, const char *))Addr::CInputProcessor::Version__LPCHARACTER_const_char_)(this, ch, c_pData);
    }
}
