#ifndef __LIBM2_GAME_CMOBITEMGROUP_HPP
#define __LIBM2_GAME_CMOBITEMGROUP_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CMobItemGroup {
    private:

        class SMobItemGroupInfo {
            DWORD dwItemVnum;
            int iCount;
            int iRarePct;
        public:
            SMobItemGroupInfo(DWORD, int, int);
        };

        DWORD m_dwMobVnum;
        int m_iKillDrop;
        std::string m_stName;
        std::vector<int, std::allocator<int> > m_vecProbs;
        std::vector<SMobItemGroupInfo> m_vecItems;

    public:
        CMobItemGroup(DWORD, int, const std::string &);
        int GetKillPerDrop(void) const;
        void AddItem(DWORD, int, int, int);
        bool IsEmpty(void) const;
        int GetOneIndex(void) const;
        const CMobItemGroup::SMobItemGroupInfo & GetOne(void) const;
    };
}
#endif // __LIBM2_GAME_CMOBITEMGROUP_HPP
