/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CHARACTERVECTORINTERACTOR_HPP
#define __LIBM2_GAME_CHARACTERVECTORINTERACTOR_HPP
#include "CHARACTER.hpp"
namespace libm2 {

    struct CharacterVectorInteractor : public std::vector<CHARACTER*> {
    private:
        bool m_bMyBegin;

    public:
        CharacterVectorInteractor(void);
        CharacterVectorInteractor(const CHARACTER_SET &);
        ~CharacterVectorInteractor();
    };
}
#endif // __LIBM2_GAME_CHARACTERVECTORINTERACTOR_HPP
