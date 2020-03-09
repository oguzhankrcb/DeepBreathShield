/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBGAME_GAME_QUEST_ASTATESCRIPT_HPP
#define __LIBGAME_GAME_QUEST_ASTATESCRIPT_HPP
#include <vector>
namespace libm2 {
    namespace quest {

        class AStateScriptType {
            std::vector<char> m_code;
        public:
            int GetSize(void) const;
            const char * GetCode(void) const;
        };
    }
}

#endif // __LIBGAME_GAME_QUEST_ASTATESCRIPT_HPP
