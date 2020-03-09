#ifndef _HOOKS_CHARACTERDESTRUCTOR_HPP
#define _HOOKS_CHARACTERDESTRUCTOR_HPP
#include "../libm2/lib/hook.hpp"
#include "../libm2/addr.hpp"
#include "../game/iCHARACTER.hpp"
#include "../libm2/lib/singleton.hpp"
using namespace libm2;
namespace Hooks{
typedef void (*tCharacterDestructor)(iCHARACTER* self);
class CharacterDestructor: public Hook<tCharacterDestructor,(unsigned int)Addr::CHARACTER::Destroy,CharacterDestructor>{
    public:
    CharacterDestructor();
    static void hook(iCHARACTER* self);
};
}
#endif // _HOOKS_CHARACTERDESTRUCTOR_HPP


