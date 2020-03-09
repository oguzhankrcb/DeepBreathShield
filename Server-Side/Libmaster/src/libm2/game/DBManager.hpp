/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_DBMANAGER_HPP
#define __LIBM2_GAME_DBMANAGER_HPP
#include "stdInclude.hpp"
#include "../lib/GameSingleton.hpp"
#include "../addr.hpp"
#include "CAsyncSQL.hpp"
#include "CLoginData.hpp"
#include "SUseTime.hpp"
namespace libm2 {

    class DBManager : public GameSingleton<DBManager, (unsigned int) Addr::DBManager::singleton> {
    private:
        CAsyncSQL m_sql;
        CAsyncSQL m_sql_direct;
        bool m_bIsConnect;
        std::map<std::string, std::string> m_map_dbstring;
        std::vector<std::string> m_vec_GreetMessage;
        std::map<unsigned int, CLoginData*> m_map_pkLoginData;
        std::map<std::string, CLoginData*> mapLDBilling;
        std::vector<SUseTime> m_vec_kUseTime;
    public:
        DBManager(void);
        ~DBManager();
        bool IsConnected(void);
        bool Connect(const char *, int, const char *, const char *, const char *);
        void Query(const char *, ...);
        SQLMsg * DirectQuery(const char *, ...);
        void ReturnQuery(int, DWORD, void *, const char *, ...);
        void Process(void);
        void AnalyzeReturnQuery(SQLMsg *);
        void SendMoneyLog(BYTE, DWORD, int);
        void LoginPrepare(BYTE, DWORD, long, LPDESC, DWORD *, int *);
        void SendAuthLogin(LPDESC);
        void SendLoginPing(const char *);
        void InsertLoginData(CLoginData *);
        void DeleteLoginData(CLoginData *);
        CLoginData * GetLoginData(DWORD);
        void SetBilling(DWORD, bool, bool);
        void PushBilling(CLoginData *);
        void FlushBilling(bool);
        void CheckBilling(void);
        void StopAllBilling(void);
        DWORD CountQuery(void);
        DWORD CountQueryResult(void);
        void ResetQueryResult(void);
        void RequestBlockException(const char *, int);
        void LoadDBString(void);
        const std::string & GetDBString(const std::string &);
        const std::vector<std::string> & GetGreetMessage(void);
        size_t EscapeString(char *, size_t, const char *, size_t);
    private:
        SQLMsg * PopResult(void);
    };
}
#endif // __LIBM2_GAME_DBMANAGER_HPP
