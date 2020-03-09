/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CINPUTTEEN_HPP
#define __LIBM2_GAME_CINPUTTEEN_HPP
#include "CInputProcessor.hpp"
namespace libm2 {

    class CInputTeen : public CInputProcessor {
    private:
        int m_step;
    public:
        virtual BYTE GetType(void);
        void SetStep(int);
    protected:
        virtual bool Process(LPDESC, const void *, int, int &);
        virtual int Analyze(LPDESC, BYTE, const char *);
    private:
        bool ProcessHandshake(LPDESC, const void *, size_t, int &);
        bool ProcessMain(LPDESC, const void *, size_t, int &);
    };
}

#endif // __LIBM2_GAME_CINPUTTEEN_HPP
