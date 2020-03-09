/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CBUFFONATTRIBUTES_HPP
#define __LIBM2_GAME_CBUFFONATTRIBUTES_HPP
#include "stdInclude.hpp"
#include "CItem.hpp"
namespace libm2 {

    class CBuffOnAttributes {
    private:
        LPCHARACTER m_pBuffOwner;
        BYTE m_bPointType;
        BYTE m_bBuffValue;
        std::vector<unsigned char, std::allocator<unsigned char> > *m_p_vec_buff_wear_targets;
        std::map<unsigned char, int, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, int> > > m_map_additional_attrs;
    public:
        CBuffOnAttributes(LPCHARACTER, BYTE,
                std::vector<unsigned char, std::allocator<unsigned char> > *);
        ~CBuffOnAttributes();
        void RemoveBuffFromItem(LPITEM);
        void AddBuffFromItem(LPITEM);
        void ChangeBuffValue(BYTE);
        void GiveAllAttributes(void);
        bool On(BYTE);
        void Off(void);
    private:
        void Initialize(void);
    };
}
#endif // __LIBM2_GAME_CBUFFONATTRIBUTES_HPP
