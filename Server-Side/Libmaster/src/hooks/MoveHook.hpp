#ifndef _HOOKS_MOVEHOOK_HPP
#define _HOOKS_MOVEHOOK_HPP
#include "../libm2/lib/hook.hpp"
#include "../libm2/game/CInputMain.hpp"
#include "../libm2/addr.hpp"
#include "../game/iCHARACTER.hpp"
#include "../libm2/lib/singleton.hpp"
using namespace libm2;
namespace Hooks{
typedef void (*tMoveHook)(CInputMain* self, iCHARACTER*, const char *);
class MoveHook: public Hook<tMoveHook,(unsigned int)Addr::CInputMain::Move__LPCHARACTER_const_char_,MoveHook>{
private:

public:
    MoveHook();
    static void hook(CInputMain* self, iCHARACTER* ch, const char * data);
};
}
#endif // _HOOKS_MOVEHOOK_HPP

