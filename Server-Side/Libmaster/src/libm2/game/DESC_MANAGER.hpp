/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_DESC_MANAGER_HPP
#define __LIBM2_GAME_DESC_MANAGER_HPP
#include "stdInclude.hpp"
#include "../addr.hpp"
#include "../lib/GameSingleton.hpp"
#include "misc.hpp"
#include "DESC.hpp"
#include "CClientPackageCryptInfo.hpp"
#include "CLIENT_DESC.hpp"

namespace libm2 {

    class DESC_MANAGER : public GameSingleton<DESC_MANAGER, (unsigned int) Addr::DESC_MANAGER::singleton> {
    private:
        bool m_bDisconnectInvalidCRC;
        std::map<unsigned int, unsigned int> m_map_handle_random_key;
        std::tr1::unordered_set<CLIENT_DESC*> m_set_pkClientDesc;
        std::tr1::unordered_set<DESC*> m_set_pkDesc;
        std::map<int, DESC*> m_map_handle;
        std::map<unsigned int, DESC*> m_map_handshake;
        boost::unordered_map<std::string, DESC*> m_map_loginName;
        std::map<unsigned int, CLoginKey*> m_map_pkLoginKey;
        int m_iSocketsConnected;
        int m_iHandleCount;
        int m_iLocalUserCount;
        int m_aiEmpireUserCount[4];
        bool m_bDestroyed;
        CClientPackageCryptInfo *m_pPackageCrypt;

    public:
        DESC_MANAGER(void);
        ~DESC_MANAGER();
        void Initialize(void);
        void Destroy(void);
        LPDESC AcceptDesc(LPFDWATCH, socket_t);
        LPDESC AcceptP2PDesc(LPFDWATCH, socket_t);
        void DestroyDesc(LPDESC, bool);
        DWORD CreateHandshake(void);
        LPCLIENT_DESC CreateConnectionDesc(LPFDWATCH, const char *, WORD, int, bool);
        void TryConnect(void);
        LPDESC FindByHandle(DWORD);
        LPDESC FindByHandshake(DWORD);
        LPDESC FindByCharacterName(const char *);
        LPDESC FindByLoginName(const std::string &);
        void ConnectAccount(const std::string &, LPDESC);
        void DisconnectAccount(const std::string &);
        void DestroyClosed(void);
        void UpdateLocalUserCount(void);
        DWORD GetLocalUserCount(void);
        void GetUserCount(int &, int **, int &);
        const std::tr1::unordered_set<DESC*> & GetClientSet(void);
        DWORD MakeRandomKey(DWORD);
        bool GetRandomKey(DWORD, DWORD *);
        DWORD CreateLoginKey(LPDESC);
        LPDESC FindByLoginKey(DWORD);
        void ProcessExpiredLoginKey(void);
        bool IsDisconnectInvalidCRC(void);
        void SetDisconnectInvalidCRCMode(bool);
        bool IsP2PDescExist(const char *, WORD);
        bool LoadClientPackageCryptInfo(const char *);
        void SendClientPackageCryptKey(LPDESC);
        void SendClientPackageSDBToLoadMap(LPDESC, const char *);
        static void NotifyClientPackageFileChanged(const std::string &, eFileUpdatedOptions);
    };
}

#endif // __LIBM2_GAME_DESC_MANAGER_HPP
