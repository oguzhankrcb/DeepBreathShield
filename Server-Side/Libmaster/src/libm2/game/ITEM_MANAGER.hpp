/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_ITEM_MANAGER_HPP
#define __LIBM2_GAME_ITEM_MANAGER_HPP
#include "stdInclude.hpp"
#include "SItemTable.hpp"
#include "CItem.hpp"
#include "../addr.hpp"
#include "../lib/GameSingleton.hpp"
#include "CDropItemGroup.hpp"
#include "CSpecialItemGroup.hpp"
#include "CSpecialAttrGroup.hpp"
#include "CMobItemGroup.hpp"
#include "CLevelItemGroup.hpp"
#include "CBuyerThiefGlovesItemGroup.hpp"
namespace libm2 {

    struct tItemIDRange {
        DWORD dwMin;
        DWORD dwMax;
        DWORD dwUsableItemIDMin;
    } typedef TItemIDRangeTable;

    class ITEM_MANAGER : public GameSingleton<ITEM_MANAGER, (unsigned int) Addr::ITEM_MANAGER::singleton> {
    protected:
        std::vector<SItemTable> m_vec_prototype;
        std::map<unsigned int, unsigned int> m_map_ItemRefineFrom;
        int m_iTopOfTable;
        std::map<unsigned int, CItem*> m_VIDMap;
        DWORD m_dwVIDCount;
        DWORD m_dwCurrentID;
        TItemIDRangeTable m_ItemIDRange;
        TItemIDRangeTable m_ItemIDSpareRange;
        std::tr1::unordered_set<CItem*> m_set_pkItemForDelayedSave;
        std::map<unsigned int, CItem*> m_map_pkItemByID;
        std::map<unsigned int, unsigned int> m_map_dwEtcItemDropProb;
        std::map<unsigned int, CDropItemGroup*> m_map_pkDropItemGroup;
        std::map<unsigned int, CSpecialItemGroup*> m_map_pkSpecialItemGroup;
        std::map<unsigned int, CSpecialItemGroup*> m_map_pkQuestItemGroup;
        std::map<unsigned int, CSpecialAttrGroup*> m_map_pkSpecialAttrGroup;
        std::map<unsigned int, CMobItemGroup*> m_map_pkMobItemGroup;
        std::map<unsigned int, CLevelItemGroup*> m_map_pkLevelItemGroup;
        std::map<unsigned int, CBuyerThiefGlovesItemGroup*> m_map_pkGloveItemGroup;
        std::map<unsigned int, int> m_ItemToSpecialGroup;
    private:
        std::map<unsigned int, unsigned int> m_map_new_to_ori;
    public:
        std::map<unsigned int, SItemTable> m_map_vid;
        static const int MAX_NORM_ATTR_NUM;
        static const int MAX_RARE_ATTR_NUM;
        ITEM_MANAGER(void);
        ~ITEM_MANAGER();
        bool Initialize(TItemTable *, int);
        void Destroy(void);
        void Update(void);
        void GracefulShutdown(void);
        DWORD GetNewID(void);
        bool SetMaxItemID(TItemIDRangeTable);
        bool SetMaxSpareItemID(TItemIDRangeTable);
        void DelayedSave(LPITEM);
        void FlushDelayedSave(LPITEM);
        void SaveSingleItem(LPITEM);
        LPITEM CreateItem(DWORD, DWORD, DWORD, bool, int, bool);
        void DestroyItem(LPITEM);
        void RemoveItem(LPITEM, const char *);
        LPITEM Find(DWORD);
        LPITEM FindByVID(DWORD);
        TItemTable * GetTable(DWORD);
        const std::vector<SItemTable, std::allocator<SItemTable> > & GetTable(void);
        bool GetVnum(const char *, DWORD &);
        bool GetVnumByOriginalName(const char *, DWORD &);
        bool CreateDropItem(LPCHARACTER, LPCHARACTER, std::vector<CItem*, std::allocator<CItem*> > &);
        bool ReadCommonDropItemFile(const char *);
        bool ReadEtcDropItemFile(const char *);
        bool ReadDropItemGroup(const char *);
        bool ReadMonsterDropItemGroup(const char *);
        bool ReadSpecialDropItemFile(const char *);
        bool ConvSpecialDropItemFile(void);
        DWORD GetRefineFromVnum(DWORD);
        const CSpecialItemGroup * GetSpecialItemGroup(DWORD);
        const CSpecialAttrGroup * GetSpecialAttrGroup(DWORD);
    protected:
        int RealNumber(DWORD);
        void CreateQuestDropItem(LPCHARACTER, LPCHARACTER, std::vector<CItem*, std::allocator<CItem*> > &, int, int);
    public:
        DWORD GetMaskVnum(DWORD);
        std::map<unsigned int, SItemTable, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, SItemTable> > > & GetVIDMap(void);
        std::vector<SItemTable, std::allocator<SItemTable> > & GetVecProto(void);
        bool ReadItemVnumMaskTable(const char *);
    };
}
#endif // __LIBM2_GAME_ITEM_MANAGER_HPP
