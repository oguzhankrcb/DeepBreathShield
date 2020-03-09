/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_QUEST_REWARDDATA__HPP
#define __LIBM2_GAME_QUEST_REWARDDATA__HPP
namespace libm2 {
    namespace quest {

        class RewardData {
        public:

            enum RewardType {
                REWARD_TYPE_NONE,
                REWARD_TYPE_EXP,
                REWARD_TYPE_ITEM
            };
            RewardType type;
            DWORD value1;
            int value2;
        public:
            RewardData(RewardType, DWORD, int);
        };
    }
}
#endif // __LIBM2_GAME_QUEST_REWARDDATA__HPP
