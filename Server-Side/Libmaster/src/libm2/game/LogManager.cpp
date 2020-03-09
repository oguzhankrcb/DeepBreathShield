/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "LogManager.hpp"
namespace libm2 {

    void LogManager::BootLog(const char * c_pszHostName, BYTE bChannel) {
        ((void(*)(LogManager * const, const char *, BYTE))Addr::LogManager::BootLog__const_char__BYTE)(this, c_pszHostName, bChannel);
    }

    void LogManager::ChangeNameLog(DWORD pid, const char * old_name, const char * new_name, const char * ip) {
        ((void(*)(LogManager * const, DWORD, const char *, const char *, const char *))Addr::LogManager::ChangeNameLog__DWORD_const_char__const_char__const_char_)(this, pid, old_name, new_name, ip);
    }

    void LogManager::CharLog(LPCHARACTER ch, DWORD dw, const char * c_pszText, const char * c_pszHint) {
        ((void(*)(LogManager * const, LPCHARACTER, DWORD, const char *, const char *))Addr::LogManager::CharLog__LPCHARACTER_DWORD_const_char__const_char_)(this, ch, dw, c_pszText, c_pszHint);
    }

    void LogManager::CharLog(DWORD dwPID, DWORD x, DWORD y, DWORD dwValue, const char * c_pszText, const char * c_pszHint, const char * c_pszIP) {
        ((void(*)(LogManager * const, DWORD, DWORD, DWORD, DWORD, const char *, const char *, const char *))Addr::LogManager::CharLog__DWORD_DWORD_DWORD_DWORD_const_char__const_char__const_char_)(this, dwPID, x, y, dwValue, c_pszText, c_pszHint, c_pszIP);
    }

    bool LogManager::Connect(const char * host, const int port, const char * user, const char * pwd, const char * db) {
        return ((bool(*)(LogManager * const, const char *, const int, const char *, const char *, const char *))Addr::LogManager::Connect__const_char__const_int_const_char__const_char__const_char_)(this, host, port, user, pwd, db);
    }

    void LogManager::CubeLog(DWORD dwPID, DWORD x, DWORD y, DWORD item_vnum, DWORD item_uid, int item_count, bool success) {
        ((void(*)(LogManager * const, DWORD, DWORD, DWORD, DWORD, DWORD, int, bool))Addr::LogManager::CubeLog__DWORD_DWORD_DWORD_DWORD_DWORD_int_bool)(this, dwPID, x, y, item_vnum, item_uid, item_count, success);
    }

    void LogManager::DetailLoginLog(bool isLogin, LPCHARACTER ch) {
        ((void(*)(LogManager * const, bool, LPCHARACTER))Addr::LogManager::DetailLoginLog__bool_LPCHARACTER)(this, isLogin, ch);
    }

    void LogManager::DragonSlayLog(DWORD dwGuildID, DWORD dwDragonVnum, DWORD dwStartTime, DWORD dwEndTime) {
        ((void(*)(LogManager * const, DWORD, DWORD, DWORD, DWORD))Addr::LogManager::DragonSlayLog__DWORD_DWORD_DWORD_DWORD)(this, dwGuildID, dwDragonVnum, dwStartTime, dwEndTime);
    }

    void LogManager::FishLog(DWORD dwPID, int prob_idx, int fish_id, int fish_level, DWORD dwMiliseconds, DWORD dwVnum, DWORD dwValue) {
        ((void(*)(LogManager * const, DWORD, int, int, int, DWORD, DWORD, DWORD))Addr::LogManager::FishLog__DWORD_int_int_int_DWORD_DWORD_DWORD)(this, dwPID, prob_idx, fish_id, fish_level, dwMiliseconds, dwVnum, dwValue);
    }

    void LogManager::GMCommandLog(DWORD dwPID, const char * szName, const char * szIP, BYTE byChannel, const char * szCommand) {
        ((void(*)(LogManager * const, DWORD, const char *, const char *, BYTE, const char *))Addr::LogManager::GMCommandLog__DWORD_const_char__const_char__BYTE_const_char_)(this, dwPID, szName, szIP, byChannel, szCommand);
    }

    void LogManager::GoldBarLog(DWORD dwPID, DWORD dwItemID, GOLDBAR_HOW eHow, const char * c_pszHint) {
        ((void(*)(LogManager * const, DWORD, DWORD, GOLDBAR_HOW, const char *))Addr::LogManager::GoldBarLog__DWORD_DWORD_GOLDBAR_HOW_const_char_)(this, dwPID, dwItemID, eHow, c_pszHint);
    }

    void LogManager::HackCRCLog(const char * c_pszHackName, const char * c_pszLogin, const char * c_pszName, const char * c_pszIP, DWORD dwCRC) {
        ((void(*)(LogManager * const, const char *, const char *, const char *, const char *, DWORD))Addr::LogManager::HackCRCLog__const_char__const_char__const_char__const_char__DWORD)(this, c_pszHackName, c_pszLogin, c_pszName, c_pszIP, dwCRC);
    }

    void LogManager::HackLog(const char * c_pszHackName, LPCHARACTER ch) {
        ((void(*)(LogManager * const, const char *, LPCHARACTER))Addr::LogManager::HackLog__const_char__LPCHARACTER)(this, c_pszHackName, ch);
    }

    void LogManager::HackLog(const char * c_pszHackName, const char * c_pszLogin, const char * c_pszName, const char * c_pszIP) {
        ((void(*)(LogManager * const, const char *, const char *, const char *, const char *))Addr::LogManager::HackLog__const_char__const_char__const_char__const_char_)(this, c_pszHackName, c_pszLogin, c_pszName, c_pszIP);
    }

    void LogManager::HackShieldLog(unsigned long ErrorCode, LPCHARACTER ch) {
        ((void(*)(LogManager * const, unsigned long, LPCHARACTER))Addr::LogManager::HackShieldLog__unsigned_long_LPCHARACTER)(this, ErrorCode, ch);
    }

    bool LogManager::IsConnected() {
        return ((bool(*)(LogManager * const))Addr::LogManager::IsConnected)(this);
    }

    void LogManager::ItemLog(LPCHARACTER ch, LPITEM item, const char * c_pszText, const char * c_pszHint) {
        ((void(*)(LogManager * const, LPCHARACTER, LPITEM, const char *, const char *))Addr::LogManager::ItemLog__LPCHARACTER_LPITEM_const_char__const_char_)(this, ch, item, c_pszText, c_pszHint);
    }

    void LogManager::ItemLog(LPCHARACTER ch, int itemID, int itemVnum, const char * c_pszText, const char * c_pszHint) {
        ((void(*)(LogManager * const, LPCHARACTER, int, int, const char *, const char *))Addr::LogManager::ItemLog__LPCHARACTER_int_int_const_char__const_char_)(this, ch, itemID, itemVnum, c_pszText, c_pszHint);
    }

    void LogManager::ItemLog(DWORD dwPID, DWORD x, DWORD y, DWORD dwItemID, const char * c_pszText, const char * c_pszHint, const char * c_pszIP, DWORD dwVnum) {
        ((void(*)(LogManager * const, DWORD, DWORD, DWORD, DWORD, const char *, const char *, const char *, DWORD))Addr::LogManager::ItemLog__DWORD_DWORD_DWORD_DWORD_const_char__const_char__const_char__DWORD)(this, dwPID, x, y, dwItemID, c_pszText, c_pszHint, c_pszIP, dwVnum);
    }

    void LogManager::LevelLog(LPCHARACTER pChar, unsigned int level, unsigned int playhour) {
        ((void(*)(LogManager * const, LPCHARACTER, unsigned int, unsigned int))Addr::LogManager::LevelLog__LPCHARACTER_unsigned_int_unsigned_int)(this, pChar, level, playhour);
    }

    LogManager::LogManager() {
        ((void(*)(LogManager * const))Addr::LogManager::LogManager)(this);
    }

    void LogManager::LoginLog(bool isLogin, DWORD dwAccountID, DWORD dwPID, BYTE bLevel, BYTE bJob, DWORD dwPlayTime) {
        ((void(*)(LogManager * const, bool, DWORD, DWORD, BYTE, BYTE, DWORD))Addr::LogManager::LoginLog__bool_DWORD_DWORD_BYTE_BYTE_DWORD)(this, isLogin, dwAccountID, dwPID, bLevel, bJob, dwPlayTime);
    }

    void LogManager::MoneyLog(BYTE type, DWORD vnum, int gold) {
        ((void(*)(LogManager * const, BYTE, DWORD, int))Addr::LogManager::MoneyLog__BYTE_DWORD_int)(this, type, vnum, gold);
    }

    void LogManager::PCBangLoginLog(DWORD dwPCBangID, const char * c_szPCBangIP, DWORD dwPlayerID, DWORD dwPlayTime) {
        ((void(*)(LogManager * const, DWORD, const char *, DWORD, DWORD))Addr::LogManager::PCBangLoginLog__DWORD_const_char__DWORD_DWORD)(this, dwPCBangID, c_szPCBangIP, dwPlayerID, dwPlayTime);
    }

    void LogManager::Query(const char * c_pszFormat, ...) {
        va_list va;
        va_start(va, c_pszFormat);
        char buffer[1024];
        vsnprintf(buffer, 513, c_pszFormat, va);
        va_end(va);
        ((void(*)(LogManager * const, const char *, ...))Addr::LogManager::Query__const_char___)(this, buffer);
    }

    void LogManager::QuestRewardLog(const char * c_pszQuestName, DWORD dwPID, DWORD dwLevel, int iValue1, int iValue2) {
        ((void(*)(LogManager * const, const char *, DWORD, DWORD, int, int))Addr::LogManager::QuestRewardLog__const_char__DWORD_DWORD_int_int)(this, c_pszQuestName, dwPID, dwLevel, iValue1, iValue2);
    }

    void LogManager::RefineLog(DWORD pid, const char * item_name, DWORD item_id, int item_refine_level, int is_success, const char * how) {
        ((void(*)(LogManager * const, DWORD, const char *, DWORD, int, int, const char *))Addr::LogManager::RefineLog__DWORD_const_char__DWORD_int_int_const_char_)(this, pid, item_name, item_id, item_refine_level, is_success, how);
    }

    void LogManager::ShoutLog(BYTE bChannel, BYTE bEmpire, const char * pszText) {
        ((void(*)(LogManager * const, BYTE, BYTE, const char *))Addr::LogManager::ShoutLog__BYTE_BYTE_const_char_)(this, bChannel, bEmpire, pszText);
    }

    void LogManager::SpeedHackLog(DWORD pid, DWORD x, DWORD y, int hack_count) {
        ((void(*)(LogManager * const, DWORD, DWORD, DWORD, int))Addr::LogManager::SpeedHackLog__DWORD_DWORD_DWORD_int)(this, pid, x, y, hack_count);
    }

    void LogManager::VCardLog(DWORD vcard_id, DWORD x, DWORD y, const char * hostname, const char * giver_name, const char * giver_ip, const char * taker_name, const char * taker_ip) {
        ((void(*)(LogManager * const, DWORD, DWORD, DWORD, const char *, const char *, const char *, const char *, const char *))Addr::LogManager::VCardLog__DWORD_DWORD_DWORD_const_char__const_char__const_char__const_char__const_char_)(this, vcard_id, x, y, hostname, giver_name, giver_ip, taker_name, taker_ip);
    }

    LogManager::~LogManager() {
        ((void(*)(LogManager * const))Addr::LogManager::__LogManager)(this);
    }

}
