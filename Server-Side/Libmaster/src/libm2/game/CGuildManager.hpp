/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_GUILDMANAGER_HPP
#define __LIBM2_GAME_GUILDMANAGER_HPP
#include "../lib/GameSingleton.hpp"
#include "stdInclude.hpp"
#include "CGuild.hpp"
#include "CGuildWarReserveForGame.hpp"
#include "../addr.hpp"
#include "packet.hpp"
namespace libm2 {

    class CGuildManager : public GameSingleton<CGuildManager, (unsigned int) Addr::CGuildManager::singleton> {
    private:
        std::map<unsigned int, CGuild*> m_mapGuild;
        std::set<std::pair<unsigned int, unsigned int >> m_GuildWar;
        std::map<std::pair<unsigned int, unsigned int>, unsigned int> m_GuildWarEndTime;
        std::map<unsigned int, CGuild*> m_map_pkGuildByPID;
        std::map<unsigned int, CGuildWarReserveForGame*> m_map_kReserveWar;
        std::vector<CGuildWarReserveForGame*> m_vec_kReserveWar;
    public:
        CGuildManager(void);
        ~CGuildManager();
        DWORD CreateGuild(TGuildCreateParameter &);
        CGuild * FindGuild(DWORD);
        CGuild * FindGuildByName(std::string);
        void LoadGuild(DWORD);
        CGuild * TouchGuild(DWORD);
        void DisbandGuild(DWORD);
        void Initialize(void);
        void Link(DWORD, CGuild *);
        void Unlink(DWORD);
        CGuild * GetLinkedGuild(DWORD);
        void LoginMember(LPCHARACTER);
        void P2PLoginMember(DWORD);
        void P2PLogoutMember(DWORD);
        void SkillRecharge(void);
        void ShowGuildWarList(LPCHARACTER);
        void SendGuildWar(LPCHARACTER);
        void RequestEndWar(DWORD, DWORD);
        void RequestCancelWar(DWORD, DWORD);
        void RequestWarOver(DWORD, DWORD, DWORD, long);
        void DeclareWar(DWORD, DWORD, BYTE);
        void RefuseWar(DWORD, DWORD);
        void StartWar(DWORD, DWORD);
        void WaitStartWar(DWORD, DWORD);
        void WarOver(DWORD, DWORD, bool);
        void CancelWar(DWORD, DWORD);
        bool EndWar(DWORD, DWORD);
        void ReserveWar(DWORD, DWORD, BYTE);
        void ReserveWarAdd(TGuildWarReserve *);
        void ReserveWarDelete(DWORD);
        std::vector<CGuildWarReserveForGame*> & GetReserveWarRef(void);
        void ReserveWarBet(TPacketGDGuildWarBet *);
        bool IsBet(DWORD, const char *);
        void StopAllGuildWar(void);
        void Kill(LPCHARACTER, LPCHARACTER);
        int GetRank(CGuild *);
        void GetHighRankString(DWORD, char *, size_t);
        void GetAroundRankString(DWORD, char *, size_t);
        int GetDisbandDelay(void);
        int GetWithdrawDelay(void);
        void ChangeMaster(DWORD);
    };
}
#endif // __LIBM2_GAME_GUILDMANAGER_HPP
