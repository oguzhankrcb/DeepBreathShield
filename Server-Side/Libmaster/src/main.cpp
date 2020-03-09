#include <iostream>
#include <fstream>
#include "libm2/utils/detours.h"
#include "libm2/game/stdInclude.hpp"
#include "hooks/MoveHook.hpp"
#include "hooks/CharacterConstructor.hpp"
#include "libm2/addr.hpp"
#include "libm2/lib/hook.hpp"
#include "libm2/lib/increaseSize.hpp"
#include "libm2/LibM2.hpp"
#include "libm2/game/ITEM_MANAGER.hpp"
#include "libm2/game/DESC_MANAGER.hpp"
#include "libm2/game/enums.hpp"
#include "hooks/CharacterDestructor.hpp"
#include "libm2/game/EVENT.hpp"
void __attribute__ ((constructor)) lib_main(void);
using namespace libm2;

void lib_main(){
   
    printf("************************* <DarkSide> Initializing... ****************************\r\n");
    LibM2::removePRELOAD();
    printf("************************* <DarkSide> Removing PRELOAD... ****************************\r\n");
    try{
        Hooks::MoveHook::instance();
        Hooks::CharacterConstructor::instance();
        Hooks::CharacterDestructor::instance();
        increaseSize<iCHARACTER>((unsigned int*)Addr::CHARACTER_MANAGER::createCharacter_alloc);
        
        LibM2::instance();
    printf("************************* <DarkSide> Hooking Done... ****************************\r\n");
    } catch(MologieDetours::DetourException &e) {
        std::cout << std::endl << "Error when hooking function: " << e.what() << std::endl << std::endl;
        abort();
    }
    printf("************************* <DarkSide> Done Initializing. ****************************\r\n");
}
