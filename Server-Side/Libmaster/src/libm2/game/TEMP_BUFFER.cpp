/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "TEMP_BUFFER.hpp"
#include "../addr.hpp"
namespace libm2 {

    TEMP_BUFFER::TEMP_BUFFER(int Size, bool bForceDelete) {
        ((void(*)(TEMP_BUFFER * const, int, bool))Addr::TEMP_BUFFER::TEMP_BUFFER__int_bool)(this, Size, bForceDelete);
    }

    const void * TEMP_BUFFER::read_peek() {
        return ((const void *(*)(TEMP_BUFFER * const))Addr::TEMP_BUFFER::read_peek)(this);
    }

    void TEMP_BUFFER::reset() {
        ((void(*)(TEMP_BUFFER * const))Addr::TEMP_BUFFER::reset)(this);
    }

    int TEMP_BUFFER::size() {
        return ((int(*)(TEMP_BUFFER * const))Addr::TEMP_BUFFER::size)(this);
    }

    void TEMP_BUFFER::write(const void * data, int size) {
        ((void(*)(TEMP_BUFFER * const, const void *, int))Addr::TEMP_BUFFER::write__const_void__int)(this, data, size);
    }

    TEMP_BUFFER::~TEMP_BUFFER() {
        ((void(*)(TEMP_BUFFER * const))Addr::TEMP_BUFFER::__TEMP_BUFFER)(this);
    }

    LPBUFFER TEMP_BUFFER::getptr() {
        return buf;
    }

}
