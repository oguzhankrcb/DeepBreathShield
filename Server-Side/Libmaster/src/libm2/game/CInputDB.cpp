/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CInputDB.hpp"
#include "../addr.hpp"
namespace libm2 {

    void CInputDB::AddBlockCountryIp(TPacketBlockCountryIp * data) {
        ((void(*)(CInputDB * const, TPacketBlockCountryIp *))Addr::CInputDB::AddBlockCountryIp__TPacketBlockCountryIp_)(this, data);
    }

    void CInputDB::AddMonarchMoney(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::AddMonarchMoney__LPDESC_const_char_)(this, d, data);
    }

    void CInputDB::AffectLoad(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::AffectLoad__LPDESC_const_char_)(this, d, c_pData);
    }

    int CInputDB::Analyze(LPDESC d, BYTE bHeader, const char * c_pData) {
        return ((int(*)(CInputDB * const, LPDESC, BYTE, const char *))Addr::CInputDB::Analyze__LPDESC_BYTE_const_char_)(this, d, bHeader, c_pData);
    }

    void CInputDB::AuthLogin(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::AuthLogin__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::AuthLoginOpenID(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::AuthLoginOpenID__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::BillingCheck(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::BillingCheck__const_char_)(this, c_pData);
    }

    void CInputDB::BillingExpire(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::BillingExpire__const_char_)(this, c_pData);
    }

    void CInputDB::BillingLogin(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::BillingLogin__const_char_)(this, c_pData);
    }

    void CInputDB::BillingRepair(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::BillingRepair__const_char_)(this, c_pData);
    }

    void CInputDB::BlockException(TPacketBlockException * data) {
        ((void(*)(CInputDB * const, TPacketBlockException *))Addr::CInputDB::BlockException__TPacketBlockException_)(this, data);
    }

    void CInputDB::Boot(const char * data) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::Boot__const_char_)(this, data);
    }

    void CInputDB::ChangeCharacterPriv(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::ChangeCharacterPriv__const_char_)(this, c_pData);
    }

    void CInputDB::ChangeEmpirePriv(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::ChangeEmpirePriv__const_char_)(this, c_pData);
    }

    void CInputDB::ChangeGuildPriv(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::ChangeGuildPriv__const_char_)(this, c_pData);
    }

    void CInputDB::ChangeMonarchLord(TPacketChangeMonarchLordACK * info) {
        ((void(*)(CInputDB * const, TPacketChangeMonarchLordACK *))Addr::CInputDB::ChangeMonarchLord__TPacketChangeMonarchLordACK_)(this, info);
    }

    void CInputDB::ChangeName(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::ChangeName__LPDESC_const_char_)(this, d, data);
    }

    void CInputDB::CreateObject(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::CreateObject__const_char_)(this, c_pData);
    }

    void CInputDB::DecMonarchMoney(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::DecMonarchMoney__LPDESC_const_char_)(this, d, data);
    }

    void CInputDB::DeleteObject(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::DeleteObject__const_char_)(this, c_pData);
    }

    void CInputDB::DetailLog(const TPacketNeedLoginLogInfo * info) {
        ((void(*)(CInputDB * const, const TPacketNeedLoginLogInfo *))Addr::CInputDB::DetailLog__const_TPacketNeedLoginLogInfo_)(this, info);
    }

    void CInputDB::EmpireSelect(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::EmpireSelect__LPDESC_const_char_)(this, d, c_pData);
    }

    BYTE CInputDB::GetType() {
        return ((BYTE(*)(CInputDB * const))Addr::CInputDB::GetType)(this);
    }

    void CInputDB::GuildAddMember(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildAddMember__const_char_)(this, c_pData);
    }

    void CInputDB::GuildChangeGrade(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildChangeGrade__const_char_)(this, c_pData);
    }

    void CInputDB::GuildChangeMaster(TPacketChangeGuildMaster * p) {
        ((void(*)(CInputDB * const, TPacketChangeGuildMaster *))Addr::CInputDB::GuildChangeMaster__TPacketChangeGuildMaster_)(this, p);
    }

    void CInputDB::GuildChangeMemberData(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildChangeMemberData__const_char_)(this, c_pData);
    }

    void CInputDB::GuildDisband(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildDisband__const_char_)(this, c_pData);
    }

    void CInputDB::GuildExpUpdate(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildExpUpdate__const_char_)(this, c_pData);
    }

    void CInputDB::GuildLadder(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildLadder__const_char_)(this, c_pData);
    }

    void CInputDB::GuildLoad(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildLoad__const_char_)(this, c_pData);
    }

    void CInputDB::GuildMoneyChange(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildMoneyChange__const_char_)(this, c_pData);
    }

    void CInputDB::GuildRemoveMember(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildRemoveMember__const_char_)(this, c_pData);
    }

    void CInputDB::GuildSkillRecharge() {
        ((void(*)(CInputDB * const))Addr::CInputDB::GuildSkillRecharge)(this);
    }

    void CInputDB::GuildSkillUpdate(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildSkillUpdate__const_char_)(this, c_pData);
    }

    void CInputDB::GuildSkillUsableChange(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildSkillUsableChange__const_char_)(this, c_pData);
    }

    void CInputDB::GuildWar(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildWar__const_char_)(this, c_pData);
    }

    void CInputDB::GuildWarBet(packet_GuildWarBet * p) {
        ((void(*)(CInputDB * const, packet_GuildWarBet *))Addr::CInputDB::GuildWarBet____63_)(this, p);
    }

    void CInputDB::GuildWarReserveAdd(TGuildWarReserve * p) {
        ((void(*)(CInputDB * const, TGuildWarReserve *))Addr::CInputDB::GuildWarReserveAdd__TGuildWarReserve_)(this, p);
    }

    void CInputDB::GuildWarReserveDelete(DWORD dwID) {
        ((void(*)(CInputDB * const, DWORD))Addr::CInputDB::GuildWarReserveDelete__DWORD)(this, dwID);
    }

    void CInputDB::GuildWarScore(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildWarScore__const_char_)(this, c_pData);
    }

    void CInputDB::GuildWithdrawMoney(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::GuildWithdrawMoney__const_char_)(this, c_pData);
    }

    void CInputDB::ItemLoad(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::ItemLoad__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::LoginAlready(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::LoginAlready__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::LoginSuccess(DWORD dwHandle, const char * data) {
        ((void(*)(CInputDB * const, DWORD, const char *))Addr::CInputDB::LoginSuccess__DWORD_const_char_)(this, dwHandle, data);
    }

    void CInputDB::MallLoad(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::MallLoad__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::MapLocations(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::MapLocations__const_char_)(this, c_pData);
    }

    void CInputDB::MarriageAdd(packet_MarriageAdd * p) {
        ((void(*)(CInputDB * const, packet_MarriageAdd *))Addr::CInputDB::MarriageAdd____64_)(this, p);
    }

    void CInputDB::MarriageRemove(packet_MarriageRemove * p) {
        ((void(*)(CInputDB * const, packet_MarriageRemove *))Addr::CInputDB::MarriageRemove____66_)(this, p);
    }

    void CInputDB::MarriageUpdate(packet_MarriageUpdate * p) {
        ((void(*)(CInputDB * const, packet_MarriageUpdate *))Addr::CInputDB::MarriageUpdate____65_)(this, p);
    }

    void CInputDB::MoneyLog(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::MoneyLog__const_char_)(this, c_pData);
    }

    void CInputDB::MyshopPricelistRes(LPDESC d, const TPacketMyshopPricelistHeader * p) {
        ((void(*)(CInputDB * const, LPDESC, const TPacketMyshopPricelistHeader *))Addr::CInputDB::MyshopPricelistRes__LPDESC_const_TPacketMyshopPricelistHeader_)(this, d, p);
    }

    void CInputDB::Notice(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::Notice__const_char_)(this, c_pData);
    }

    void CInputDB::P2P(const char * a1) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::P2P__const_char_)(this, a1);
    }

    void CInputDB::PartyAdd(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::PartyAdd__const_char_)(this, c_pData);
    }

    void CInputDB::PartyCreate(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::PartyCreate__const_char_)(this, c_pData);
    }

    void CInputDB::PartyDelete(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::PartyDelete__const_char_)(this, c_pData);
    }

    void CInputDB::PartyRemove(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::PartyRemove__const_char_)(this, c_pData);
    }

    void CInputDB::PartySetMemberLevel(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::PartySetMemberLevel__const_char_)(this, c_pData);
    }

    void CInputDB::PartyStateChange(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::PartyStateChange__const_char_)(this, c_pData);
    }

    void CInputDB::PlayerCreateFailure(LPDESC d, BYTE bType) {
        ((void(*)(CInputDB * const, LPDESC, BYTE))Addr::CInputDB::PlayerCreateFailure__LPDESC_BYTE)(this, d, bType);
    }

    void CInputDB::PlayerCreateSuccess(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::PlayerCreateSuccess__LPDESC_const_char_)(this, d, data);
    }

    void CInputDB::PlayerDeleteFail(LPDESC d) {
        ((void(*)(CInputDB * const, LPDESC))Addr::CInputDB::PlayerDeleteFail__LPDESC)(this, d);
    }

    void CInputDB::PlayerDeleteSuccess(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::PlayerDeleteSuccess__LPDESC_const_char_)(this, d, data);
    }

    void CInputDB::PlayerLoad(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::PlayerLoad__LPDESC_const_char_)(this, d, data);
    }

    bool CInputDB::Process(LPDESC d, const void * orig, int bytes, int & r_iBytesProceed) {
        return ((bool(*)(CInputDB * const, LPDESC, const void *, int, int &))Addr::CInputDB::Process__LPDESC_const_void__int_int_)(this, d, orig, bytes, r_iBytesProceed);
    }

    void CInputDB::QuestLoad(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::QuestLoad__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::ReloadAdmin(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::ReloadAdmin__const_char_)(this, c_pData);
    }

    void CInputDB::ReloadProto(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::ReloadProto__const_char_)(this, c_pData);
    }

    void CInputDB::SafeboxChangePasswordAnswer(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::SafeboxChangePasswordAnswer__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::SafeboxChangeSize(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::SafeboxChangeSize__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::SafeboxLoad(LPDESC d, const char * c_pData) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::SafeboxLoad__LPDESC_const_char_)(this, d, c_pData);
    }

    void CInputDB::SafeboxWrongPassword(LPDESC d) {
        ((void(*)(CInputDB * const, LPDESC))Addr::CInputDB::SafeboxWrongPassword__LPDESC)(this, d);
    }

    void CInputDB::SetEventFlag(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::SetEventFlag__const_char_)(this, c_pData);
    }

    void CInputDB::TakeMonarchMoney(LPDESC d, const char * data) {
        ((void(*)(CInputDB * const, LPDESC, const char *))Addr::CInputDB::TakeMonarchMoney__LPDESC_const_char_)(this, d, data);
    }

    void CInputDB::Time(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::Time__const_char_)(this, c_pData);
    }

    void CInputDB::UpdateLand(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::UpdateLand__const_char_)(this, c_pData);
    }

    void CInputDB::UpdateMonarchInfo(TMonarchInfo * info) {
        ((void(*)(CInputDB * const, TMonarchInfo *))Addr::CInputDB::UpdateMonarchInfo__TMonarchInfo_)(this, info);
    }

    void CInputDB::VCard(const char * c_pData) {
        ((void(*)(CInputDB * const, const char *))Addr::CInputDB::VCard__const_char_)(this, c_pData);
    }

    void CInputDB::WeddingEnd(packet_WeddingEnd * p) {
        ((void(*)(CInputDB * const, packet_WeddingEnd *))Addr::CInputDB::WeddingEnd____70_)(this, p);
    }

    void CInputDB::WeddingReady(packet_WeddingReady * p) {
        ((void(*)(CInputDB * const, packet_WeddingReady *))Addr::CInputDB::WeddingReady____68_)(this, p);
    }

    void CInputDB::WeddingRequest(packet_WeddingRequest * p) {
        ((void(*)(CInputDB * const, packet_WeddingRequest *))Addr::CInputDB::WeddingRequest____67_)(this, p);
    }

    void CInputDB::WeddingStart(packet_WeddingStart * p) {
        ((void(*)(CInputDB * const, packet_WeddingStart *))Addr::CInputDB::WeddingStart____69_)(this, p);
    }

    CInputDB::~CInputDB() {
        ((void(*)(CInputDB * const))Addr::CInputDB::__CInputDB)(this);
    }

}