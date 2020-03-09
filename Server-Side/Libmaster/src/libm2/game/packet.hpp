/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_PACKET_HPP
#define __LIBM2_GAME_PACKET_HPP
#include "stdInclude.hpp"
namespace libm2 {

    struct packet_motion {
        BYTE header;
        DWORD vid;
        DWORD victim_vid;
        WORD motion;
    };

    struct packet_item_use {
        BYTE header;
        BYTE pos;
        DWORD ch_vid;
        DWORD victim_vid;
        DWORD vnum;
    };

    struct TPacketAffectElement {
        DWORD dwType;
        BYTE bApplyOn;
        long lApplyValue;
        DWORD dwFlag;
        long lDuration;
        long lSPCost;
    };

    struct packet_party_update {
        BYTE header;
        DWORD pid;
        BYTE role;
        BYTE percent_hp;
        short affects[7];
    } typedef TPacketGCPartyUpdate;

    struct SPacketMyshopPricelistHeader {
        DWORD dwOwnerID;
        BYTE byCount;
    } typedef TPacketMyshopPricelistHeader;

    struct tChangeMonarchLordACK {
        BYTE bEmpire;
        DWORD dwPID;
        char szName[32];
        char szDate[32];
    } typedef TPacketChangeMonarchLordACK;

    struct tBlockCountryIp {
        DWORD ip_from;
        DWORD ip_to;
    } typedef TPacketBlockCountryIp;

    struct tBlockException {
        BYTE cmd;
        char login[31];
    } typedef TPacketBlockException;

    struct TMonarchInfo {
        DWORD pid[4];
        int64_t money[4];
        char name[4][32];
        char date[4][32];
    };

    struct packet_GuildWarBet {
        DWORD dwWarID;
        char szLogin[31];
        DWORD dwGold;
        DWORD dwGuild;
    };

    struct packet_MarriageAdd {
        DWORD dwPID1;
        DWORD dwPID2;
        time_t tMarryTime;
        char szName1[25];
        char szName2[25];
    };

    struct packet_MarriageUpdate {
        DWORD dwPID1;
        DWORD dwPID2;
        int iLovePoint;
        BYTE byMarried;
    };

    struct packet_MarriageRemove {
        DWORD dwPID1;
        DWORD dwPID2;
    };

    struct packet_WeddingRequest {
        DWORD dwPID1;
        DWORD dwPID2;
    };

    struct packet_WeddingReady {
        DWORD dwPID1;
        DWORD dwPID2;
        DWORD dwMapIndex;
    };

    struct packet_WeddingStart {
        DWORD dwPID1;
        DWORD dwPID2;
    };

    struct packet_WeddingEnd {
        DWORD dwPID1;
        DWORD dwPID2;
    };

    struct tNeedLoginLogInfo {
        DWORD dwPlayerID;
    } typedef TPacketNeedLoginLogInfo;

    struct tChangeGuildMaster {
        DWORD dwGuildID;
        DWORD idFrom;
        DWORD idTo;
    } typedef TPacketChangeGuildMaster;

    struct $_63 {
        DWORD dwWarID;
        char szLogin[31];
        DWORD dwGold;
        DWORD dwGuild;
    } typedef TPacketGDGuildWarBet;

    struct SPacketGGLogin {
        BYTE bHeader;
        char szName[25];
        DWORD dwPID;
        BYTE bEmpire;
        BYTE bMapIndex;
        BYTE bChannel;
    } typedef TPacketGGLogin;

    struct packet_points {
        BYTE header;
        DWORD points[255];
    } typedef TPacketGCPoints;

    struct packet_main_character {
        BYTE header;
        DWORD dwVID;
        WORD wRaceNum;
        char szName[25];
        long lx;
        long ly;
        char empire;
        WORD skill_group;
    } typedef TPacketGCMainCharacter;

    struct packet_del_char {
        BYTE header;
        DWORD id;
    } typedef TPacketGCCharacterDelete;

    struct packet_quest_confirm {
        BYTE header;
        char msg[65];
        DWORD requestPID;
    } typedef TPacketGCQuestConfirm;

    struct command_sync_position_element {
        DWORD dwVID;
        long lX;
        long lY;
    } typedef TPacketCGSyncPositionElement;

    struct packet_land_list {
        BYTE header;
        WORD size;
    } typedef TPacketGCLandList;

    struct packet_land_element {
        DWORD dwVID;
        long x;
        long y;
        long width;
        long height;
        DWORD dwGuildID;
    } typedef TPacketGCLandElement;

    struct SPacketGCPanamaPack {
        BYTE header;
        char szPackName[256];
        BYTE abIV[32];
    } typedef TPacketGCPanamaPack;

    struct packet_shop {
        BYTE header;
        WORD size;
        BYTE subheader;
    } typedef TPacketGCShop;

    struct packet_shop_item {
        DWORD vnum;
        long price;
        char count;

    };

    struct packet_shop_update_item {
        BYTE pos;
        packet_shop_item items;
    } typedef TPacketGCShopUpdateItem;

    struct packet_shop_start {
        DWORD owner_vid;
        DWORD items[420];
    } typedef TPacketGCShopStart;

    struct SPacketGCNPCPosition {
        BYTE header;
        short size;
        short count;
    } typedef TPacketGCNPCPosition;

    struct TNPCPosition {
        BYTE bType;
        char name[25];
        long x;
        long y;

    } typedef TPacketGCNPCPositionElem;

    struct packet_item_del {
        BYTE header;
        char pos;
    } typedef TPacketGCItemDel;

    struct packet_chat {
        BYTE header;
        WORD size;
        DWORD id;
        char bEmpire;
    } typedef TPacketGCChat;

    struct packet_ping {
        BYTE header;
    } typedef TPacketGCPing;

    struct command_client_version {
        BYTE header;
        char filename[33];
        char timestamp[33];
    } typedef TPacketCGClientVersion;

    struct command_whisper {
        BYTE bHeader;
        WORD wSize;
        char szNameTo[25];
        // msg = command_whisper+28
    };
}
#endif // __LIBM2_GAME_PACKET_HPP
