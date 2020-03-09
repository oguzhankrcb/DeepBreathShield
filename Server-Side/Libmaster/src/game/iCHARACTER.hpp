#ifndef __GAME_ICHARACTER_HPP
#define __GAME_ICHARACTER_HPP
#include "../libm2/game/CHARACTER.hpp"
using namespace libm2;
struct syncpos_violation{
    time_t time;
    float dist;
    unsigned int pid;
};
class iCHARACTER: public CHARACTER{
  public:
    time_t m_tLastSync;
    float m_fSyncDist;
    int m_counterxxx;
    std::vector<syncpos_violation> m_vec_syncPosViolation;
  public:
    void ban(long len, const char* reason, const char* by);
};
#endif // __GAME_ICHARACTER_HPP
