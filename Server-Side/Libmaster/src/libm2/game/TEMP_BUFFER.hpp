/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_TEMP_BUFFER_HPP
#define __LIBM2_GAME_TEMP_BUFFER_HPP
namespace libm2 {

    struct buffer {
        buffer *next;
        char *write_point;
        int write_point_pos;
        const char *read_point;
        int length;
        char *mem_data;
        int mem_size;
        long flag;
    } typedef *LPBUFFER;

    class TEMP_BUFFER {
    protected:
        LPBUFFER buf;
        bool forceDelete;

    public:
        TEMP_BUFFER(int, bool);
        ~TEMP_BUFFER();
        const void * read_peek(void);
        void write(const void *, int);
        int size(void);
        void reset(void);
        LPBUFFER getptr(void);
    };
}

#endif // __LIBM2_GAME_TEMP_BUFFER_HPP
