/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "LibM2.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
#include <errno.h>
namespace libm2 {
LibM2::LibM2(): singleton::singleton() {
    //detour_interpretCommand=simpleHook<tInterpretCommand>((unsigned int)Addr::misc::interpret_command,interpretCommand);
   // detour_registerQuestTables=simpleHook<void(*)(void)>((unsigned int)Addr::quest::misc::RegisterAffectFunctionTable,registerQuestTables);
    //onDeath=new events<CHARACTER*>;
}
void LibM2::removePRELOAD(){
    int i;
    for (i=0;environ[i];i++ )
    {
        if ( strstr(environ[i],"LD_PRELOAD=") || strstr(environ[i],"LD_32_PRELOAD="))
        {
             std::cout << "hacking out LD_PRELOAD from environ["<< i << "]" << std::endl;
             environ[i][0] = 'D';
        }
    }
};
}
