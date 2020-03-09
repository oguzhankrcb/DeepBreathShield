/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CGuildManager.hpp"
namespace libm2 {

    CGuildManager::CGuildManager() {
        ((void(*)(CGuildManager * const))Addr::CGuildManager::CGuildManager)(this);
    }

    void CGuildManager::CancelWar(DWORD guild_id1, DWORD guild_id2) {
        ((void(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::CancelWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    void CGuildManager::ChangeMaster(DWORD dwGID) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::ChangeMaster__DWORD)(this, dwGID);
    }

    DWORD CGuildManager::CreateGuild(TGuildCreateParameter & gcp) {
        return ((DWORD(*)(CGuildManager * const, TGuildCreateParameter &))Addr::CGuildManager::CreateGuild__TGuildCreateParameter_)(this, gcp);
    }

    void CGuildManager::DeclareWar(DWORD guild_id1, DWORD guild_id2, BYTE bType) {
        ((void(*)(CGuildManager * const, DWORD, DWORD, BYTE))Addr::CGuildManager::DeclareWar__DWORD_DWORD_BYTE)(this, guild_id1, guild_id2, bType);
    }

    void CGuildManager::DisbandGuild(DWORD guild_id) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::DisbandGuild__DWORD)(this, guild_id);
    }

    bool CGuildManager::EndWar(DWORD guild_id1, DWORD guild_id2) {
        return ((bool(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::EndWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    CGuild * CGuildManager::FindGuild(DWORD guild_id) {
        return ((CGuild * (*)(CGuildManager * const, DWORD))Addr::CGuildManager::FindGuild__DWORD)(this, guild_id);
    }

    CGuild * CGuildManager::FindGuildByName(std::string guild_name) {
        return ((CGuild * (*)(CGuildManager * const, std::string))Addr::CGuildManager::FindGuildByName__const_std_locale_string_)(this, guild_name);
    }

    void CGuildManager::GetAroundRankString(DWORD dwMyGuild, char * buffer, size_t buflen) {
        ((void(*)(CGuildManager * const, DWORD, char *, size_t))Addr::CGuildManager::GetAroundRankString__DWORD_char__size_t)(this, dwMyGuild, buffer, buflen);
    }

    int CGuildManager::GetDisbandDelay() {
        return ((int(*)(CGuildManager * const))Addr::CGuildManager::GetDisbandDelay)(this);
    }

    void CGuildManager::GetHighRankString(DWORD a1, char * a2, size_t a3) {
        ((void(*)(CGuildManager * const, DWORD, char *, size_t))Addr::CGuildManager::GetHighRankString__DWORD_char__size_t)(this, a1, a2, a3);
    }

    CGuild * CGuildManager::GetLinkedGuild(DWORD pid) {
        return ((CGuild * (*)(CGuildManager * const, DWORD))Addr::CGuildManager::GetLinkedGuild__DWORD)(this, pid);
    }

    int CGuildManager::GetRank(CGuild * g) {
        return ((int(*)(CGuildManager * const, CGuild *))Addr::CGuildManager::GetRank__CGuild_)(this, g);
    }

    std::vector<CGuildWarReserveForGame*, std::allocator<CGuildWarReserveForGame*> > & CGuildManager::GetReserveWarRef() {
        return ((std::vector<CGuildWarReserveForGame*, std::allocator<CGuildWarReserveForGame*> > &(*)(CGuildManager * const))Addr::CGuildManager::GetReserveWarRef)(this);
    }

    int CGuildManager::GetWithdrawDelay() {
        return ((int(*)(CGuildManager * const))Addr::CGuildManager::GetWithdrawDelay)(this);
    }

    void CGuildManager::Initialize() {
        ((void(*)(CGuildManager * const))Addr::CGuildManager::Initialize)(this);
    }

    bool CGuildManager::IsBet(DWORD dwID, const char * c_pszLogin) {
        return ((bool(*)(CGuildManager * const, DWORD, const char *))Addr::CGuildManager::IsBet__DWORD_const_char_)(this, dwID, c_pszLogin);
    }

    void CGuildManager::Kill(LPCHARACTER killer, LPCHARACTER victim) {
        ((void(*)(CGuildManager * const, LPCHARACTER, LPCHARACTER))Addr::CGuildManager::Kill__LPCHARACTER_LPCHARACTER)(this, killer, victim);
    }

    void CGuildManager::Link(DWORD pid, CGuild * guild) {
        ((void(*)(CGuildManager * const, DWORD, CGuild *))Addr::CGuildManager::Link__DWORD_CGuild_)(this, pid, guild);
    }

    void CGuildManager::LoadGuild(DWORD guild_id) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::LoadGuild__DWORD)(this, guild_id);
    }

    void CGuildManager::LoginMember(LPCHARACTER ch) {
        ((void(*)(CGuildManager * const, LPCHARACTER))Addr::CGuildManager::LoginMember__LPCHARACTER)(this, ch);
    }

    void CGuildManager::P2PLoginMember(DWORD pid) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::P2PLoginMember__DWORD)(this, pid);
    }

    void CGuildManager::P2PLogoutMember(DWORD pid) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::P2PLogoutMember__DWORD)(this, pid);
    }

    void CGuildManager::RefuseWar(DWORD guild_id1, DWORD guild_id2) {
        ((void(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::RefuseWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    void CGuildManager::RequestCancelWar(DWORD guild_id1, DWORD guild_id2) {
        ((void(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::RequestCancelWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    void CGuildManager::RequestEndWar(DWORD guild_id1, DWORD guild_id2) {
        ((void(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::RequestEndWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    void CGuildManager::RequestWarOver(DWORD dwGuild1, DWORD dwGuild2, DWORD dwGuildWinner, long lReward) {
        ((void(*)(CGuildManager * const, DWORD, DWORD, DWORD, long))Addr::CGuildManager::RequestWarOver__DWORD_DWORD_DWORD_long)(this, dwGuild1, dwGuild2, dwGuildWinner, lReward);
    }

    void CGuildManager::ReserveWar(DWORD dwGuild1, DWORD dwGuild2, BYTE bType) {
        ((void(*)(CGuildManager * const, DWORD, DWORD, BYTE))Addr::CGuildManager::ReserveWar__DWORD_DWORD_BYTE)(this, dwGuild1, dwGuild2, bType);
    }

    void CGuildManager::ReserveWarAdd(TGuildWarReserve * p) {
        ((void(*)(CGuildManager * const, TGuildWarReserve *))Addr::CGuildManager::ReserveWarAdd__TGuildWarReserve_)(this, p);
    }

    void CGuildManager::ReserveWarBet($_63 * a1) {
        ((void(*)(CGuildManager * const, $_63 *))Addr::CGuildManager::ReserveWarBet____63_)(this, a1);
    }

    void CGuildManager::ReserveWarDelete(DWORD dwID) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::ReserveWarDelete__DWORD)(this, dwID);
    }

    void CGuildManager::SendGuildWar(LPCHARACTER ch) {
        ((void(*)(CGuildManager * const, LPCHARACTER))Addr::CGuildManager::SendGuildWar__LPCHARACTER)(this, ch);
    }

    void CGuildManager::ShowGuildWarList(LPCHARACTER ch) {
        ((void(*)(CGuildManager * const, LPCHARACTER))Addr::CGuildManager::ShowGuildWarList__LPCHARACTER)(this, ch);
    }

    void CGuildManager::SkillRecharge() {
        ((void(*)(CGuildManager * const))Addr::CGuildManager::SkillRecharge)(this);
    }

    void CGuildManager::StartWar(DWORD guild_id1, DWORD guild_id2) {
        ((void(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::StartWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    void CGuildManager::StopAllGuildWar() {
        ((void(*)(CGuildManager * const))Addr::CGuildManager::StopAllGuildWar)(this);
    }

    CGuild * CGuildManager::TouchGuild(DWORD guild_id) {
        return ((CGuild * (*)(CGuildManager * const, DWORD))Addr::CGuildManager::TouchGuild__DWORD)(this, guild_id);
    }

    void CGuildManager::Unlink(DWORD pid) {
        ((void(*)(CGuildManager * const, DWORD))Addr::CGuildManager::Unlink__DWORD)(this, pid);
    }

    void CGuildManager::WaitStartWar(DWORD guild_id1, DWORD guild_id2) {
        ((void(*)(CGuildManager * const, DWORD, DWORD))Addr::CGuildManager::WaitStartWar__DWORD_DWORD)(this, guild_id1, guild_id2);
    }

    void CGuildManager::WarOver(DWORD guild_id1, DWORD guild_id2, bool bDraw) {
        ((void(*)(CGuildManager * const, DWORD, DWORD, bool))Addr::CGuildManager::WarOver__DWORD_DWORD_bool)(this, guild_id1, guild_id2, bDraw);
    }

    CGuildManager::~CGuildManager() {
        ((void(*)(CGuildManager * const))Addr::CGuildManager::__CGuildManager)(this);
    }

}
