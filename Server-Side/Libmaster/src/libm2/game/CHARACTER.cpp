/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHARACTER.hpp"
#include "../addr.hpp"
#include "VID.hpp"
#include <cstdio>
namespace libm2 {

    void CHARACTER::AcceptToParty(LPCHARACTER member) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::AcceptToParty__LPCHARACTER)(this, member);
    }

    bool CHARACTER::AddAffect(DWORD dwType, BYTE bApplyOn, long lApplyValue, DWORD dwFlag, long lDuration, long lSPCost, bool bOverride, bool IsCube) {
        return ((bool(*)(CHARACTER * const, DWORD, BYTE, long, DWORD, long, long, bool, bool))Addr::CHARACTER::AddAffect__DWORD_BYTE_long_DWORD_long_long_bool_bool)(this, dwType, bApplyOn, lApplyValue, dwFlag, lDuration, lSPCost, bOverride, IsCube);
    }

    void CHARACTER::AggregateMonster() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::AggregateMonster)(this);
    }

    void CHARACTER::ApplyMobAttribute(const TMobTable * table) {
        ((void(*)(CHARACTER * const, const TMobTable *))Addr::CHARACTER::ApplyMobAttribute__const_TMobTable_)(this, table);
    }

    void CHARACTER::ApplyPoint(BYTE bApplyType, int iVal) {
        ((void(*)(CHARACTER * const, BYTE, int))Addr::CHARACTER::ApplyPoint__BYTE_int)(this, bApplyType, iVal);
    }

    void CHARACTER::AssignTriggers(const TMobTable * table) {
        ((void(*)(CHARACTER * const, const TMobTable *))Addr::CHARACTER::AssignTriggers__const_TMobTable_)(this, table);
    }

    bool CHARACTER::Attack(LPCHARACTER pkVictim, BYTE bType) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER, BYTE))Addr::CHARACTER::Attack__LPCHARACTER_BYTE)(this, pkVictim, bType);
    }

    void CHARACTER::AttackedByFire(LPCHARACTER pkAttacker, int amount, int count) {
        ((void(*)(CHARACTER * const, LPCHARACTER, int, int))Addr::CHARACTER::AttackedByFire__LPCHARACTER_int_int)(this, pkAttacker, amount, count);
    }

    void CHARACTER::AttackedByPoison(LPCHARACTER pkAttacker) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::AttackedByPoison__LPCHARACTER)(this, pkAttacker);
    }

    void CHARACTER::AttractRanger() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::AttractRanger)(this);
    }

    void CHARACTER::AutoGiveItem(LPITEM item, bool longOwnerShip) {
        ((void(*)(CHARACTER * const, LPITEM, bool))Addr::CHARACTER::AutoGiveItem__LPITEM_bool)(this, item, longOwnerShip);
    }

    LPITEM CHARACTER::AutoGiveItem(DWORD dwItemVnum, BYTE bCount, int iRarePct, bool bMsg) {
        return ((LPITEM(*)(CHARACTER * const, DWORD, BYTE, int, bool))Addr::CHARACTER::AutoGiveItem__DWORD_BYTE_int_bool)(this, dwItemVnum, bCount, iRarePct, bMsg);
    }

    void CHARACTER::AutoRecoveryItemProcess(const EAffectTypes type) {
        ((void(*)(CHARACTER * const, const EAffectTypes))Addr::CHARACTER::AutoRecoveryItemProcess__const_EAffectTypes)(this, type);
    }

    void CHARACTER::BeginFight(LPCHARACTER pkVictim) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::BeginFight__LPCHARACTER)(this, pkVictim);
    }

    void CHARACTER::BeginStateEmpty() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::BeginStateEmpty)(this);
    }

    void CHARACTER::BroadcastTargetPacket() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::BroadcastTargetPacket)(this);
    }

    void CHARACTER::BuffOnAttr_AddBuffsFromItem(LPITEM item) {
        ((void(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::BuffOnAttr_AddBuffsFromItem__LPITEM)(this, item);
    }

    void CHARACTER::BuffOnAttr_RemoveBuffsFromItem(LPITEM item) {
        ((void(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::BuffOnAttr_RemoveBuffsFromItem__LPITEM)(this, item);
    }

    void CHARACTER::BuffOnAttr_ValueChange(BYTE bType, BYTE bOldValue, BYTE bNewValue) {
        ((void(*)(CHARACTER * const, BYTE, BYTE, BYTE))Addr::CHARACTER::BuffOnAttr_ValueChange__BYTE_BYTE_BYTE)(this, bType, bOldValue, bNewValue);
    }

    bool CHARACTER::BuildUpdatePartyPacket(TPacketGCPartyUpdate & out) {
        return ((bool(*)(CHARACTER * const, TPacketGCPartyUpdate &))Addr::CHARACTER::BuildUpdatePartyPacket__TPacketGCPartyUpdate_)(this, out);
    }

    CHARACTER::CHARACTER() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CHARACTER)(this);
    }

    void CHARACTER::CalculateMoveDuration() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CalculateMoveDuration)(this);
    }

    bool CHARACTER::CanBeginFight() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CanBeginFight)(this);
    }

    bool CHARACTER::CanDeposit() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CanDeposit)(this);
    }

    bool CHARACTER::CanDoCube() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CanDoCube)(this);
    }

    bool CHARACTER::CanFight() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CanFight)(this);
    }

    bool CHARACTER::CanHandleItem(bool bSkipCheckRefine, bool bSkipObserver) {
        return ((bool(*)(CHARACTER * const, bool, bool))Addr::CHARACTER::CanHandleItem__bool_bool)(this, bSkipCheckRefine, bSkipObserver);
    }

    bool CHARACTER::CanMove() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CanMove)(this);
    }

    bool CHARACTER::CanReceiveItem(LPCHARACTER from, LPITEM item) const {
        return ((bool(*)(const CHARACTER * const, LPCHARACTER, LPITEM))Addr::CHARACTER::CanReceiveItem__LPCHARACTER_LPITEM)(this, from, item);
    }

    bool CHARACTER::CanSummon(int iLeaderShip) {
        return ((bool(*)(CHARACTER * const, int))Addr::CHARACTER::CanSummon__int)(this, iLeaderShip);
    }

    bool CHARACTER::CanUseHorseSkill() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::CanUseHorseSkill)(this);
    }

    bool CHARACTER::CanUseMobSkill(unsigned int idx) const {
        return ((bool(*)(const CHARACTER * const, unsigned int))Addr::CHARACTER::CanUseMobSkill__unsigned_int)(this, idx);
    }

    bool CHARACTER::CanUseSkill(DWORD dwSkillVnum) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::CanUseSkill__DWORD)(this, dwSkillVnum);
    }

    bool CHARACTER::CanWarp() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CanWarp)(this);
    }

    bool CHARACTER::CannotMoveByAffect() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::CannotMoveByAffect)(this);
    }

    void CHARACTER::ChainQuickslotItem(LPITEM pItem, BYTE bType, BYTE bOldPos) {
        ((void(*)(CHARACTER * const, LPITEM, BYTE, BYTE))Addr::CHARACTER::ChainQuickslotItem__LPITEM_BYTE_BYTE)(this, pItem, bType, bOldPos);
    }

    int CHARACTER::ChangeEmpire(BYTE empire) {
        return ((int(*)(CHARACTER * const, BYTE))Addr::CHARACTER::ChangeEmpire__BYTE)(this, empire);
    }

    void CHARACTER::ChangeSafeboxSize(BYTE bSize) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::ChangeSafeboxSize__BYTE)(this, bSize);
    }

    bool CHARACTER::ChangeSex() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::ChangeSex)(this);
    }

    void CHARACTER::ChangeVictimByAggro(int iNewAggro, LPCHARACTER pNewVictim) {
        ((void(*)(CHARACTER * const, int, LPCHARACTER))Addr::CHARACTER::ChangeVictimByAggro__int_LPCHARACTER)(this, iNewAggro, pNewVictim);
    }

    void CHARACTER::ChatPacket(BYTE type, const char * format, ...) {
        va_list va;
        va_start(va, format);
        char buffer[513];
        vsnprintf(buffer, 513, format, va);
        va_end(va);
        ((void(*)(CHARACTER * const, BYTE, const char *, ...))Addr::CHARACTER::ChatPacket__BYTE_const_char___)(this, type, buffer);
    }

    void CHARACTER::CheckMaximumPoints() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CheckMaximumPoints)(this);
    }

    bool CHARACTER::CheckSkillHitCount(const BYTE SkillID, VID TargetVID) {
        return ((bool(*)(CHARACTER * const, const BYTE, VID))Addr::CHARACTER::CheckSkillHitCount__const_BYTE_const_VID_)(this, SkillID, TargetVID);
    }

    void CHARACTER::CheckTarget() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CheckTarget)(this);
    }

    void CHARACTER::ClearAffect(bool bSave) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::ClearAffect__bool)(this, bSave);
    }

    void CHARACTER::ClearHorseInfo() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearHorseInfo)(this);
    }

    void CHARACTER::ClearItem() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearItem)(this);
    }

    void CHARACTER::ClearQuestItemPtr() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearQuestItemPtr)(this);
    }

    void CHARACTER::ClearRefineMode() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearRefineMode)(this);
    }

    void CHARACTER::ClearSkill() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearSkill)(this);
    }

    void CHARACTER::ClearStone() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearStone)(this);
    }

    void CHARACTER::ClearSubSkill() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearSubSkill)(this);
    }

    void CHARACTER::ClearSync() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearSync)(this);
    }

    void CHARACTER::ClearTarget() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ClearTarget)(this);
    }

    void CHARACTER::CloseMall() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CloseMall)(this);
    }

    void CHARACTER::CloseMyShop() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CloseMyShop)(this);
    }

    void CHARACTER::CloseSafebox() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CloseSafebox)(this);
    }

    void CHARACTER::ComputeAffect(CAffect * pkAff, bool bAdd) {
        ((void(*)(CHARACTER * const, CAffect *, bool))Addr::CHARACTER::ComputeAffect__CAffect__bool)(this, pkAff, bAdd);
    }

    void CHARACTER::ComputeBattlePoints() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ComputeBattlePoints)(this);
    }

    int CHARACTER::ComputeCooltime(int time) {
        return ((int(*)(CHARACTER * const, int))Addr::CHARACTER::ComputeCooltime__int)(this, time);
    }

    void CHARACTER::ComputePassiveSkill(DWORD dwVnum) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::ComputePassiveSkill__DWORD)(this, dwVnum);
    }

    void CHARACTER::ComputePoints() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ComputePoints)(this);
    }

    int CHARACTER::ComputeRefineFee(int iCost, int iMultiply) const {
        return ((int(*)(const CHARACTER * const, int, int))Addr::CHARACTER::ComputeRefineFee__int_int)(this, iCost, iMultiply);
    }

    int CHARACTER::ComputeSkill(DWORD dwVnum, LPCHARACTER pkVictim, BYTE bSkillLevel) {
        return ((int(*)(CHARACTER * const, DWORD, LPCHARACTER, BYTE))Addr::CHARACTER::ComputeSkill__DWORD_LPCHARACTER_BYTE)(this, dwVnum, pkVictim, bSkillLevel);
    }

    int CHARACTER::ComputeSkillAtPosition(DWORD dwVnum, const PIXEL_POSITION & posTarget, BYTE bSkillLevel) {
        return ((int(*)(CHARACTER * const, DWORD, const PIXEL_POSITION &, BYTE))Addr::CHARACTER::ComputeSkillAtPosition__DWORD_const_PIXEL_POSITION__BYTE)(this, dwVnum, posTarget, bSkillLevel);
    }

    void CHARACTER::ComputeSkillPoints() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ComputeSkillPoints)(this);
    }

    void CHARACTER::ConfirmWithMsg(const char * szMsg, int iTimeout, DWORD dwRequestPID) {
        ((void(*)(CHARACTER * const, const char *, int, DWORD))Addr::CHARACTER::ConfirmWithMsg__const_char__int_DWORD)(this, szMsg, iTimeout, dwRequestPID);
    }

    int CHARACTER::CountEmptyInventory() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::CountEmptyInventory)(this);
    }

    size_t CHARACTER::CountMobSkill() const {
        return ((size_t(*)(const CHARACTER * const))Addr::CHARACTER::CountMobSkill)(this);
    }

    int CHARACTER::CountSpecifyItem(DWORD vnum) const {
        return ((int(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::CountSpecifyItem__DWORD)(this, vnum);
    }

    void CHARACTER::CowardEscape() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::CowardEscape)(this);
    }

    void CHARACTER::Create(const char * c_pszName, DWORD vid, bool isPC) {
        ((void(*)(CHARACTER * const, const char *, DWORD, bool))Addr::CHARACTER::Create__const_char__DWORD_bool)(this, c_pszName, vid, isPC);
    }

    void CHARACTER::CreateFly(BYTE bType, LPCHARACTER pkVictim) {
        ((void(*)(CHARACTER * const, BYTE, LPCHARACTER))Addr::CHARACTER::CreateFly__BYTE_LPCHARACTER)(this, bType, pkVictim);
    }

    void CHARACTER::CreatePlayerProto(TPlayerTable & tab) {
        ((void(*)(CHARACTER * const, TPlayerTable &))Addr::CHARACTER::CreatePlayerProto__TPlayerTable_)(this, tab);
    }

    bool CHARACTER::Damage(LPCHARACTER pAttacker, int dam, EDamageType type) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER, int, EDamageType))Addr::CHARACTER::Damage__LPCHARACTER_int_EDamageType)(this, pAttacker, dam, type);
    }

    void CHARACTER::Dead(LPCHARACTER pkKiller, bool bImmediateDead) {
        ((void(*)(CHARACTER * const, LPCHARACTER, bool))Addr::CHARACTER::Dead__LPCHARACTER_bool)(this, pkKiller, bImmediateDead);
    }

    void CHARACTER::DeathPenalty(BYTE bTown) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::DeathPenalty__BYTE)(this, bTown);
    }

    bool CHARACTER::DelQuickslot(BYTE pos) {
        return ((bool(*)(CHARACTER * const, BYTE))Addr::CHARACTER::DelQuickslot__BYTE)(this, pos);
    }

    void CHARACTER::DenyToParty(LPCHARACTER member) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::DenyToParty__LPCHARACTER)(this, member);
    }
    
    void CHARACTER::Destroy() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::Destroy)(this);
    }

    void CHARACTER::DetermineDropMetinStone() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::DetermineDropMetinStone)(this);
    }

    void CHARACTER::DisableCooltime() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::DisableCooltime)(this);
    }

    void CHARACTER::Disconnect(const char * c_pszReason) {
        ((void(*)(CHARACTER * const, const char *))Addr::CHARACTER::Disconnect__const_char_)(this, c_pszReason);
    }

    LPCHARACTER CHARACTER::DistributeExp() {
        return ((LPCHARACTER(*)(CHARACTER * const))Addr::CHARACTER::DistributeExp)(this);
    }

    void CHARACTER::DistributeHP(LPCHARACTER pkKiller) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::DistributeHP__LPCHARACTER)(this, pkKiller);
    }

    void CHARACTER::DistributeSP(LPCHARACTER pkKiller, int iMethod) {
        ((void(*)(CHARACTER * const, LPCHARACTER, int))Addr::CHARACTER::DistributeSP__LPCHARACTER_int)(this, pkKiller, iMethod);
    }

    bool CHARACTER::DoRefine(LPITEM item, bool bMoneyOnly) {
        return ((bool(*)(CHARACTER * const, LPITEM, bool))Addr::CHARACTER::DoRefine__LPITEM_bool)(this, item, bMoneyOnly);
    }

    bool CHARACTER::DoRefineWithScroll(LPITEM item) {
        return ((bool(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::DoRefineWithScroll__LPITEM)(this, item);
    }

    bool CHARACTER::DropGold(int gold) {
        return ((bool(*)(CHARACTER * const, int))Addr::CHARACTER::DropGold__int)(this, gold);
    }

    bool CHARACTER::DropItem(BYTE bCell, BYTE bCount) {
        return ((bool(*)(CHARACTER * const, BYTE, BYTE))Addr::CHARACTER::DropItem__BYTE_BYTE)(this, bCell, bCount);
    }

    void CHARACTER::EffectPacket(int enumEffectType) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::EffectPacket__int)(this, enumEffectType);
    }

    void CHARACTER::EncodeInsertPacket(LPENTITY entity) {
        ((void(*)(CHARACTER * const, LPENTITY))Addr::CHARACTER::EncodeInsertPacket__LPENTITY)(this, entity);
    }

    void CHARACTER::EncodeRemovePacket(LPENTITY entity) {
        ((void(*)(CHARACTER * const, LPENTITY))Addr::CHARACTER::EncodeRemovePacket__LPENTITY)(this, entity);
    }

    void CHARACTER::EndStateEmpty() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::EndStateEmpty)(this);
    }

    bool CHARACTER::EquipItem(LPITEM item) {
        return ((bool(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::EquipItem__LPITEM)(this, item);
    }

    bool CHARACTER::ExchangeStart(LPCHARACTER victim) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::ExchangeStart__LPCHARACTER)(this, victim);
    }

    void CHARACTER::ExitToSavedLocation() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ExitToSavedLocation)(this);
    }

    CAffect * CHARACTER::FindAffect(DWORD dwType, BYTE bApply) {
        return ((CAffect * (*)(CHARACTER * const, DWORD, BYTE))Addr::CHARACTER::FindAffect__DWORD_BYTE)(this, dwType, bApply);
    }

    LPCHARACTER CHARACTER::FindCharacterInView(const char * c_pszName, bool bFindPCOnly) {
        return ((LPCHARACTER(*)(CHARACTER * const, const char *, bool))Addr::CHARACTER::FindCharacterInView__const_char__bool)(this, c_pszName, bFindPCOnly);
    }

    LPITEM CHARACTER::FindItemByID(DWORD id) const {
        return ((LPITEM(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::FindItemByID__DWORD)(this, id);
    }

    LPITEM CHARACTER::FindSpecifyItem(DWORD vnum) const {
        return ((LPITEM(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::FindSpecifyItem__DWORD)(this, vnum);
    }

    void CHARACTER::FlushDelayedSaveItem() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::FlushDelayedSaveItem)(this);
    }

    void CHARACTER::FlyTarget(DWORD dwTargetVID, long x, long y, BYTE bHeader) {
        ((void(*)(CHARACTER * const, DWORD, long, long, BYTE))Addr::CHARACTER::FlyTarget__DWORD_long_long_BYTE)(this, dwTargetVID, x, y, bHeader);
    }

    bool CHARACTER::Follow(LPCHARACTER pkChr, float fMinDistance) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER, float))Addr::CHARACTER::Follow__LPCHARACTER_float)(this, pkChr, fMinDistance);
    }

    void CHARACTER::ForgetMyAttacker() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ForgetMyAttacker)(this);
    }

    DWORD CHARACTER::GetAID() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetAID)(this);
    }

    int CHARACTER::GetAlignment() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetAlignment)(this);
    }

    int CHARACTER::GetAllowedGold() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetAllowedGold)(this);
    }

    int CHARACTER::GetArrowAndBow(LPITEM * ppkBow, LPITEM * ppkArrow, int iArrowCount) {
        return ((int(*)(CHARACTER * const, LPITEM *, LPITEM *, int))Addr::CHARACTER::GetArrowAndBow__LPITEM__LPITEM__int)(this, ppkBow, ppkArrow, iArrowCount);
    }

    int CHARACTER::GetChainLightningMaxCount() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetChainLightningMaxCount)(this);
    }

    int CHARACTER::GetChangeEmpireCount() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetChangeEmpireCount)(this);
    }

    BYTE CHARACTER::GetCharType() {
        return ((BYTE(*)(CHARACTER * const))Addr::CHARACTER::GetCharType)(this);
    }

    BYTE CHARACTER::GetChatCounter() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetChatCounter)(this);
    }

    BYTE CHARACTER::GetComboIndex() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetComboIndex)(this);
    }

    BYTE CHARACTER::GetComboSequence() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetComboSequence)(this);
    }

    float CHARACTER::GetDistanceFromSafeboxOpen() const {
        return ((float(*)(const CHARACTER * const))Addr::CHARACTER::GetDistanceFromSafeboxOpen)(this);
    }

    LPDUNGEON CHARACTER::GetDungeonForce() const {
        return ((LPDUNGEON(*)(const CHARACTER * const))Addr::CHARACTER::GetDungeonForce)(this);
    }

    int CHARACTER::GetEmptyInventory(BYTE bSize) const {
        return ((int(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetEmptyInventory__BYTE)(this, bSize);
    }

    BYTE CHARACTER::GetGMLevel() {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetGMLevel)(this);
    }

    int CHARACTER::GetHPPct() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetHPPct)(this);
    }

    LPITEM CHARACTER::GetItem(BYTE bCell) const {
        return ((LPITEM(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetItem__BYTE)(this, bCell);
    }

    BYTE CHARACTER::GetJob() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetJob)(this);
    }

    DWORD CHARACTER::GetLastComboTime() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetLastComboTime)(this);
    }

    int CHARACTER::GetLeadershipSkillLevel() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetLeadershipSkillLevel)(this);
    }

    int CHARACTER::GetLimitPoint(BYTE type) const {
        return ((int(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetLimitPoint__BYTE)(this, type);
    }

    DWORD CHARACTER::GetMC(CHARACTER::MONARCH_INDEX e) const {
        return ((DWORD(*)(const CHARACTER * const, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::GetMC__CHARACTER_MONARCH_INDEX)(this, e);
    }

    DWORD CHARACTER::GetMCL(CHARACTER::MONARCH_INDEX e) const {
        return ((DWORD(*)(const CHARACTER * const, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::GetMCL__CHARACTER_MONARCH_INDEX)(this, e);
    }

    DWORD CHARACTER::GetMCLTime(CHARACTER::MONARCH_INDEX e) const {
        return ((DWORD(*)(const CHARACTER * const, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::GetMCLTime__CHARACTER_MONARCH_INDEX)(this, e);
    }

    CSafebox * CHARACTER::GetMall() const {
        return ((CSafebox * (*)(const CHARACTER * const))Addr::CHARACTER::GetMall)(this);
    }

    int CHARACTER::GetMarriageBonus(DWORD dwItemVnum, bool bSum) {
        return ((int(*)(CHARACTER * const, DWORD, bool))Addr::CHARACTER::GetMarriageBonus__DWORD_bool)(this, dwItemVnum, bSum);
    }

    LPCHARACTER CHARACTER::GetMarryPartner() const {
        return ((LPCHARACTER(*)(const CHARACTER * const))Addr::CHARACTER::GetMarryPartner)(this);
    }

    WORD CHARACTER::GetMobAttackRange() const {
        return ((WORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMobAttackRange)(this);
    }

    BYTE CHARACTER::GetMobBattleType() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetMobBattleType)(this);
    }

    DWORD CHARACTER::GetMobDamageMax() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMobDamageMax)(this);
    }

    DWORD CHARACTER::GetMobDamageMin() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMobDamageMin)(this);
    }

    float CHARACTER::GetMobDamageMultiply() const {
        return ((float(*)(const CHARACTER * const))Addr::CHARACTER::GetMobDamageMultiply)(this);
    }

    DWORD CHARACTER::GetMobDropItemVnum() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMobDropItemVnum)(this);
    }

    BYTE CHARACTER::GetMobRank() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetMobRank)(this);
    }

    BYTE CHARACTER::GetMobSize() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetMobSize)(this);
    }

    const TMobSkillInfo * CHARACTER::GetMobSkill(unsigned int idx) const {
        return ((const TMobSkillInfo * (*)(const CHARACTER * const, unsigned int))Addr::CHARACTER::GetMobSkill__unsigned_int)(this, idx);
    }

    const TMobTable & CHARACTER::GetMobTable() const {
        return ((const TMobTable & (*)(const CHARACTER * const))Addr::CHARACTER::GetMobTable)(this);
    }

    DWORD CHARACTER::GetMonsterDrainSPPoint() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMonsterDrainSPPoint)(this);
    }

    DWORD CHARACTER::GetMotionMode() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMotionMode)(this);
    }

    float CHARACTER::GetMoveMotionSpeed() const {
        return ((float(*)(const CHARACTER * const))Addr::CHARACTER::GetMoveMotionSpeed)(this);
    }

    float CHARACTER::GetMoveSpeed() const {
        return ((float(*)(const CHARACTER * const))Addr::CHARACTER::GetMoveSpeed)(this);
    }

    DWORD CHARACTER::GetMyHorseVnum() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetMyHorseVnum)(this);
    }

    const char * CHARACTER::GetName() const {
        return ((const char *(*)(const CHARACTER * const))Addr::CHARACTER::GetName)(this);
    }

    LPCHARACTER CHARACTER::GetNearestVictim(LPCHARACTER pkChr) {
        return ((LPCHARACTER(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::GetNearestVictim__LPCHARACTER)(this, pkChr);
    }

    DWORD CHARACTER::GetNextExp() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetNextExp)(this);
    }

    WORD CHARACTER::GetOriginalPart(BYTE bPartPos) const {
        return ((WORD(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetOriginalPart__BYTE)(this, bPartPos);
    }

    BYTE CHARACTER::GetPKMode() const {
        return ((BYTE(*)(const CHARACTER * const))Addr::CHARACTER::GetPKMode)(this);
    }

    WORD CHARACTER::GetPart(BYTE bPartPos) const {
        return ((WORD(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetPart__BYTE)(this, bPartPos);
    }

    int CHARACTER::GetPoint(BYTE type) const {
        return ((int(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetPoint__BYTE)(this, type);
    }

    DWORD CHARACTER::GetPolymorphItemVnum() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetPolymorphItemVnum)(this);
    }

    int CHARACTER::GetPolymorphPoint(BYTE type) const {
        return ((int(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetPolymorphPoint__BYTE)(this, type);
    }

    int CHARACTER::GetPolymorphPower() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetPolymorphPower)(this);
    }

    int CHARACTER::GetPremiumRemainSeconds(BYTE bType) const {
        return ((int(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetPremiumRemainSeconds__BYTE)(this, bType);
    }

    LPCHARACTER CHARACTER::GetProtege() const {
        return ((LPCHARACTER(*)(const CHARACTER * const))Addr::CHARACTER::GetProtege)(this);
    }

    int CHARACTER::GetQuestFlag(const std::string& flag) const {
        return ((int(*)(const CHARACTER * const, const std::string&))Addr::CHARACTER::GetQuestFlag__const_std_locale_string_)(this, flag);
    }

    LPITEM CHARACTER::GetQuestItemPtr() const {
        return ((LPITEM(*)(const CHARACTER * const))Addr::CHARACTER::GetQuestItemPtr)(this);
    }

    LPCHARACTER CHARACTER::GetQuestNPC() const {
        return ((LPCHARACTER(*)(const CHARACTER * const))Addr::CHARACTER::GetQuestNPC)(this);
    }

    bool CHARACTER::GetQuickslot(BYTE pos, TQuickslot ** ppSlot) {
        return ((bool(*)(CHARACTER * const, BYTE, TQuickslot **))Addr::CHARACTER::GetQuickslot__BYTE_TQuickslot_)(this, pos, ppSlot);
    }

    WORD CHARACTER::GetRaceNum() const {
        return ((WORD(*)(const CHARACTER * const))Addr::CHARACTER::GetRaceNum)(this);
    }

    int CHARACTER::GetRealAlignment() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetRealAlignment)(this);
    }

    int CHARACTER::GetRealPoint(BYTE type) const {
        return ((int(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetRealPoint__BYTE)(this, type);
    }

    CGuild * CHARACTER::GetRefineGuild() const {
        return ((CGuild * (*)(const CHARACTER * const))Addr::CHARACTER::GetRefineGuild)(this);
    }

    LPCHARACTER CHARACTER::GetRider() const {
        return ((LPCHARACTER(*)(const CHARACTER * const))Addr::CHARACTER::GetRider)(this);
    }

    CSafebox * CHARACTER::GetSafebox() const {
        return ((CSafebox * (*)(const CHARACTER * const))Addr::CHARACTER::GetSafebox)(this);
    }

    int CHARACTER::GetSafeboxSize() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetSafeboxSize)(this);
    }

    int CHARACTER::GetSkillLevel(DWORD dwVnum) const {
        return ((int(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::GetSkillLevel__DWORD)(this, dwVnum);
    }

    int CHARACTER::GetSkillMasterType(DWORD dwVnum) const {
        return ((int(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::GetSkillMasterType__DWORD)(this, dwVnum);
    }

    time_t CHARACTER::GetSkillNextReadTime(DWORD dwVnum) const {
        return ((time_t(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::GetSkillNextReadTime__DWORD)(this, dwVnum);
    }

    int CHARACTER::GetSkillPower(DWORD dwVnum, BYTE bLevel) const {
        return ((int(*)(const CHARACTER * const, DWORD, BYTE))Addr::CHARACTER::GetSkillPower__DWORD_BYTE)(this, dwVnum, bLevel);
    }

    int CHARACTER::GetSkillPowerByLevel(int level, bool bMob) const {
        return ((int(*)(const CHARACTER * const, int, bool))Addr::CHARACTER::GetSkillPowerByLevel__int_bool)(this, level, bMob);
    }

    DWORD CHARACTER::GetSkipComboAttackByTime() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetSkipComboAttackByTime)(this);
    }

    DWORD CHARACTER::GetStopTime() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetStopTime)(this);
    }

    DWORD CHARACTER::GetSummonVnum() const {
        return ((DWORD(*)(const CHARACTER * const))Addr::CHARACTER::GetSummonVnum)(this);
    }

    int CHARACTER::GetUsedSkillMasterType(DWORD dwVnum) {
        return ((int(*)(CHARACTER * const, DWORD))Addr::CHARACTER::GetUsedSkillMasterType__DWORD)(this, dwVnum);
    }

    int CHARACTER::GetValidComboInterval() const {
        return ((int(*)(const CHARACTER * const))Addr::CHARACTER::GetValidComboInterval)(this);
    }

    LPCHARACTER CHARACTER::GetVictim() const {
        return ((LPCHARACTER(*)(const CHARACTER * const))Addr::CHARACTER::GetVictim)(this);
    }

    LPITEM CHARACTER::GetWear(BYTE bCell) const {
        return ((LPITEM(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::GetWear__BYTE)(this, bCell);
    }

    void CHARACTER::GiveGold(int iAmount) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::GiveGold__int)(this, iAmount);
    }

    bool CHARACTER::GiveItem(LPCHARACTER victim, BYTE bCell) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER, BYTE))Addr::CHARACTER::GiveItem__LPCHARACTER_BYTE)(this, victim, bCell);
    }

    void CHARACTER::GiveRandomSkillBook() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::GiveRandomSkillBook)(this);
    }

    bool CHARACTER::GiveRecallItem(LPITEM item) {
        return ((bool(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::GiveRecallItem__LPITEM)(this, item);
    }

    void CHARACTER::GoHome() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::GoHome)(this);
    }

    bool CHARACTER::Goto(long x, long y) {
        return ((bool(*)(CHARACTER * const, long, long))Addr::CHARACTER::Goto__long_long)(this, x, y);
    }

    bool CHARACTER::HasMobSkill() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::HasMobSkill)(this);
    }

    bool CHARACTER::HasReviverInParty() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::HasReviverInParty)(this);
    }

    void CHARACTER::HorseDie() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::HorseDie)(this);
    }

    void CHARACTER::HorseSummon(bool bSummon, bool bFromFar, DWORD dwVnum, const char * pPetName) {
        ((void(*)(CHARACTER * const, bool, bool, DWORD, const char *))Addr::CHARACTER::HorseSummon__bool_bool_DWORD_const_char_)(this, bSummon, bFromFar, dwVnum, pPetName);
    }

    BYTE CHARACTER::IncreaseChatCounter() {
        return ((BYTE(*)(CHARACTER * const))Addr::CHARACTER::IncreaseChatCounter)(this);
    }

    void CHARACTER::IncreaseComboHackCount(int k) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::IncreaseComboHackCount__int)(this, k);
    }

    void CHARACTER::InitMC() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::InitMC)(this);
    }

    void CHARACTER::Initialize() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::Initialize)(this);
    }

    bool CHARACTER::IsAffectFlag(DWORD flag) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::IsAffectFlag__DWORD)(this, flag);
    }

    bool CHARACTER::IsAggressive() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsAggressive)(this);
    }

    bool CHARACTER::IsAttackMob() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsAttackMob)(this);
    }

    bool CHARACTER::IsBerserk() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsBerserk)(this);
    }

    bool CHARACTER::IsBerserker() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsBerserker)(this);
    }

    bool CHARACTER::IsChangeAttackPosition(LPCHARACTER target) const {
        return ((bool(*)(const CHARACTER * const, LPCHARACTER))Addr::CHARACTER::IsChangeAttackPosition__LPCHARACTER)(this, target);
    }

    bool CHARACTER::IsCoward() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsCoward)(this);
    }

    bool CHARACTER::IsDead() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsDead)(this);
    }

    bool CHARACTER::IsDeathBlow() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsDeathBlow)(this);
    }

    bool CHARACTER::IsDeathBlower() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsDeathBlower)(this);
    }

    bool CHARACTER::IsEmptyItemGrid(BYTE bCell, BYTE bSize, int iExceptionCell) const {
        return ((bool(*)(const CHARACTER * const, BYTE, BYTE, int))Addr::CHARACTER::IsEmptyItemGrid__BYTE_BYTE_int)(this, bCell, bSize, iExceptionCell);
    }

    bool CHARACTER::IsEquipUniqueGroup(DWORD dwGroupVnum) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::IsEquipUniqueGroup__DWORD)(this, dwGroupVnum);
    }

    bool CHARACTER::IsEquipUniqueItem(DWORD dwItemVnum) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::IsEquipUniqueItem__DWORD)(this, dwItemVnum);
    }

    bool CHARACTER::IsGM() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsGM)(this);
    }

    bool CHARACTER::IsGodSpeed() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsGodSpeed)(this);
    }

    bool CHARACTER::IsGodSpeeder() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsGodSpeeder)(this);
    }

    bool CHARACTER::IsGoodAffect(BYTE bAffectType) const {
        return ((bool(*)(const CHARACTER * const, BYTE))Addr::CHARACTER::IsGoodAffect__BYTE)(this, bAffectType);
    }

    bool CHARACTER::IsGuardNPC() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsGuardNPC)(this);
    }

    bool CHARACTER::IsHack(bool bSendMsg, bool bCheckShopOwner, int limittime) {
        return ((bool(*)(CHARACTER * const, bool, bool, int))Addr::CHARACTER::IsHack__bool_bool_int)(this, bSendMsg, bCheckShopOwner, limittime);
    }

    bool CHARACTER::IsImmune(DWORD dwImmuneFlag) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::IsImmune__DWORD)(this, dwImmuneFlag);
    }

    bool CHARACTER::IsKillerMode() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsKillerMode)(this);
    }

    bool CHARACTER::IsLearnableSkill(DWORD dwSkillVnum) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::IsLearnableSkill__DWORD)(this, dwSkillVnum);
    }

    bool CHARACTER::IsMCOK(CHARACTER::MONARCH_INDEX e) const {
        return ((bool(*)(const CHARACTER * const, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::IsMCOK__CHARACTER_MONARCH_INDEX)(this, e);
    }

    bool CHARACTER::IsMonarch() const {
        return ((bool (*)(const CHARACTER * const))Addr::CHARACTER::IsMonarch)(this);
    }

    bool CHARACTER::IsNoAttackChunjo() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsNoAttackChunjo)(this);
    }

    bool CHARACTER::IsNoAttackJinno() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsNoAttackJinno)(this);
    }

    bool CHARACTER::IsNoAttackShinsu() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsNoAttackShinsu)(this);
    }

    CHARACTER::PartyJoinErrCode CHARACTER::IsPartyJoinableCondition(LPCHARACTER pchLeader, LPCHARACTER pchGuest) {
        return ((CHARACTER::PartyJoinErrCode(*)(LPCHARACTER, LPCHARACTER))Addr::CHARACTER::IsPartyJoinableCondition__const_LPCHARACTER)(pchLeader, pchGuest);
    }

    CHARACTER::PartyJoinErrCode CHARACTER::IsPartyJoinableMutableCondition(LPCHARACTER pchLeader, LPCHARACTER pchGuest) {
        return ((CHARACTER::PartyJoinErrCode(*)(LPCHARACTER, LPCHARACTER))Addr::CHARACTER::IsPartyJoinableMutableCondition__const_LPCHARACTER)(pchLeader, pchGuest);
    }

    bool CHARACTER::IsRaceFlag(DWORD dwBit) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::IsRaceFlag__DWORD)(this, dwBit);
    }

    bool CHARACTER::IsRefineThroughGuild() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsRefineThroughGuild)(this);
    }

    bool CHARACTER::IsRevive() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsRevive)(this);
    }

    bool CHARACTER::IsReviver() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsReviver)(this);
    }

    bool CHARACTER::IsRiding() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsRiding)(this);
    }

    bool CHARACTER::IsSiegeNPC() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsSiegeNPC)(this);
    }

    bool CHARACTER::IsStaminaConsume() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsStaminaConsume)(this);
    }

    bool CHARACTER::IsStaminaHalfConsume() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsStaminaHalfConsume)(this);
    }

    bool CHARACTER::IsStoneSkinner() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsStoneSkinner)(this);
    }

    bool CHARACTER::IsStun() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsStun)(this);
    }

    bool CHARACTER::IsSummonMonster() const {
        return ((bool(*)(const CHARACTER * const))Addr::CHARACTER::IsSummonMonster)(this);
    }

    bool CHARACTER::IsSyncOwner(LPCHARACTER ch) const {
        return ((bool(*)(const CHARACTER * const, LPCHARACTER))Addr::CHARACTER::IsSyncOwner__LPCHARACTER)(this, ch);
    }

    bool CHARACTER::IsUsableSkillMotion(DWORD dwMotionIndex) const {
        return ((bool(*)(const CHARACTER * const, DWORD))Addr::CHARACTER::IsUsableSkillMotion__DWORD)(this, dwMotionIndex);
    }

    void CHARACTER::ItemDropPenalty(LPCHARACTER pkKiller) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::ItemDropPenalty__LPCHARACTER)(this, pkKiller);
    }

    bool CHARACTER::ItemProcess_Hair(LPITEM item, int iDestCell) {
        return ((bool(*)(CHARACTER * const, LPITEM, int))Addr::CHARACTER::ItemProcess_Hair__LPITEM_int)(this, item, iDestCell);
    }

    bool CHARACTER::ItemProcess_Polymorph(LPITEM item) {
        return ((bool(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::ItemProcess_Polymorph__LPITEM)(this, item);
    }

    bool CHARACTER::LearnGrandMasterSkill(DWORD dwSkillVnum) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::LearnGrandMasterSkill__DWORD)(this, dwSkillVnum);
    }

    bool CHARACTER::LearnSkillByBook(DWORD dwSkillVnum, BYTE bProb) {
        return ((bool(*)(CHARACTER * const, DWORD, BYTE))Addr::CHARACTER::LearnSkillByBook__DWORD_BYTE)(this, dwSkillVnum, bProb);
    }

    void CHARACTER::LoadAffect(DWORD dwCount, TPacketAffectElement * pElements) {
        ((void(*)(CHARACTER * const, DWORD, TPacketAffectElement *))Addr::CHARACTER::LoadAffect__DWORD_TPacketAffectElement_)(this, dwCount, pElements);
    }

    void CHARACTER::LoadMall(int iItemCount, TPlayerItem * pItems) {
        ((void(*)(CHARACTER * const, int, TPlayerItem *))Addr::CHARACTER::LoadMall__int_TPlayerItem_)(this, iItemCount, pItems);
    }

    void CHARACTER::LoadSafebox(int iSize, DWORD dwGold, int iItemCount, TPlayerItem * pItems) {
        ((void(*)(CHARACTER * const, int, DWORD, int, TPlayerItem *))Addr::CHARACTER::LoadSafebox__int_DWORD_int_TPlayerItem_)(this, iSize, dwGold, iItemCount, pItems);
    }

    void CHARACTER::MainCharacterPacket() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::MainCharacterPacket)(this);
    }

    void CHARACTER::MonsterChat(BYTE bMonsterChatType) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::MonsterChat__BYTE)(this, bMonsterChatType);
    }

    void CHARACTER::MonsterLog(const char * format, ...) {
        va_list va;
        va_start(va, format);
        char buffer[513];
        vsnprintf(buffer, 513, format, va);
        va_end(va);
        ((void(*)(CHARACTER * const, const char *, ...))Addr::CHARACTER::MonsterLog__const_char___)(this, buffer);
    }

    void CHARACTER::Motion(BYTE motion, LPCHARACTER victim) {
        ((void(*)(CHARACTER * const, BYTE, LPCHARACTER))Addr::CHARACTER::Motion__BYTE_LPCHARACTER)(this, motion, victim);
    }

    void CHARACTER::MotionPacketEncode(BYTE motion, LPCHARACTER victim, packet_motion * packet) {
        ((void(*)(CHARACTER * const, BYTE, LPCHARACTER, packet_motion *))Addr::CHARACTER::MotionPacketEncode__BYTE_LPCHARACTER_packet_motion_)(this, motion, victim, packet);
    }

    void CHARACTER::MountVnum(DWORD vnum) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::MountVnum__DWORD)(this, vnum);
    }

    bool CHARACTER::Move(long x, long y) {
        return ((bool(*)(CHARACTER * const, long, long))Addr::CHARACTER::Move__long_long)(this, x, y);
    }

    bool CHARACTER::MoveItem(BYTE bCell, BYTE bDestCell, BYTE count) {
        return ((bool(*)(CHARACTER * const, BYTE, BYTE, BYTE))Addr::CHARACTER::MoveItem__BYTE_BYTE_BYTE)(this, bCell, bDestCell, count);
    }

    void CHARACTER::OnClick(LPCHARACTER pkChrCauser) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::OnClick__LPCHARACTER)(this, pkChrCauser);
    }

    bool CHARACTER::OnIdle() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::OnIdle)(this);
    }

    void CHARACTER::OnMove(bool bIsAttack) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::OnMove__bool)(this, bIsAttack);
    }

    void CHARACTER::OpenMyShop(const char * c_pszSign, TShopItemTable * pTable, BYTE bItemCount) {
        ((void(*)(CHARACTER * const, const char *, TShopItemTable *, BYTE))Addr::CHARACTER::OpenMyShop__const_char__TShopItemTable__BYTE)(this, c_pszSign, pTable, bItemCount);
    }

    void CHARACTER::PartyInvite(LPCHARACTER a1) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::PartyInvite__LPCHARACTER)(this, a1);
    }

    void CHARACTER::PartyInviteAccept(LPCHARACTER pchInvitee) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::PartyInviteAccept__LPCHARACTER)(this, pchInvitee);
    }

    void CHARACTER::PartyInviteDeny(DWORD dwPID) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::PartyInviteDeny__DWORD)(this, dwPID);
    }

    void CHARACTER::PartyJoin(LPCHARACTER pLeader) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::PartyJoin__LPCHARACTER)(this, pLeader);
    }

    void CHARACTER::PayRefineFee(int iTotalMoney) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::PayRefineFee__int)(this, iTotalMoney);
    }

    bool CHARACTER::PickupItem(DWORD dwVID) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::PickupItem__DWORD)(this, dwVID);
    }

    void CHARACTER::PointChange(BYTE type, int amount, bool bAmount, bool bBroadcast) {
        ((void(*)(CHARACTER * const, BYTE, int, bool, bool))Addr::CHARACTER::PointChange__BYTE_int_bool_bool)(this, type, amount, bAmount, bBroadcast);
    }

    void CHARACTER::PointsPacket() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::PointsPacket)(this);
    }

    int CHARACTER::ProcessAffect() {
        return ((int(*)(CHARACTER * const))Addr::CHARACTER::ProcessAffect)(this);
    }

    void CHARACTER::ProcessRecallItem(LPITEM item) {
        ((void(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::ProcessRecallItem__LPITEM)(this, item);
    }

    void CHARACTER::PullMonster() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::PullMonster)(this);
    }

    void CHARACTER::QuerySafeboxSize() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::QuerySafeboxSize)(this);
    }

    void CHARACTER::ReceiveItem(LPCHARACTER from, LPITEM item) {
        ((void(*)(CHARACTER * const, LPCHARACTER, LPITEM))Addr::CHARACTER::ReceiveItem__LPCHARACTER_LPITEM)(this, from, item);
    }

    bool CHARACTER::RefineInformation(BYTE bCell, BYTE bType, int iAdditionalCell) {
        return ((bool(*)(CHARACTER * const, BYTE, BYTE, int))Addr::CHARACTER::RefineInformation__BYTE_BYTE_int)(this, bCell, bType, iAdditionalCell);
    }

    bool CHARACTER::RefineItem(LPITEM pkItem, LPITEM pkTarget) {
        return ((bool(*)(CHARACTER * const, LPITEM, LPITEM))Addr::CHARACTER::RefineItem__LPITEM_LPITEM)(this, pkItem, pkTarget);
    }

    void CHARACTER::RefreshAffect() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::RefreshAffect)(this);
    }

    bool CHARACTER::RemoveAffect(CAffect * pkAff) {
        return ((bool(*)(CHARACTER * const, CAffect *))Addr::CHARACTER::RemoveAffect__CAffect_)(this, pkAff);
    }

    bool CHARACTER::RemoveAffect(DWORD dwType) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::RemoveAffect__DWORD)(this, dwType);
    }

    void CHARACTER::RemoveBadAffect() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::RemoveBadAffect)(this);
    }

    void CHARACTER::RemoveFire() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::RemoveFire)(this);
    }

    void CHARACTER::RemoveGoodAffect() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::RemoveGoodAffect)(this);
    }

    void CHARACTER::RemovePoison() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::RemovePoison)(this);
    }

    void CHARACTER::RemoveSpecifyItem(DWORD vnum, DWORD count) {
        ((void(*)(CHARACTER * const, DWORD, DWORD))Addr::CHARACTER::RemoveSpecifyItem__DWORD_DWORD)(this, vnum, count);
    }

    void CHARACTER::ReqSafeboxLoad(const char * pszPassword) {
        ((void(*)(CHARACTER * const, const char *))Addr::CHARACTER::ReqSafeboxLoad__const_char_)(this, pszPassword);
    }

    bool CHARACTER::RequestToParty(LPCHARACTER a1) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::RequestToParty__LPCHARACTER)(this, a1);
    }

    void CHARACTER::ResetChatCounter() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ResetChatCounter)(this);
    }

    void CHARACTER::ResetComboHackCount() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ResetComboHackCount)(this);
    }

    void CHARACTER::ResetMobSkillCooltime() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ResetMobSkillCooltime)(this);
    }

    bool CHARACTER::ResetOneSkill(DWORD dwVnum) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::ResetOneSkill__DWORD)(this, dwVnum);
    }

    void CHARACTER::ResetPlayTime(DWORD dwTimeRemain) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::ResetPlayTime__DWORD)(this, dwTimeRemain);
    }

    void CHARACTER::ResetPoint(int iLv) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::ResetPoint__int)(this, iLv);
    }

    void CHARACTER::ResetSkill() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ResetSkill)(this);
    }

    void CHARACTER::ResetStopTime() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::ResetStopTime)(this);
    }

    void CHARACTER::RestartAtSamePos() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::RestartAtSamePos)(this);
    }

    bool CHARACTER::Return() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::Return)(this);
    }

    bool CHARACTER::ReviveHorse() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::ReviveHorse)(this);
    }

    void CHARACTER::ReviveInvisible(int iDur) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::ReviveInvisible__int)(this, iDur);
    }

    void CHARACTER::Reward(bool bItemDrop) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::Reward__bool)(this, bItemDrop);
    }

    void CHARACTER::RewardGold(LPCHARACTER pkAttacker) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::RewardGold__LPCHARACTER)(this, pkAttacker);
    }

    void CHARACTER::Save() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::Save)(this);
    }

    void CHARACTER::SaveAffect() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SaveAffect)(this);
    }

    void CHARACTER::SaveExitLocation() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SaveExitLocation)(this);
    }

    void CHARACTER::SaveReal() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SaveReal)(this);
    }

    void CHARACTER::Say(const std::string& s) {
        ((void(*)(CHARACTER * const, const std::string &))Addr::CHARACTER::Say__const_std_locale_string_)(this, s);
    }

    void CHARACTER::SendDamagePacket(LPCHARACTER pAttacker, int Damage, BYTE DamageFlag) {
        ((void(*)(CHARACTER * const, LPCHARACTER, int, BYTE))Addr::CHARACTER::SendDamagePacket__LPCHARACTER_int_BYTE)(this, pAttacker, Damage, DamageFlag);
    }

    void CHARACTER::SendEquipment(LPCHARACTER ch) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SendEquipment__LPCHARACTER)(this, ch);
    }

    void CHARACTER::SendGreetMessage() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SendGreetMessage)(this);
    }

    void CHARACTER::SendGuildName(CGuild * pGuild) {
        ((void(*)(CHARACTER * const, CGuild *))Addr::CHARACTER::SendGuildName__CGuild_)(this, pGuild);
    }

    void CHARACTER::SendGuildName(DWORD dwGuildID) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::SendGuildName__DWORD)(this, dwGuildID);
    }

    void CHARACTER::SendHorseInfo() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SendHorseInfo)(this);
    }

    void CHARACTER::SendMovePacket(BYTE bFunc, BYTE bArg, DWORD x, DWORD y, DWORD dwDuration, DWORD dwTime, int iRot) {
        ((void(*)(CHARACTER * const, BYTE, BYTE, DWORD, DWORD, DWORD, DWORD, int))Addr::CHARACTER::SendMovePacket__BYTE_BYTE_DWORD_DWORD_DWORD_DWORD_int)(this, bFunc, bArg, x, y, dwDuration, dwTime, iRot);
    }

    void CHARACTER::SendMyShopPriceListCmd(DWORD dwItemVnum, DWORD dwItemPrice) {
        ((void(*)(CHARACTER * const, DWORD, DWORD))Addr::CHARACTER::SendMyShopPriceListCmd__DWORD_DWORD)(this, dwItemVnum, dwItemPrice);
    }

    void CHARACTER::SetAffectedEunhyung() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetAffectedEunhyung)(this);
    }

    void CHARACTER::SetAggressive() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetAggressive)(this);
    }

    void CHARACTER::SetAttackMob() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetAttackMob)(this);
    }

    void CHARACTER::SetBerserk(bool mode) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::SetBerserk__bool)(this, mode);
    }

    void CHARACTER::SetBlockMode(BYTE bFlag) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetBlockMode__BYTE)(this, bFlag);
    }

    void CHARACTER::SetBlockModeForce(BYTE bFlag) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetBlockModeForce__BYTE)(this, bFlag);
    }

    void CHARACTER::SetChangeEmpireCount() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetChangeEmpireCount)(this);
    }

    void CHARACTER::SetComboSequence(BYTE seq) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetComboSequence__BYTE)(this, seq);
    }

    void CHARACTER::SetCoward() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetCoward)(this);
    }

    void CHARACTER::SetDungeon(LPDUNGEON pkDungeon) {
        ((void(*)(CHARACTER * const, LPDUNGEON))Addr::CHARACTER::SetDungeon__LPDUNGEON)(this, pkDungeon);
    }

    void CHARACTER::SetEmpire(BYTE bEmpire) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetEmpire__BYTE)(this, bEmpire);
    }

    void CHARACTER::SetExchange(CExchange * pkExchange) {
        ((void(*)(CHARACTER * const, CExchange *))Addr::CHARACTER::SetExchange__CExchange_)(this, pkExchange);
    }

    void CHARACTER::SetGMLevel() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetGMLevel)(this);
    }

    void CHARACTER::SetGodSpeed(bool mode) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::SetGodSpeed__bool)(this, mode);
    }

    void CHARACTER::SetGuild(CGuild * pGuild) {
        ((void(*)(CHARACTER * const, CGuild *))Addr::CHARACTER::SetGuild__CGuild_)(this, pGuild);
    }

    void CHARACTER::SetHorseLevel(int iLevel) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SetHorseLevel__int)(this, iLevel);
    }

    void CHARACTER::SetItem(BYTE bCell, LPITEM pItem, bool skipOwnerCheck) {
        ((void(*)(CHARACTER * const, BYTE, LPITEM, bool))Addr::CHARACTER::SetItem__BYTE_LPITEM_bool)(this, bCell, pItem, skipOwnerCheck);
    }

    void CHARACTER::SetKillerMode(bool isOn) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::SetKillerMode__bool)(this, isOn);
    }

    void CHARACTER::SetLastAttacked(DWORD dwTime) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::SetLastAttacked__DWORD)(this, dwTime);
    }

    void CHARACTER::SetLastComboTime(DWORD time) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::SetLastComboTime__DWORD)(this, time);
    }

    void CHARACTER::SetLevel(BYTE level) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetLevel__BYTE)(this, level);
    }

    void CHARACTER::SetMC(CHARACTER::MONARCH_INDEX e) {
        ((void(*)(CHARACTER * const, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::SetMC__CHARACTER_MONARCH_INDEX)(this, e);
    }

    void CHARACTER::SetMarryPartner(LPCHARACTER ch) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SetMarryPartner__LPCHARACTER)(this, ch);
    }

    void CHARACTER::SetNextStatePulse(int iNextPulse) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SetNextStatePulse__int)(this, iNextPulse);
    }

    void CHARACTER::SetNoAttackChunjo() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetNoAttackChunjo)(this);
    }

    void CHARACTER::SetNoAttackJinno() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetNoAttackJinno)(this);
    }

    void CHARACTER::SetNoAttackShinsu() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetNoAttackShinsu)(this);
    }

    void CHARACTER::SetNowWalking(bool bWalkFlag) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::SetNowWalking__bool)(this, bWalkFlag);
    }

    void CHARACTER::SetPKMode(BYTE bPKMode) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetPKMode__BYTE)(this, bPKMode);
    }

    void CHARACTER::SetPart(BYTE bPartPos, WORD wVal) {
        ((void(*)(CHARACTER * const, BYTE, WORD))Addr::CHARACTER::SetPart__BYTE_WORD)(this, bPartPos, wVal);
    }

    void CHARACTER::SetParty(LPPARTY pkParty) {
        ((void(*)(CHARACTER * const, LPPARTY))Addr::CHARACTER::SetParty__LPPARTY)(this, pkParty);
    }

    void CHARACTER::SetPlayerProto(const TPlayerTable * t) {
        ((void(*)(CHARACTER * const, const TPlayerTable *))Addr::CHARACTER::SetPlayerProto__const_TPlayerTable_)(this, t);
    }

    void CHARACTER::SetPoint(BYTE type, int val) {
        ((void(*)(CHARACTER * const, BYTE, int))Addr::CHARACTER::SetPoint__BYTE_int)(this, type, val);
    }

    void CHARACTER::SetPolymorph(DWORD dwRaceNum, bool bMaintainStat) {
        ((void(*)(CHARACTER * const, DWORD, bool))Addr::CHARACTER::SetPolymorph__DWORD_bool)(this, dwRaceNum, bMaintainStat);
    }

    void CHARACTER::SetPosition(int pos) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SetPosition__int)(this, pos);
    }

    void CHARACTER::SetProto(const CMob * pkMob) {
        ((void(*)(CHARACTER * const, const CMob *))Addr::CHARACTER::SetProto__const_CMob_)(this, pkMob);
    }

    void CHARACTER::SetQuestFlag(const std::string & flag, int value) {
        ((void(*)(CHARACTER * const, const std::string &, int))Addr::CHARACTER::SetQuestFlag__const_std_locale_string__int)(this, flag, value);
    }

    void CHARACTER::SetQuestItemPtr(LPITEM item) {
        ((void(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::SetQuestItemPtr__LPITEM)(this, item);
    }

    void CHARACTER::SetQuestNPCID(DWORD vid) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::SetQuestNPCID__DWORD)(this, vid);
    }

    bool CHARACTER::SetQuickslot(BYTE pos, TQuickslot & rSlot) {
        return ((bool(*)(CHARACTER * const, BYTE, TQuickslot &))Addr::CHARACTER::SetQuickslot__BYTE_TQuickslot_)(this, pos, rSlot);
    }

    void CHARACTER::SetRace(BYTE race) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetRace__BYTE)(this, race);
    }

    void CHARACTER::SetRealPoint(BYTE type, int val) {
        ((void(*)(CHARACTER * const, BYTE, int))Addr::CHARACTER::SetRealPoint__BYTE_int)(this, type, val);
    }

    void CHARACTER::SetRefineMode(int iAdditionalCell) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SetRefineMode__int)(this, iAdditionalCell);
    }

    void CHARACTER::SetRefineNPC(LPCHARACTER ch) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SetRefineNPC__LPCHARACTER)(this, ch);
    }

    void CHARACTER::SetRegen(LPREGEN pkRegen) {
        ((void(*)(CHARACTER * const, LPREGEN))Addr::CHARACTER::SetRegen__LPREGEN)(this, pkRegen);
    }

    void CHARACTER::SetRevive(bool mode) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::SetRevive__bool)(this, mode);
    }

    void CHARACTER::SetRider(LPCHARACTER ch) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SetRider__LPCHARACTER)(this, ch);
    }

    void CHARACTER::SetRotation(float fRot) {
        ((void(*)(CHARACTER * const, float))Addr::CHARACTER::SetRotation__float)(this, fRot);
    }

    void CHARACTER::SetRotationToXY(long x, long y) {
        ((void(*)(CHARACTER * const, long, long))Addr::CHARACTER::SetRotationToXY__long_long)(this, x, y);
    }

    void CHARACTER::SetSafeboxOpenPosition() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SetSafeboxOpenPosition)(this);
    }

    void CHARACTER::SetSafeboxSize(int iSize) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SetSafeboxSize__int)(this, iSize);
    }

    void CHARACTER::SetShop(LPSHOP pkShop) {
        ((void(*)(CHARACTER * const, LPSHOP))Addr::CHARACTER::SetShop__LPSHOP)(this, pkShop);
    }

    void CHARACTER::SetSkillGroup(BYTE bSkillGroup) {
        ((void(*)(CHARACTER * const, BYTE))Addr::CHARACTER::SetSkillGroup__BYTE)(this, bSkillGroup);
    }

    void CHARACTER::SetSkillLevel(DWORD dwVnum, BYTE bLev) {
        ((void(*)(CHARACTER * const, DWORD, BYTE))Addr::CHARACTER::SetSkillLevel__DWORD_BYTE)(this, dwVnum, bLev);
    }

    void CHARACTER::SetSkillNextReadTime(DWORD dwVnum, time_t time) {
        ((void(*)(CHARACTER * const, DWORD, time_t))Addr::CHARACTER::SetSkillNextReadTime__DWORD_time_t)(this, dwVnum, time);
    }

    void CHARACTER::SetStone(LPCHARACTER pkChrStone) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SetStone__LPCHARACTER)(this, pkChrStone);
    }

    bool CHARACTER::SetSyncOwner(LPCHARACTER ch, bool bRemoveFromList) {
        return ((bool(*)(CHARACTER * const, LPCHARACTER, bool))Addr::CHARACTER::SetSyncOwner__LPCHARACTER_bool)(this, ch, bRemoveFromList);
    }

    void CHARACTER::SetTarget(LPCHARACTER pkChrTarget) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SetTarget__LPCHARACTER)(this, pkChrTarget);
    }

    void CHARACTER::SetValidComboInterval(int interval) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SetValidComboInterval__int)(this, interval);
    }

    void CHARACTER::SetVictim(LPCHARACTER pkVictim) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::SetVictim__LPCHARACTER)(this, pkVictim);
    }

    void CHARACTER::SetWarMap(CWarMap * pWarMap) {
        ((void(*)(CHARACTER * const, CWarMap *))Addr::CHARACTER::SetWarMap__CWarMap_)(this, pWarMap);
    }

    void CHARACTER::SetWarpLocation(long lMapIndex, long x, long y) {
        ((void(*)(CHARACTER * const, long, long, long))Addr::CHARACTER::SetWarpLocation__long_long_long)(this, lMapIndex, x, y);
    }

    void CHARACTER::SetWear(BYTE bCell, LPITEM item) {
        ((void(*)(CHARACTER * const, BYTE, LPITEM))Addr::CHARACTER::SetWear__BYTE_LPITEM)(this, bCell, item);
    }

    void CHARACTER::SetWeddingMap(marriage::WeddingMap * pMap) {
        ((void(*)(CHARACTER * const, marriage::WeddingMap *))Addr::CHARACTER::SetWeddingMap__marriage_WeddingMap_)(this, pMap);
    }

    bool CHARACTER::Shoot(BYTE bType) {
        return ((bool(*)(CHARACTER * const, BYTE))Addr::CHARACTER::Shoot__BYTE)(this, bType);
    }

    bool CHARACTER::Show(long lMapIndex, long x, long y, long z) {
        return ((bool(*)(CHARACTER * const, long, long, long, long))Addr::CHARACTER::Show__long_long_long_long_bool)(this, lMapIndex, x, y, z);
    }

    void CHARACTER::ShowAlignment(bool bShow) {
        ((void(*)(CHARACTER * const, bool))Addr::CHARACTER::ShowAlignment__bool)(this, bShow);
    }

    void CHARACTER::Sitdown(int is_ground) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::Sitdown__int)(this, is_ground);
    }

    void CHARACTER::SkillLearnWaitMoreTimeMessage(DWORD ms) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::SkillLearnWaitMoreTimeMessage__DWORD)(this, ms);
    }

    bool CHARACTER::SkillLevelDown(DWORD dwVnum) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::SkillLevelDown__DWORD)(this, dwVnum);
    }

    void CHARACTER::SkillLevelPacket() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SkillLevelPacket)(this);
    }

    void CHARACTER::SkillLevelUp(DWORD dwVnum, BYTE bMethod) {
        ((void(*)(CHARACTER * const, DWORD, BYTE))Addr::CHARACTER::SkillLevelUp__DWORD_BYTE)(this, dwVnum, bMethod);
    }

    void CHARACTER::SkipComboAttackByTime(int interval) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::SkipComboAttackByTime__int)(this, interval);
    }

    void CHARACTER::SpecificEffectPacket(const char * filename) {
        ((void(*)(CHARACTER * const, const char *))Addr::CHARACTER::SpecificEffectPacket__const_char_)(this, filename);
    }

    void CHARACTER::Standup() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::Standup)(this);
    }

    void CHARACTER::StartAffectEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartAffectEvent)(this);
    }

    void CHARACTER::StartCheckSpeedHackEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartCheckSpeedHackEvent)(this);
    }

    void CHARACTER::StartDestroyWhenIdleEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartDestroyWhenIdleEvent)(this);
    }

    void CHARACTER::StartHackShieldCheckCycle(int seconds) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::StartHackShieldCheckCycle__int)(this, seconds);
    }

    void CHARACTER::StartMuyeongEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartMuyeongEvent)(this);
    }

    void CHARACTER::StartRecoveryEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartRecoveryEvent)(this);
    }

    bool CHARACTER::StartRiding() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::StartRiding)(this);
    }

    void CHARACTER::StartSaveEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartSaveEvent)(this);
    }

    void CHARACTER::StartStaminaConsume() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartStaminaConsume)(this);
    }

    bool CHARACTER::StartStateMachine(int iNextPulse) {
        return ((bool(*)(CHARACTER * const, int))Addr::CHARACTER::StartStateMachine__int)(this, iNextPulse);
    }

    void CHARACTER::StartWarpNPCEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StartWarpNPCEvent)(this);
    }

    void CHARACTER::StateBattle() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StateBattle)(this);
    }

    void CHARACTER::StateFlag() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StateFlag)(this);
    }

    void CHARACTER::StateFlagBase() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StateFlagBase)(this);
    }

    void CHARACTER::StateHorse() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StateHorse)(this);
    }

    void CHARACTER::StateIdle() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StateIdle)(this);
    }

    void CHARACTER::StateMove() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StateMove)(this);
    }

    void CHARACTER::Stop() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::Stop)(this);
    }

    void CHARACTER::StopHackShieldCheckCycle() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StopHackShieldCheckCycle)(this);
    }

    void CHARACTER::StopMuyeongEvent() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StopMuyeongEvent)(this);
    }

    bool CHARACTER::StopRiding() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::StopRiding)(this);
    }

    void CHARACTER::StopStaminaConsume() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StopStaminaConsume)(this);
    }

    void CHARACTER::StopStateMachine() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::StopStateMachine)(this);
    }

    void CHARACTER::Stun() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::Stun)(this);
    }

    bool CHARACTER::SwapItem(BYTE bCell, BYTE bDestCell) {
        return ((bool(*)(CHARACTER * const, BYTE, BYTE))Addr::CHARACTER::SwapItem__BYTE_BYTE)(this, bCell, bDestCell);
    }

    bool CHARACTER::SwapQuickslot(BYTE a, BYTE b) {
        return ((bool(*)(CHARACTER * const, BYTE, BYTE))Addr::CHARACTER::SwapQuickslot__BYTE_BYTE)(this, a, b);
    }

    bool CHARACTER::Sync(long x, long y) {
        return ((bool(*)(CHARACTER * const, long, long))Addr::CHARACTER::Sync__long_long)(this, x, y);
    }

    void CHARACTER::SyncPacket() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::SyncPacket)(this);
    }

    void CHARACTER::SyncQuickslot(BYTE bType, BYTE bOldPos, BYTE bNewPos) {
        ((void(*)(CHARACTER * const, BYTE, BYTE, BYTE))Addr::CHARACTER::SyncQuickslot__BYTE_BYTE_BYTE)(this, bType, bOldPos, bNewPos);
    }

    bool CHARACTER::UnEquipSpecialRideUniqueItem() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::UnEquipSpecialRideUniqueItem)(this);
    }

    bool CHARACTER::UnequipItem(LPITEM a1) {
        return ((bool(*)(CHARACTER * const, LPITEM))Addr::CHARACTER::UnequipItem__LPITEM)(this, a1);
    }

    bool CHARACTER::UpdateAffect() {
        return ((bool(*)(CHARACTER * const))Addr::CHARACTER::UpdateAffect)(this);
    }

    void CHARACTER::UpdateAggrPoint(LPCHARACTER pAttacker, EDamageType type, int dam) {
        ((void(*)(CHARACTER * const, LPCHARACTER, EDamageType, int))Addr::CHARACTER::UpdateAggrPoint__LPCHARACTER_EDamageType_int)(this, pAttacker, type, dam);
    }

    void CHARACTER::UpdateAggrPointEx(LPCHARACTER pAttacker, EDamageType type, int dam, CHARACTER::TBattleInfo & info) {
        ((void(*)(CHARACTER * const, LPCHARACTER, EDamageType, int, CHARACTER::TBattleInfo &))Addr::CHARACTER::UpdateAggrPointEx__LPCHARACTER_EDamageType_int_CHARACTER_TBattleInfo_)(this, pAttacker, type, dam, info);
    }

    void CHARACTER::UpdateAlignment(int iAmount) {
        ((void(*)(CHARACTER * const, int))Addr::CHARACTER::UpdateAlignment__int)(this, iAmount);
    }

    void CHARACTER::UpdateCharacter(DWORD dwPulse) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::UpdateCharacter__DWORD)(this, dwPulse);
    }

    void CHARACTER::UpdateDepositPulse() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::UpdateDepositPulse)(this);
    }

    void CHARACTER::UpdateKillerMode() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::UpdateKillerMode)(this);
    }

    void CHARACTER::UpdatePacket() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::UpdatePacket)(this);
    }

    void CHARACTER::UpdateStateMachine(DWORD dwPulse) {
        ((void(*)(CHARACTER * const, DWORD))Addr::CHARACTER::UpdateStateMachine__DWORD)(this, dwPulse);
    }

    void CHARACTER::UseArrow(LPITEM pkArrow, DWORD dwArrowCount) {
        ((void(*)(CHARACTER * const, LPITEM, DWORD))Addr::CHARACTER::UseArrow__LPITEM_DWORD)(this, pkArrow, dwArrowCount);
    }

    bool CHARACTER::UseItem(BYTE bCell, int iDestCell) {
        return ((bool(*)(CHARACTER * const, BYTE, int))Addr::CHARACTER::UseItem__BYTE_int)(this, bCell, iDestCell);
    }

    bool CHARACTER::UseItemEx(LPITEM item, int iDestCell) {
        return ((bool(*)(CHARACTER * const, LPITEM, int))Addr::CHARACTER::UseItemEx__LPITEM_int)(this, item, iDestCell);
    }

    bool CHARACTER::UseMobSkill(unsigned int idx) {
        return ((bool(*)(CHARACTER * const, unsigned int))Addr::CHARACTER::UseMobSkill__unsigned_int)(this, idx);
    }

    void CHARACTER::UseSilkBotary() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::UseSilkBotary)(this);
    }

    void CHARACTER::UseSilkBotaryReal(const TPacketMyshopPricelistHeader * p) {
        ((void(*)(CHARACTER * const, const TPacketMyshopPricelistHeader *))Addr::CHARACTER::UseSilkBotaryReal__const_TPacketMyshopPricelistHeader_)(this, p);
    }

    bool CHARACTER::UseSkill(DWORD dwVnum, LPCHARACTER pkVictim, bool bUseGrandMaster) {
        return ((bool(*)(CHARACTER * const, DWORD, LPCHARACTER, bool))Addr::CHARACTER::UseSkill__DWORD_LPCHARACTER_bool)(this, dwVnum, pkVictim, bUseGrandMaster);
    }

    void CHARACTER::WarpEnd() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::WarpEnd)(this);
    }

    bool CHARACTER::WarpSet(long x, long y, long lPrivateMapIndex) {
        return ((bool(*)(CHARACTER * const, long, long, long))Addr::CHARACTER::WarpSet__long_long_long)(this, x, y, lPrivateMapIndex);
    }

    bool CHARACTER::WarpToPID(DWORD dwPID) {
        return ((bool(*)(CHARACTER * const, DWORD))Addr::CHARACTER::WarpToPID__DWORD)(this, dwPID);
    }

    void CHARACTER::__OpenPrivateShop() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::__OpenPrivateShop)(this);
    }

    void CHARACTER::__StateIdle_Monster() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::__StateIdle_Monster)(this);
    }

    void CHARACTER::__StateIdle_NPC() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::__StateIdle_NPC)(this);
    }

    void CHARACTER::__StateIdle_Stone() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::__StateIdle_Stone)(this);
    }

    void CHARACTER::fishing() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::fishing)(this);
    }

    void CHARACTER::fishing_take() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::fishing_take)(this);
    }

    void CHARACTER::mining(LPCHARACTER chLoad) {
        ((void(*)(CHARACTER * const, LPCHARACTER))Addr::CHARACTER::mining__LPCHARACTER)(this, chLoad);
    }

    void CHARACTER::mining_cancel() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::mining_cancel)(this);
    }

    void CHARACTER::mining_take() {
        ((void(*)(CHARACTER * const))Addr::CHARACTER::mining_take)(this);
    }

    void CHARACTER::ChatPacket(BYTE type, std::string msg) {
        this->ChatPacket(type, msg.c_str());
    };

    LPPARTY CHARACTER::GetParty(void) const {
        return this->m_pkParty;
    }

    BYTE CHARACTER::GetEmpire(void) const {
        return this->m_bEmpire;
    }

    const VID& CHARACTER::GetVID() {
        return this->m_vid;
    }

    int CHARACTER::GetLevel() const {
        return m_points.level;
    }

    DWORD CHARACTER::GetPlayerID() const {
        return m_dwPlayerID;
    }

    void CHARACTER::ToggleMonsterLog() {
        ((void(*)(CHARACTER *))Addr::CHARACTER::ToggleMonsterLog)(this);
    }

    CGuild* CHARACTER::GetGuild() const {
        return m_pGuild;
    }

    LPCHARACTER CHARACTER::GetHorse() const {
        return m_chHorse;
    }

    DWORD CHARACTER::GetMountVnum(void) const {
        return this->m_dwMountVnum;
    }

    DWORD CHARACTER::GetExp(void) const {
        return this->m_points.exp;
    }

    CPetSystem * CHARACTER::GetPetSystem() {
        return this->m_petSystem;
    }

    bool CHARACTER::IsPet() {
        return this->m_bIsPet;
    }
    bool CHARACTER::IsBlockMode(BYTE mode) const{
        return this->m_pointsInstant.bBlockMode&mode;
    }
}
