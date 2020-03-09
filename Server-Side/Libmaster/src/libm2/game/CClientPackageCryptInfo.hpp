/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CCLIENTPACKAGECRYPTINFO_HPP
#define __LIBM2_GAME_CCLIENTPACKAGECRYPTINFO_HPP
#include "stdInclude.hpp"
namespace libm2 {

    struct SSupplementaryDataBlockInfo {
        DWORD dwPackageIdentifier;
        DWORD dwFileIdentifier;
        std::vector<unsigned char> vecSDBStream;
    public:
        void Serialize(BYTE *);
        DWORD GetSerializedSize(void) const;
    };

    class CClientPackageCryptInfo {
    public:

        class SPerFileSDBInfo {
        public:
            std::vector<SSupplementaryDataBlockInfo> vecSDBInfos;
        private:
            BYTE *m_pSerializedStream;

        public:
            SPerFileSDBInfo(void);
            ~SPerFileSDBInfo();
            DWORD GetSize(void) const;
            BYTE * GetSerializedStream(void);
        };

    private:
        int m_nCryptKeyPackageCnt;
        std::vector<unsigned char> m_vecPackageCryptKeys;
        BYTE *m_pSerializedCryptKeyStream;
        boost::unordered_map<std::string, SPerFileSDBInfo> m_mapPackageSDB;

    public:
        CClientPackageCryptInfo(void);
        ~CClientPackageCryptInfo();
        bool LoadPackageCryptInfo(const char *);
        void GetPackageCryptKeys(BYTE **, int &);
        bool GetRelatedMapSDBStreams(const char *, BYTE **, int &);
    private:
        bool LoadPackageCryptFile(const char *);
    };

}
#endif // __LIBM2_GAME_CCLIENTPACKAGECRYPTINFO_HPP
