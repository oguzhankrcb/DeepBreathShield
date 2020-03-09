#include "CharacterDestructor.hpp"
using namespace Hooks;
CharacterDestructor::CharacterDestructor():Hook::Hook(){}

void CharacterDestructor::hook(iCHARACTER* self){
    self->m_tLastSync=0;
    self->m_fSyncDist=0;
    self->m_counterxxx=0;
    Hooks::CharacterDestructor::instance()->detour->GetOriginalFunction()(self);
}
