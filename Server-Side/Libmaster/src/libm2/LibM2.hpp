/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIBM2_HPP
#define __LIBM2_LIBM2_HPP
#include "game/stdInclude.hpp"
#include "lib/singleton.hpp"
#include "utils/detours.h"
#include "lib/hook.hpp"
#include "game/quest/CQuestManager.hpp"
#include "utils/lua.hpp"
#include "lib/event.hpp"
extern char** environ;
namespace libm2{
typedef void(*tInterpretCommand)(LPCHARACTER,const char*, size_t);

class LibM2: public singleton<LibM2>{
  protected:
   
  public:
    //events<CHARACTER*>* onDeath;
  public:
    LibM2();
    static void removePRELOAD();
};
}
#endif // __LIBM2_LIBM2_HPP
