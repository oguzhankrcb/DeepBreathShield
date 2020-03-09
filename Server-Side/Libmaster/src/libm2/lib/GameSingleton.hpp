/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIB_GAMESINGLETON_HPP
#define __LIBM2_LIB_GAMESINGLETON_HPP
#include <cstddef>
namespace libm2{
template <typename T, unsigned int TAddr>
class GameSingleton
{
  public:
    static T * ms_singleton;
    char __dummy_data_to_fix_alignment[4]; // The singleton class in the game binary for some reason is 4bytes in size
    GameSingleton(void){};
    ~GameSingleton(){};
    static T *instance(){
        if (!ms_singleton){
            ms_singleton=*(T**)TAddr;
        }
        return ms_singleton;
    };
};
template <typename T, unsigned int TAddr> T* GameSingleton<T,TAddr>::ms_singleton = NULL;
}
#endif // __LIBM2_LIB_GAMESINGLETON_HPP
