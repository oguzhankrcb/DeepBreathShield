/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_QUEST_AARGSCRIPT_HPP
#define __LIBM2_GAME_QUEST_AARGSCRIPT_HPP
#include "AStateScriptType.hpp"
#include <vector>
namespace libm2 {
    namespace quest {

        class AArgScript {
            std::string arg;
            std::vector<char> when_condition;
            AStateScriptType script;
            unsigned int quest_index;
            int state_index;
        public:
            AArgScript(void);
        };
    }
}
#endif // __LIBM2_GAME_QUEST_AARGSCRIPT_HPP
