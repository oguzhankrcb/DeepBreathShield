#include "MoveHook.hpp"
#include "../libm2/game/CHARACTER_MANAGER.hpp"
#include "../libm2/game/CHARACTER.hpp"
#include "../libm2/game/SECTREE_MANAGER.hpp"
#include "../libm2/game/SECTREE.hpp"
#include "../libm2/game/misc.hpp"

namespace Hooks{
MoveHook::MoveHook():Hook::Hook() {
    // default config
}

void MoveHook::hook(CInputMain* self, iCHARACTER* ch, const char * data) {
    if (!ch || !self || !*data)
        return;
    if (ch->m_counterxxx == 100)
        ch->m_counterxxx = 0;
    
    ch->m_counterxxx++;
    
    ch->ChatPacket(CHAT_TYPE_INFO, "Counter : %d", ch->m_counterxxx);
  PIXEL_POSITION pos = ch->GetXYZ();
	int onoff = 1;
	for(int i = -60; i < 60; i += 1)
	{
		for (int j = -60; j < 60; j += 1)
		{
		long dx = pos.x + i;
		long dy = pos.y + j;
		LPSECTREE tree = SECTREE_MANAGER::instance()->Get(ch->GetMapIndex(), dx, dy);
			if (!tree)
				continue;

			if (!tree->IsAttr(dx, dy, ATTR_BLOCK | ATTR_OBJECT))
			{
				onoff = 0;
			}
		}
	}
	if (onoff)
	{
		PIXEL_POSITION pos2;
				if (SECTREE_MANAGER::instance()->GetMovablePosition(ch->GetMapIndex(), pos.x,pos.y,pos2))
				{
				ch->Goto(pos2.x, pos2.y);
				ch->Show(ch->GetMapIndex(), pos2.x, pos2.y, ch->GetZ());
				ch->Stop();
                                ch->ChatPacket(CHAT_TYPE_INFO, "<DarkSide> WallHack Tespit Eildi!");
				return;
				}
				else
				{
				ch->Show(ch->GetMapIndex(), ch->GetX(), ch->GetY(), ch->GetZ());
				ch->Stop();
                                ch->ChatPacket(CHAT_TYPE_INFO, "<DarkSide> WallHack Tespit Eildi!");
				return;
				}
	}
        
        
        instance()->detour->GetOriginalFunction()(self,ch,data);
}
}
