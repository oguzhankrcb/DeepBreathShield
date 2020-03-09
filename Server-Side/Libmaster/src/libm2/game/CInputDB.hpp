/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CINPUTDB_HPP
#define __LIBM2_GAME_CINPUTDB_HPP
#include "CInputProcessor.hpp"
#include "packet.hpp"
#include "CPacketInfo.hpp"
struct TGuildWarReserve;
namespace libm2 {

    class CInputDB : public CInputProcessor {
    protected:
        DWORD m_dwHandle;
    public:
        virtual bool Process(LPDESC, const void *, int, int &);
        virtual BYTE GetType(void);
    protected:
        ~CInputDB();
        virtual int Analyze(LPDESC, BYTE, const char *);
        void MapLocations(const char *);
        void LoginSuccess(DWORD, const char *);
        void PlayerCreateFailure(LPDESC, BYTE);
        void PlayerDeleteSuccess(LPDESC, const char *);
        void PlayerDeleteFail(LPDESC);
        void PlayerLoad(LPDESC, const char *);
        void PlayerCreateSuccess(LPDESC, const char *);
        void Boot(const char *);
        void QuestLoad(LPDESC, const char *);
        void SafeboxLoad(LPDESC, const char *);
        void SafeboxChangeSize(LPDESC, const char *);
        void SafeboxWrongPassword(LPDESC);
        void SafeboxChangePasswordAnswer(LPDESC, const char *);
        void MallLoad(LPDESC, const char *);
        void EmpireSelect(LPDESC, const char *);
        void P2P(const char *);
        void ItemLoad(LPDESC, const char *);
        void AffectLoad(LPDESC, const char *);
        void GuildLoad(const char *);
        void GuildSkillUpdate(const char *);
        void GuildSkillRecharge(void);
        void GuildExpUpdate(const char *);
        void GuildAddMember(const char *);
        void GuildRemoveMember(const char *);
        void GuildChangeGrade(const char *);
        void GuildChangeMemberData(const char *);
        void GuildDisband(const char *);
        void GuildLadder(const char *);
        void GuildWar(const char *);
        void GuildWarScore(const char *);
        void GuildSkillUsableChange(const char *);
        void GuildMoneyChange(const char *);
        void GuildWithdrawMoney(const char *);
        void GuildWarReserveAdd(TGuildWarReserve *);
        void GuildWarReserveUpdate(TGuildWarReserve *);
        void GuildWarReserveDelete(DWORD);
        void GuildWarBet(packet_GuildWarBet *);
        void GuildChangeMaster(TPacketChangeGuildMaster *);
        void LoginAlready(LPDESC, const char *);
        void PartyCreate(const char *);
        void PartyDelete(const char *);
        void PartyAdd(const char *);
        void PartyRemove(const char *);
        void PartyStateChange(const char *);
        void PartySetMemberLevel(const char *);
        void Time(const char *);
        void ReloadProto(const char *);
        void ChangeName(LPDESC, const char *);
        void AuthLogin(LPDESC, const char *);
        void AuthLoginOpenID(LPDESC, const char *);
        void ItemAward(const char *);
        void ChangeEmpirePriv(const char *);
        void ChangeGuildPriv(const char *);
        void ChangeCharacterPriv(const char *);
        void MoneyLog(const char *);
        void SetEventFlag(const char *);
        void BillingRepair(const char *);
        void BillingExpire(const char *);
        void BillingLogin(const char *);
        void BillingCheck(const char *);
        void VCard(const char *);
        void CreateObject(const char *);
        void DeleteObject(const char *);
        void UpdateLand(const char *);
        void Notice(const char *);
        void MarriageAdd(packet_MarriageAdd *);
        void MarriageUpdate(packet_MarriageUpdate *);
        void MarriageRemove(packet_MarriageRemove *);
        void WeddingRequest(packet_WeddingRequest *);
        void WeddingReady(packet_WeddingReady *);
        void WeddingStart(packet_WeddingStart *);
        void WeddingEnd(packet_WeddingEnd *);
        void TakeMonarchMoney(LPDESC, const char *);
        void AddMonarchMoney(LPDESC, const char *);
        void DecMonarchMoney(LPDESC, const char *);
        void SetMonarch(LPDESC, const char *);
        void ChangeMonarchLord(TPacketChangeMonarchLordACK *);
        void UpdateMonarchInfo(TMonarchInfo *);
        void AddBlockCountryIp(TPacketBlockCountryIp *);
        void BlockException(TPacketBlockException *);
        void MyshopPricelistRes(LPDESC, const TPacketMyshopPricelistHeader *);
        void ReloadAdmin(const char *);
        void DetailLog(const TPacketNeedLoginLogInfo *);
    };
}
#endif // __LIBM2_GAME_CINPUTDB_HPP
