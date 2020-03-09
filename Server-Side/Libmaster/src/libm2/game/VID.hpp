/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_VID_HPP
#define __LIBM2_GAME_VID_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class VID {
    private:
        DWORD m_id;
        DWORD m_crc;

    public:
        VID();
        VID(DWORD, DWORD);
        //    VID(const VID &);
        const VID & operator=(const VID &);
        bool operator==(const VID &) const;
        bool operator!=(const VID &) const;
        operator DWORD() const;
        void Reset();
    };
}
#endif // __LIBM2_GAME_VID_HPP
