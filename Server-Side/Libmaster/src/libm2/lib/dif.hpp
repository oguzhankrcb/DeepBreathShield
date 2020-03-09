/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIB_DIF_HPP
#define __LIBM2_LIB_DIF_HPP
#include <cstddef>
namespace libm2{
void dif(void* addr, void* data, size_t len);
bool unprotect(void* addr, size_t len);
}
#endif // __LIBM2_LIB_DIF_HPP
