/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CGRID_HPP
#define __LIBM2_GAME_CGRID_HPP
#include "stdInclude.hpp"
namespace libm2 {

    class CGrid {
    protected:
        int m_iWidth;
        int m_iHeight;
        char *m_pGrid;
    public:
        CGrid(int, int);
        CGrid(CGrid *, int, int);
        ~CGrid();
        void Clear(void);
        int FindBlank(int, int);
        bool IsEmpty(int, int, int);
        bool Put(int, int, int);
        void Get(int, int, int);
        void Print(void);
        unsigned int GetSize(void);
    };
}
#endif // __LIBM2_GAME_CGRID_HPP
