/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CHORSERIDER_HPP
#define __LIBM2_GAME_CHORSERIDER_HPP
#include "stdInclude.hpp"
#include "EVENT.hpp"
namespace libm2 {

    struct THorseInfo {
        BYTE bLevel;
        BYTE bRiding;
        short sStamina;
        short sHealth;
        DWORD dwHorseHealthDropTime;
    };

    struct CHorseRider {
    private:
        THorseInfo m_Horse;
        LPEVENT m_eventStaminaRegen;
        LPEVENT m_eventStaminaConsume;

    public:
        CHorseRider();
        ~CHorseRider();
        BYTE GetHorseLevel(void) const;
        BYTE GetHorseGrade(void);
        short GetHorseHealth(void) const;
        short GetHorseStamina(void) const;
        short GetHorseMaxHealth(void);
        short GetHorseMaxStamina(void);
        int GetHorseST(void);
        int GetHorseDX(void);
        int GetHorseHT(void);
        int GetHorseIQ(void);
        int GetHorseArmor(void);
        virtual bool ReviveHorse(void);
        void FeedHorse(void);
        virtual void HorseDie(void);
        bool IsHorseRiding(void) const;
        void ResetHorseHealthDropTime(void);
        virtual void SetHorseLevel(int);
        void EnterHorse(void);
        virtual void SendHorseInfo(void);
        virtual void ClearHorseInfo(void);
        virtual void UpdateRideTime(int);
    protected:
        void SetHorseData(const THorseInfo &);
        const THorseInfo & GetHorseData(void) const;
        void UpdateHorseDataByLogoff(DWORD);
        virtual bool StartRiding(void);
        virtual bool StopRiding(void);
        virtual DWORD GetMyHorseVnum(void) const;
    private:
        void UpdateHorseStamina(int, bool);
        void StartStaminaConsumeEvent(void);
        void StartStaminaRegenEvent(void);
        void UpdateHorseHealth(int, bool);
        void CheckHorseHealthDropTime(bool);
        void Initialize(void);
        void Destroy(void);
    };
}
#endif // __LIBM2_GAME_CHORSERIDER_HPP
