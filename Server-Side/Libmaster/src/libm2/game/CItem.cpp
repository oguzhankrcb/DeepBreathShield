/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CItem.hpp"
#include "../addr.hpp"
#include "CEntity.hpp"
#include "CHARACTER.hpp"
#include "PIXEL_POSITION.hpp"
namespace libm2 {

    void CItem::AccessorySocketDegrade() {
        ((void(*)(CItem * const))Addr::CItem::AccessorySocketDegrade)(this);
    }

    void CItem::AddAttr(BYTE bApply, BYTE bLevel) {
        ((void(*)(CItem * const, BYTE, BYTE))Addr::CItem::AddAttr__BYTE_BYTE)(this, bApply, bLevel);
    }

    void CItem::AddAttribute(BYTE bApply, short sValue) {
        ((void(*)(CItem * const, BYTE, short))Addr::CItem::AddAttribute__BYTE_short)(this, bApply, sValue);
    }

    void CItem::AddAttribute() {
        ((void(*)(CItem * const))Addr::CItem::AddAttribute)(this);
    }

    void CItem::AddFlag(long bit) {
        ((void(*)(CItem * const, long))Addr::CItem::AddFlag__long)(this, bit);
    }

    bool CItem::AddRareAttribute() {
        return ((bool(*)(CItem * const))Addr::CItem::AddRareAttribute)(this);
    }

    bool CItem::AddSocket() {
        return ((bool(*)(CItem * const))Addr::CItem::AddSocket)(this);
    }

    bool CItem::AddToCharacter(LPCHARACTER ch, BYTE _cell, bool skipOwnerCheck) {
        return ((bool(*)(CItem * const, LPCHARACTER, BYTE, bool))Addr::CItem::AddToCharacter__LPCHARACTER_BYTE_bool)(this, ch, _cell, skipOwnerCheck);
    }

    bool CItem::AddToGround(long lMapIndex, const PIXEL_POSITION & pos, bool skipOwnerCheck) {
        return ((bool(*)(CItem * const, long, const PIXEL_POSITION &, bool))Addr::CItem::AddToGround__long_const_PIXEL_POSITION__bool)(this, lMapIndex, pos, skipOwnerCheck);
    }

    void CItem::AlterToMagicItem() {
        ((void(*)(CItem * const))Addr::CItem::AlterToMagicItem)(this);
    }

    void CItem::AlterToSocketItem(int iSocketCount) {
        ((void(*)(CItem * const, int))Addr::CItem::AlterToSocketItem__int)(this, iSocketCount);
    }

    void CItem::ApplyAddon(int iAddonType) {
        ((void(*)(CItem * const, int))Addr::CItem::ApplyAddon__int)(this, iAddonType);
    }

    void CItem::AttrLog() {
        ((void(*)(CItem * const))Addr::CItem::AttrLog)(this);
    }

    bool CItem::CanPutInto(LPITEM a1) {
        return ((bool(*)(CItem * const, LPITEM))Addr::CItem::CanPutInto__LPITEM)(this, a1);
    }

    bool CItem::CanUsedBy(LPCHARACTER ch) {
        return ((bool(*)(CItem * const, LPCHARACTER))Addr::CItem::CanUsedBy__LPCHARACTER)(this, ch);
    }

    void CItem::ChangeAttribute(const int * aiChangeProb) {
        ((void(*)(CItem * const, const int *))Addr::CItem::ChangeAttribute__const_int_)(this, aiChangeProb);
    }

    bool CItem::ChangeRareAttribute() {
        return ((bool(*)(CItem * const))Addr::CItem::ChangeRareAttribute)(this);
    }

    bool CItem::CheckItemUseLevel(int nLevel) {
        return ((bool(*)(CItem * const, int))Addr::CItem::CheckItemUseLevel__int)(this, nLevel);
    }

    void CItem::ClearAttribute() {
        ((void(*)(CItem * const))Addr::CItem::ClearAttribute)(this);
    }

    void CItem::ClearMountAttributeAndAffect() {
        ((void(*)(CItem * const))Addr::CItem::ClearMountAttributeAndAffect)(this);
    }

    void CItem::CopyAttributeTo(LPITEM pItem) {
        ((void(*)(CItem * const, LPITEM))Addr::CItem::CopyAttributeTo__LPITEM)(this, pItem);
    }

    void CItem::CopySocketTo(LPITEM pItem) {
        ((void(*)(CItem * const, LPITEM))Addr::CItem::CopySocketTo__LPITEM)(this, pItem);
    }

    bool CItem::CreateSocket(BYTE bSlot, BYTE bGold) {
        return ((bool(*)(CItem * const, BYTE, BYTE))Addr::CItem::CreateSocket__BYTE_BYTE)(this, bSlot, bGold);
    }

    void CItem::Destroy() {
        ((void(*)(CItem * const))Addr::CItem::Destroy)(this);
    }
    
     CItem::CItem(unsigned int a) {
        ((void(*)(CItem * const,unsigned int))Addr::CItem::CItem)(this,a);
    }

    bool CItem::DistanceValid(LPCHARACTER ch) {
        return ((bool(*)(CItem * const, LPCHARACTER))Addr::CItem::DistanceValid__LPCHARACTER)(this, ch);
    }

    void CItem::EncodeInsertPacket(LPENTITY ent) {
        ((void(*)(CItem * const, LPENTITY))Addr::CItem::EncodeInsertPacket__LPENTITY)(this, ent);
    }

    void CItem::EncodeRemovePacket(LPENTITY ent) {
        ((void(*)(CItem * const, LPENTITY))Addr::CItem::EncodeRemovePacket__LPENTITY)(this, ent);
    }

    bool CItem::EquipTo(LPCHARACTER ch, BYTE bWearCell) {
        return ((bool(*)(CItem * const, LPCHARACTER, BYTE))Addr::CItem::EquipTo__LPCHARACTER_BYTE)(this, ch, bWearCell);
    }

    long CItem::FindApplyValue(BYTE bApplyType) {
        return ((long(*)(CItem * const, BYTE))Addr::CItem::FindApplyValue__BYTE)(this, bApplyType);
    }

    int CItem::FindAttribute(BYTE bType) {
        return ((int(*)(CItem * const, BYTE))Addr::CItem::FindAttribute__BYTE)(this, bType);
    }

    int CItem::FindEquipCell(LPCHARACTER ch, int type){
        return ((int(*)(CItem * const, LPCHARACTER, int))Addr::CItem::FindEquipCell__LPCHARACTER)(this, ch, type);
    }

    int CItem::GetAccessorySocketDownGradeTime() {
        return ((int(*)(CItem * const))Addr::CItem::GetAccessorySocketDownGradeTime)(this);
    }

    int CItem::GetAccessorySocketGrade() {
        return ((int(*)(CItem * const))Addr::CItem::GetAccessorySocketGrade)(this);
    }

    int CItem::GetAccessorySocketMaxGrade() {
        return ((int(*)(CItem * const))Addr::CItem::GetAccessorySocketMaxGrade)(this);
    }

    int CItem::GetAttributeCount() {
        return ((int(*)(CItem * const))Addr::CItem::GetAttributeCount)(this);
    }

    int CItem::GetAttributeSetIndex() {
        return ((int(*)(CItem * const))Addr::CItem::GetAttributeSetIndex)(this);
    }

    DWORD CItem::GetCount() {
        return ((DWORD(*)(CItem * const))Addr::CItem::GetCount)(this);
    }

    int CItem::GetGold() {
        return ((int(*)(CItem * const))Addr::CItem::GetGold)(this);
    }

    int CItem::GetLevelLimit() {
        return ((int(*)(CItem * const))Addr::CItem::GetLevelLimit)(this);
    }

    int CItem::GetRareAttrCount() {
        return ((int(*)(CItem * const))Addr::CItem::GetRareAttrCount)(this);
    }

    DWORD CItem::GetRefineFromVnum() {
        return ((DWORD(*)(CItem * const))Addr::CItem::GetRefineFromVnum)(this);
    }

    int CItem::GetRefineLevel() {
        return ((int(*)(CItem * const))Addr::CItem::GetRefineLevel)(this);
    }

    int CItem::GetShopBuyPrice() {
        return ((int(*)(CItem * const))Addr::CItem::GetShopBuyPrice)(this);
    }

    int CItem::GetSocketCount() {
        return ((int(*)(CItem * const))Addr::CItem::GetSocketCount)(this);
    }

    long CItem::GetValue(DWORD idx) {
        return ((long(*)(CItem * const, DWORD))Addr::CItem::GetValue__DWORD)(this, idx);
    }

    bool CItem::HasAttr(BYTE bApply) {
        return ((bool(*)(CItem * const, BYTE))Addr::CItem::HasAttr__BYTE)(this, bApply);
    }

    bool CItem::HasRareAttr(BYTE bApply) {
        return ((bool(*)(CItem * const, BYTE))Addr::CItem::HasRareAttr__BYTE)(this, bApply);
    }

    void CItem::Initialize() {
        ((void(*)(CItem * const))Addr::CItem::Initialize)(this);
    }

    bool CItem::IsAccessoryForSocket() {
        return ((bool(*)(CItem * const))Addr::CItem::IsAccessoryForSocket)(this);
    }

    bool CItem::IsEquipable() const {
        return ((bool(*)(const CItem * const))Addr::CItem::IsEquipable)(this);
    }

    bool CItem::IsNewMountItem() {
        return ((bool(*)(CItem * const))Addr::CItem::IsNewMountItem)(this);
    }

    bool CItem::IsOwnership(LPCHARACTER ch) {
        return ((bool(*)(CItem * const, LPCHARACTER))Addr::CItem::IsOwnership__LPCHARACTER)(this, ch);
    }

    bool CItem::IsPCBangItem() {
        return ((bool(*)(CItem * const))Addr::CItem::IsPCBangItem)(this);
    }

    bool CItem::IsPolymorphItem() {
        return ((bool(*)(CItem * const))Addr::CItem::IsPolymorphItem)(this);
    }

    bool CItem::IsRealTimeItem() {
        return ((bool(*)(CItem * const))Addr::CItem::IsRealTimeItem)(this);
    }

    bool CItem::IsRideItem() {
        return ((bool(*)(CItem * const))Addr::CItem::IsRideItem)(this);
    }

    void CItem::ModifyPoints(bool bAdd) {
        ((void(*)(CItem * const, bool))Addr::CItem::ModifyPoints__bool)(this, bAdd);
    }

    bool CItem::OnAfterCreatedItem() {
        return ((bool(*)(CItem * const))Addr::CItem::OnAfterCreatedItem)(this);
    }

    void CItem::PutAttribute(const int * aiAttrPercentTable) {
        ((void(*)(CItem * const, const int *))Addr::CItem::PutAttribute__const_int_)(this, aiAttrPercentTable);
    }

    void CItem::PutAttributeWithLevel(BYTE bLevel) {
        ((void(*)(CItem * const, BYTE))Addr::CItem::PutAttributeWithLevel__BYTE)(this, bLevel);
    }

    bool CItem::RemoveAttributeType(BYTE bType) {
        return ((bool(*)(CItem * const, BYTE))Addr::CItem::RemoveAttributeType__BYTE)(this, bType);
    }

    void CItem::RemoveFlag(long bit) {
        ((void(*)(CItem * const, long))Addr::CItem::RemoveFlag__long)(this, bit);
    }

    LPITEM CItem::RemoveFromCharacter() {
        return ((LPITEM(*)(CItem * const))Addr::CItem::RemoveFromCharacter)(this);
    }

    LPITEM CItem::RemoveFromGround() {
        return ((LPITEM(*)(CItem * const))Addr::CItem::RemoveFromGround)(this);
    }

    void CItem::Save() {
        ((void(*)(CItem * const))Addr::CItem::Save)(this);
    }

    void CItem::SetAccessorySocketDownGradeTime(DWORD time) {
        ((void(*)(CItem * const, DWORD))Addr::CItem::SetAccessorySocketDownGradeTime__DWORD)(this, time);
    }

    void CItem::SetAccessorySocketExpireEvent(LPEVENT pkEvent) {
        ((void(*)(CItem * const, LPEVENT))Addr::CItem::SetAccessorySocketExpireEvent__LPEVENT_)(this, pkEvent);
    }

    void CItem::SetAccessorySocketGrade(int iGrade) {
        ((void(*)(CItem * const, int))Addr::CItem::SetAccessorySocketGrade__int)(this, iGrade);
    }

    void CItem::SetAccessorySocketMaxGrade(int iMaxGrade) {
        ((void(*)(CItem * const, int))Addr::CItem::SetAccessorySocketMaxGrade__int)(this, iMaxGrade);
    }

    void CItem::SetAttribute(int i, BYTE bType, short sValue) {
        ((void(*)(CItem * const, int, BYTE, short))Addr::CItem::SetAttribute__int_BYTE_short)(this, i, bType, sValue);
    }

    void CItem::SetAttributes(const TPlayerItemAttribute * c_pAttribute) {
        ((void(*)(CItem * const, const TPlayerItemAttribute *))Addr::CItem::SetAttributes__const_TPlayerItemAttribute_)(this, c_pAttribute);
    }

    bool CItem::SetCount(DWORD count) {
        return ((bool(*)(CItem * const, DWORD))Addr::CItem::SetCount__DWORD)(this, count);
    }

    void CItem::SetDestroyEvent(LPEVENT pkEvent) {
        ((void(*)(CItem * const, LPEVENT))Addr::CItem::SetDestroyEvent__LPEVENT_)(this, pkEvent);
    }

    void CItem::SetExchanging(bool bOn) {
        ((void(*)(CItem * const, bool))Addr::CItem::SetExchanging__bool)(this, bOn);
    }

    void CItem::SetForceAttribute(int i, BYTE bType, short sValue) {
        ((void(*)(CItem * const, int, BYTE, short))Addr::CItem::SetForceAttribute__int_BYTE_short)(this, i, bType, sValue);
    }

    void CItem::SetOwnership(LPCHARACTER ch, int iSec) {
        ((void(*)(CItem * const, LPCHARACTER, int))Addr::CItem::SetOwnership__LPCHARACTER_int)(this, ch, iSec);
    }

    void CItem::SetOwnershipEvent(LPEVENT pkEvent) {
        ((void(*)(CItem * const, LPEVENT))Addr::CItem::SetOwnershipEvent__LPEVENT_)(this, pkEvent);
    }

    void CItem::SetProto(const TItemTable * table) {
        ((void(*)(CItem * const, const TItemTable *))Addr::CItem::SetProto__const_TItemTable_)(this, table);
    }

    void CItem::SetSocket(int i, long v, bool bLog) {
        ((void(*)(CItem * const, int, long, bool))Addr::CItem::SetSocket__int_long_bool)(this, i, v, bLog);
    }

    void CItem::SetSockets(const long * c_al) {
        ((void(*)(CItem * const, const long *))Addr::CItem::SetSockets__const_long_)(this, c_al);
    }

    void CItem::SetTimerBasedOnWearExpireEvent(LPEVENT pkEvent) {
        ((void(*)(CItem * const, LPEVENT))Addr::CItem::SetTimerBasedOnWearExpireEvent__LPEVENT_)(this, pkEvent);
    }

    void CItem::SetUniqueExpireEvent(LPEVENT pkEvent) {
        ((void(*)(CItem * const, LPEVENT))Addr::CItem::SetUniqueExpireEvent__LPEVENT_)(this, pkEvent);
    }

    void CItem::StartAccessorySocketExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StartAccessorySocketExpireEvent)(this);
    }

    void CItem::StartDestroyEvent(int iSec) {
        ((void(*)(CItem * const, int))Addr::CItem::StartDestroyEvent__int)(this, iSec);
    }

    void CItem::StartRealTimeExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StartRealTimeExpireEvent)(this);
    }

    void CItem::StartTimerBasedOnWearExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StartTimerBasedOnWearExpireEvent)(this);
    }

    void CItem::StartUniqueExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StartUniqueExpireEvent)(this);
    }

    void CItem::StopAccessorySocketExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StopAccessorySocketExpireEvent)(this);
    }

    void CItem::StopTimerBasedOnWearExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StopTimerBasedOnWearExpireEvent)(this);
    }

    void CItem::StopUniqueExpireEvent() {
        ((void(*)(CItem * const))Addr::CItem::StopUniqueExpireEvent)(this);
    }

    bool CItem::Unequip() {
        return ((bool(*)(CItem * const))Addr::CItem::Unequip)(this);
    }

    void CItem::UpdatePacket() {
        ((void(*)(CItem * const))Addr::CItem::UpdatePacket)(this);
    }

    void CItem::UsePacketEncode(LPCHARACTER ch, LPCHARACTER victim, packet_item_use * packet) {
        ((void(*)(CItem * const, LPCHARACTER, LPCHARACTER, packet_item_use *))Addr::CItem::UsePacketEncode__LPCHARACTER_LPCHARACTER_packet_item_use_)(this, ch, victim, packet);
    }

    const TItemTable* CItem::GetProto() {
        return m_pProto;
    }

    DWORD CItem::GetMaskVnum() {
        return m_dwMaskVnum;
    }

    long CItem::GetSocket(int pos) {
        if (pos < 3) {
            return m_alSockets[pos];
        }
        return 0;
    }
    void CItem::SetSkipSave(bool bbb){
       m_bSkipSave = bbb;
    }
    
    bool CItem::GetSkipSave(){
        return m_bSkipSave;
    }

    const TPlayerItemAttribute * CItem::GetAttributes() {
        return this->m_aAttr;
    }

    const TPlayerItemAttribute & CItem::GetAttribute(int attr) {
        return this->m_aAttr[attr];
    }

    BYTE CItem::GetAttributeType(int attr) {
        return this->m_aAttr[attr].bType;
    }

    short CItem::GetAttributeValue(int attr) {
        return this->m_aAttr[attr].sValue;
    }

    DWORD CItem::GetVnum(void) const {
        return this->m_pProto->dwVnum;
    }

    BYTE CItem::GetType() const {
        return this->m_pProto->bType;
    }
    
    BYTE CItem::GetSubType() const {
        return this->m_pProto->bSubType;
    }

    BYTE CItem::GetSize() {
        return this->m_pProto->bSize;
    }

    const char * CItem::GetName() {
        return this->m_pProto->szLocaleName;
    }

    const char * CItem::GetBaseName() {
        return this->m_pProto->szName;
    }

    DWORD CItem::GetID() {
        return this->m_dwID;
    }
}
