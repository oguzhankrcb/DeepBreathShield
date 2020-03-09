/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBGAME_GAME_QUEST_HPP
#define __LIBGAME_GAME_QUEST_HPP
#include "AArgScript.hpp"
#include "../../utils/lua/lua.h"
namespace libm2 {
    namespace quest {

        class QuestState {
            lua_State *co;
            int ico;
            short args;
            BYTE suspend_state;
            int iIndex;
            bool bStart;
            int st;
            std::string _title;
            std::string _clock_name;
            std::string _counter_name;
            int _clock_value;
            int _counter_value;
            std::string _icon_file;
            std::vector<AArgScript*, std::allocator<AArgScript*> > chat_scripts;
        public:
            QuestState(void);
        };
    }
}
#endif // __LIBGAME_GAME_QUEST_HPP
