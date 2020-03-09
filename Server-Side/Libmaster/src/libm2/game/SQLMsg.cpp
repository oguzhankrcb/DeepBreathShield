/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "SQLMsg.hpp"
#include "../addr.hpp"
namespace libm2 {

    /*  MYSQL *m_pkSQL;
        int iID;
        std::string stQuery;
        std::vector<_SQLResult*> vec_pkResult;
        unsigned int uiResultPos;
        void *pvUserData;
        bool bReturn;
        unsigned int uiSQLErrno;*/
    _SQLMsg::~_SQLMsg() {
        ((void(*)(_SQLMsg *))Addr::_SQLMsg::___SQLMsg)(this);
    }
    // void _SQLMsg::Store(void); not sure what that does

    SQLResult * _SQLMsg::Get() {
        return vec_pkResult[uiResultPos];
    };

    bool _SQLMsg::Next() {
        if (uiResultPos < vec_pkResult.size()) {
            uiResultPos++;
            return true;
        }
        return false;
    };
}
