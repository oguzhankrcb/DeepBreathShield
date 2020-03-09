/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIB_HOOK_HPP
#define __LIBM2_LIB_HOOK_HPP
#include "../utils/detours.h"
#include "../game/stdInclude.hpp"
#include "singleton.hpp"
namespace libm2{
template<typename TType,unsigned int TAddress,class T> class Hook: public singleton<T>{
protected:
    MologieDetours::Detour<TType>* detour = NULL;
    Hook(){
        std::cout << "Hook @0x" << std::hex << TAddress << std::dec << std::endl;
        detour=new MologieDetours::Detour<TType>((TType)TAddress, T::hook);
    };
};
template<typename TType>
MologieDetours::Detour<TType>* simpleHook(unsigned int addr, TType hook){
        std::cout << "Hook @0x" << std::hex << addr << std::dec << std::endl;
        return new MologieDetours::Detour<TType>((TType)addr, hook);
};
}
#endif // __LIBM2_HOOK_HOOK_HPP
