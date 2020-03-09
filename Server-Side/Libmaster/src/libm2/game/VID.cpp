/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "VID.hpp"
namespace libm2 {

    VID::VID() {
    }

    VID::VID(DWORD id, DWORD crc) {
        m_id = id;
        m_crc = crc;
    }

    VID::operator DWORD() const {
        return m_id;
    };
    //   const VID & operator=(const VID &);

    bool VID::operator==(const VID &v) const {
        DWORD dvid = v;
        return this->m_id == dvid;
    };

    bool VID::operator!=(const VID &v) const {
        DWORD dvid = v;
        return m_id != dvid;
    };
}
