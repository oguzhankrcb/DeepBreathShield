/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CASYNCSQL_HPP
#define __LIBM2_GAME_CASYNCSQL_HPP
#include <mysql/mysql.h>
#include "stdInclude.hpp"
#include "CSemaphore.hpp"
#include "SQLMsg.hpp"
#include "SQLResult.hpp"
namespace libm2 {

    class CAsyncSQL {
    protected:
        MYSQL m_hDB;
        std::string m_stHost;
        std::string m_stUser;
        std::string m_stPassword;
        std::string m_stDB;
        std::string m_stLocale;
        int m_iMsgCount;
        int m_aiPipe[2];
        int m_iPort;
        std::queue<_SQLMsg*, std::deque<_SQLMsg*, std::allocator<_SQLMsg*> > > m_queue_query;
        std::queue<_SQLMsg*, std::deque<_SQLMsg*, std::allocator<_SQLMsg*> > > m_queue_query_copy;
        std::queue<_SQLMsg*, std::deque<_SQLMsg*, std::allocator<_SQLMsg*> > > m_queue_result;
        volatile bool m_bEnd;
        pthread_t m_hThread;
        pthread_mutex_t *m_mtxQuery;
        pthread_mutex_t *m_mtxResult;
        CSemaphore m_sem;
        int m_iQueryFinished;
        unsigned long m_ulThreadID;
        bool m_bConnected;
        int m_iCopiedQuery;

    public:
        CAsyncSQL(void);
        ~CAsyncSQL();
        void Quit(void);
        bool Setup(const char *, const char *, const char *, const char *, const char *, bool, int);
        bool Setup(CAsyncSQL *, bool);
        bool Connect(void);
        bool IsConnected(void);
        bool QueryLocaleSet(void);
        void AsyncQuery(const char *);
        void ReturnQuery(const char *, void *);
        SQLMsg * DirectQuery(const char *);
        DWORD CountQuery(void);
        DWORD CountResult(void);
        void PushResult(SQLMsg *);
        bool PopResult(SQLMsg **);
        void ChildLoop(void);
        MYSQL * GetSQLHandle(void);
        int CountQueryFinished(void);
        void ResetQueryFinished(void);
        size_t EscapeString(char *, size_t, const char *, size_t);
    protected:
        void Destroy(void);
        void PushQuery(SQLMsg *);
        bool PeekQuery(SQLMsg **);
        bool PopQuery(int);
        bool PeekQueryFromCopyQueue(SQLMsg **);
        int CopyQuery(void);
        bool PopQueryFromCopyQueue(void);
    public:
        int GetCopiedQueryCount(void);
        void ResetCopiedQueryCount(void);
        void AddCopiedQueryCount(int);
    };
}
#endif // __LIBM2_GAME_CASYNCSQL_HPP
