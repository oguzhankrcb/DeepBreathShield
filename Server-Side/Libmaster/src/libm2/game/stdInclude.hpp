/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "fwDecl.hpp"
#ifndef __LIBM2_GAME_STDINCLUDE_HPP
#define __LIBM2_GAME_STDINCLUDE_HPP
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <functional>
#include <string>
#include <vector>
//#include <unordered_map>
#include <map>
#include <list>
#include <queue>
#include <unordered_set>
#include <set>
#include <stdexcept>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <netinet/in.h>
#include <boost/version.hpp>
#if BOOST_VERSION > 104700 || BOOST_VERSION < 104100
namespace boost {

    template <typename Key, typename Mapped, typename Hash = int, typename Pred = int, typename Alloc = int> class unordered_map {
        char data[28];
    };
}
#else
#include <boost/unordered_map.hpp>
#endif
#include <boost/unordered_set.hpp>
#include <typeinfo>
#include "../utils/lua.hpp"
#include <boost/intrusive_ptr.hpp>
namespace libm2 {
    // Typedefs
    typedef int socket_t;
    typedef uint8_t BYTE;
    typedef uint16_t WORD;
    typedef uint32_t DWORD;
    typedef uint64_t QWORD;

    typedef struct seq_t {
        BYTE hdr;
        BYTE seq;
    } seq_t;

    typedef std::vector<seq_t, std::allocator<seq_t> > seq_vector_t;
}
#endif // __LIBM2_GAME_STDINCLUDE_HPP
