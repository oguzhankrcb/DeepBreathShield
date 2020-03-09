/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CINPUTLOGIN_HPP
#define __LIBM2_GAME_CINPUTLOGIN_HPP
#include "CInputProcessor.hpp"
namespace libm2 {

    class CInputLogin : public CInputProcessor {
    public:
        virtual BYTE GetType(void);
    protected:
        virtual int Analyze(LPDESC, BYTE, const char *);
        void Login(LPDESC, const char *);
        void LoginByKey(LPDESC, const char *);
        void CharacterSelect(LPDESC, const char *);
        void CharacterCreate(LPDESC, const char *);
        void CharacterDelete(LPDESC, const char *);
        void Entergame(LPDESC, const char *);
        void Empire(LPDESC, const char *);
        void GuildMarkCRCList(LPDESC, const char *);
        void GuildMarkIDXList(LPDESC, const char *);
        void GuildMarkUpload(LPDESC, const char *);
        int GuildSymbolUpload(LPDESC, const char *, size_t);
        void GuildSymbolCRC(LPDESC, const char *);
        void ChangeName(LPDESC, const char *);
    };
}

#endif // __LIBM2_GAME_CINPUTLOGIN_HPP
