/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "dif.hpp"
#include <cstring>
#include <sys/mman.h>
#include <iostream>
#include <cstdlib>
#include <errno.h>
namespace libm2{

void dif(void* addr, void* data, size_t len){
    if (!unprotect(addr,len)){
        std::cout << "FATAL dif(" << std::hex <<addr <<", " << data << ", " << std::dec << len << ") ERRNO " << errno << std::endl;
        abort();
    }
    memcpy(addr, data, len);
}
bool unprotect(void*addr,size_t len){
    if (mprotect(addr, len, PROT_READ|PROT_WRITE|PROT_EXEC)  != 0){
        return false;
    }
    return true;
}
}
