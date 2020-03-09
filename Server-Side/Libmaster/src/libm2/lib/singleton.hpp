/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIB_SINGLETON_HPP
#define __LIBM2_LIB_SINGLETON_HPP
#include <cstddef>
namespace libm2{
template <typename T>
class singleton
{
  public:
    static T * ms_singleton;
    singleton(void){};
    ~singleton(){};
    static T *instance(){
        if (!ms_singleton){
            ms_singleton=new T();
        }
        return ms_singleton;
    };
};
template <typename T> T* singleton<T>::ms_singleton = NULL;
}
#endif // __LIBM2_LIB_SINGLETON_HPP
