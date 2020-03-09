/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_MARRIAGE_WEDDINGMAP_HPP
#define __LIBM2_GAME_MARRIAGE_WEDDINGMAP_HPP
#include "../stdInclude.hpp"
namespace libm2{
namespace marriage{
class WeddingMap {
  private:
    DWORD m_dwMapIndex;
    LPEVENT m_pEndEvent;
    CHARACTER_SET m_set_pkChr;
    bool m_isDark;
    bool m_isSnow;
    bool m_isMusic;
    DWORD dwPID1;
    DWORD dwPID2;
    std::string m_stMusicFileName;

  public:
    WeddingMap(DWORD, DWORD, DWORD);
    ~WeddingMap();
    DWORD GetMapIndex(void);
    void WarpAll(void);
    void DestroyAll(void);
    void Notice(const char *);
    void SetEnded(void);
    void IncMember(LPCHARACTER);
    void DecMember(LPCHARACTER);
    bool IsMember(LPCHARACTER);
    void SetDark(bool);
    void SetSnow(bool);
    void SetMusic(bool, const char *);
    bool IsPlayingMusic(void);
    void SendLocalEvent(LPCHARACTER);
    void ShoutInMap(BYTE, const char *);
  private:
    const char * __BuildCommandPlayMusic(char *, size_t, BYTE, const char *);

    typedef CHARACTER_SET charset_t;
};
}
}
#endif // __LIBM2_GAME_MARRIAGE_WEDDINGMAP_HPP
