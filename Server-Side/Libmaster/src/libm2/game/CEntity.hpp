/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CENTITY_HPP
#define __LIBM2_GAME_CENTITY_HPP
#include "stdInclude.hpp"
#include "PIXEL_POSITION.hpp"
#include "DESC.hpp"
#include <tr1/unordered_map>
namespace libm2 {
    typedef std::set<CEntity*, std::less<CEntity*>, std::allocator<CEntity*> > ENTITY_SET;

    class CEntity {
    public:
        bool m_bIsObserver;
        bool m_bObserverModeChange;
        std::tr1::unordered_map<CEntity*, int> m_map_view;
        long m_lMapIndex;
    private:
        LPDESC m_lpDesc;
        int m_iType;
        bool m_bIsDestroyed;
        PIXEL_POSITION m_pos;
        int m_iViewAge;
        LPSECTREE m_pSectree;

    public:
        CEntity();
        ~CEntity();
        virtual void EncodeInsertPacket(LPENTITY) = 0;
        virtual void EncodeRemovePacket(LPENTITY) = 0;
    protected:
        void Initialize(int);
        void Destroy(void);
    public:
        void SetType(int);
        int GetType(void) const;
        bool IsType(int) const;
        void ViewCleanup(void);
        void ViewInsert(LPENTITY, bool);
        void ViewRemove(LPENTITY, bool);
        void ViewReencode(void);
        int GetViewAge(void) const;
        long GetX(void) const;
        long GetY(void) const;
        long GetZ(void) const;
        const PIXEL_POSITION & GetXYZ(void) const;
        void SetXYZ(long, long, long);
        void SetXYZ(const PIXEL_POSITION &);
        LPSECTREE GetSectree(void) const;
        void SetSectree(LPSECTREE);
        void UpdateSectree(void);
        void PacketAround(const void *, int, LPENTITY);
        void PacketView(const void *, int, LPENTITY);
        void BindDesc(LPDESC);
        LPDESC GetDesc(void) const;
        void SetMapIndex(long);
        long GetMapIndex(void) const;
        void SetObserverMode(bool);
        bool IsObserverMode(void) const;
    };
}
#endif // __LIBM2_GAME_CENTITY_HPP
