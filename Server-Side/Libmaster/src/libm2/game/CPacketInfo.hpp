/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CPACKETINFO_HPP
#define __LIBM2_GAME_CPACKETINFO_HPP
#include "stdInclude.hpp"
namespace libm2 {

    struct SPacketElement {
        int iSize;
        std::string stName;
        int iCalled;
        DWORD dwLoad;
        bool bSequencePacket;
    };
    typedef SPacketElement TPacketElement;

    class CPacketInfo {
    protected:
        void* __vtable;
        std::map<int, SPacketElement*, std::less<int>, std::allocator<std::pair<int const, SPacketElement*> > > m_pPacketMap;
        TPacketElement *m_pCurrentPacket;
        DWORD m_dwStartTime;

    public:
        CPacketInfo();
        ~CPacketInfo();
        void Set(int, int, const char *, bool);
        bool Get(int, int *, const char **);
        void Start(void);
        void End(void);
        void Log(const char *);
        bool IsSequence(int);
        void SetSequence(int, bool);
    private:
        TPacketElement * GetElement(int);
    };

    class CPacketInfoCG : public CPacketInfo {
    public:
        CPacketInfoCG();
        ~CPacketInfoCG();
    };

    class CPacketInfoGG : public CPacketInfo {
    public:
        CPacketInfoGG(void);
        ~CPacketInfoGG();
    };
}
#endif // __LIBM2_GAME_CPACKETINFO_HPP
