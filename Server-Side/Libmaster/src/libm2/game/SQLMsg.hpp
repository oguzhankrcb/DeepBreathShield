/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_SQLMSG_HPP
#define __LIBM2_GAME_SQLMSG_HPP
#include "stdInclude.hpp"
#include "SQLResult.hpp"
namespace libm2 {

    class _SQLMsg {
        MYSQL *m_pkSQL;
        int iID;
        std::string stQuery;
        std::vector<_SQLResult*> vec_pkResult;
        unsigned int uiResultPos;
        void *pvUserData;
        bool bReturn;
        unsigned int uiSQLErrno;
    public:
        _SQLMsg(void);
        ~_SQLMsg();
        void Store(void);
        SQLResult * Get(void);
        bool Next(void);
    } typedef SQLMsg;
}
#endif // __LIBM2_GAME_SQLMSG_HPP
