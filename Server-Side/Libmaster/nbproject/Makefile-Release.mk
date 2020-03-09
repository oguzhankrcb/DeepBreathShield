#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc49
CCC=g++49
CXX=g++49
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Generic
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/game/iCHARACTER.o \
	${OBJECTDIR}/src/hooks/CharacterConstructor.o \
	${OBJECTDIR}/src/hooks/CharacterDestructor.o \
	${OBJECTDIR}/src/hooks/MoveHook.o \
	${OBJECTDIR}/src/libm2/LibM2.o \
	${OBJECTDIR}/src/libm2/game/CEntity.o \
	${OBJECTDIR}/src/libm2/game/CFSM.o \
	${OBJECTDIR}/src/libm2/game/CGuild.o \
	${OBJECTDIR}/src/libm2/game/CGuildManager.o \
	${OBJECTDIR}/src/libm2/game/CHARACTER.o \
	${OBJECTDIR}/src/libm2/game/CHARACTER_MANAGER.o \
	${OBJECTDIR}/src/libm2/game/CHorseRider.o \
	${OBJECTDIR}/src/libm2/game/CInputAuth.o \
	${OBJECTDIR}/src/libm2/game/CInputClose.o \
	${OBJECTDIR}/src/libm2/game/CInputDB.o \
	${OBJECTDIR}/src/libm2/game/CInputDead.o \
	${OBJECTDIR}/src/libm2/game/CInputHandshake.o \
	${OBJECTDIR}/src/libm2/game/CInputLogin.o \
	${OBJECTDIR}/src/libm2/game/CInputMain.o \
	${OBJECTDIR}/src/libm2/game/CInputP2P.o \
	${OBJECTDIR}/src/libm2/game/CInputProcessor.o \
	${OBJECTDIR}/src/libm2/game/CItem.o \
	${OBJECTDIR}/src/libm2/game/CPetActor.o \
	${OBJECTDIR}/src/libm2/game/CPetSystem.o \
	${OBJECTDIR}/src/libm2/game/CPrivManager.o \
	${OBJECTDIR}/src/libm2/game/CShopManager.o \
	${OBJECTDIR}/src/libm2/game/CState.o \
	${OBJECTDIR}/src/libm2/game/CThreeWayWar.o \
	${OBJECTDIR}/src/libm2/game/DBManager.o \
	${OBJECTDIR}/src/libm2/game/DESC.o \
	${OBJECTDIR}/src/libm2/game/DESC_MANAGER.o \
	${OBJECTDIR}/src/libm2/game/EVENT.o \
	${OBJECTDIR}/src/libm2/game/ITEM_MANAGER.o \
	${OBJECTDIR}/src/libm2/game/LogManager.o \
	${OBJECTDIR}/src/libm2/game/P2P_MANAGER.o \
	${OBJECTDIR}/src/libm2/game/SECTREE.o \
	${OBJECTDIR}/src/libm2/game/SECTREE_MANAGER.o \
	${OBJECTDIR}/src/libm2/game/SECTREE_MAP.o \
	${OBJECTDIR}/src/libm2/game/SQLMsg.o \
	${OBJECTDIR}/src/libm2/game/SQLResult.o \
	${OBJECTDIR}/src/libm2/game/TAffectFlag.o \
	${OBJECTDIR}/src/libm2/game/TEMP_BUFFER.o \
	${OBJECTDIR}/src/libm2/game/VID.o \
	${OBJECTDIR}/src/libm2/game/building/CLand.o \
	${OBJECTDIR}/src/libm2/game/building/CManager.o \
	${OBJECTDIR}/src/libm2/game/building/CObject.o \
	${OBJECTDIR}/src/libm2/game/global.o \
	${OBJECTDIR}/src/libm2/game/lua.o \
	${OBJECTDIR}/src/libm2/game/marriage/CManager.o \
	${OBJECTDIR}/src/libm2/game/marriage/TMarriage.o \
	${OBJECTDIR}/src/libm2/game/misc.o \
	${OBJECTDIR}/src/libm2/game/quest/CQuestManager.o \
	${OBJECTDIR}/src/libm2/game/quest/PC.o \
	${OBJECTDIR}/src/libm2/lib/dif.o \
	${OBJECTDIR}/src/libm2/utils/hde/hde32.o \
	${OBJECTDIR}/src/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-I/usr/local/include -L/usr/local/lib -lyaml-cpp -L/usr/local/lib/mysql -lmysqlclient -pthread -lz -lm

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgame.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgame.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgame.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/game/iCHARACTER.o: src/game/iCHARACTER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/game/iCHARACTER.o src/game/iCHARACTER.cpp

${OBJECTDIR}/src/hooks/CharacterConstructor.o: src/hooks/CharacterConstructor.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/hooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/hooks/CharacterConstructor.o src/hooks/CharacterConstructor.cpp

${OBJECTDIR}/src/hooks/CharacterDestructor.o: src/hooks/CharacterDestructor.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/hooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/hooks/CharacterDestructor.o src/hooks/CharacterDestructor.cpp

${OBJECTDIR}/src/hooks/MoveHook.o: src/hooks/MoveHook.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/hooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/hooks/MoveHook.o src/hooks/MoveHook.cpp

${OBJECTDIR}/src/libm2/LibM2.o: src/libm2/LibM2.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/LibM2.o src/libm2/LibM2.cpp

${OBJECTDIR}/src/libm2/game/CEntity.o: src/libm2/game/CEntity.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CEntity.o src/libm2/game/CEntity.cpp

${OBJECTDIR}/src/libm2/game/CFSM.o: src/libm2/game/CFSM.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CFSM.o src/libm2/game/CFSM.cpp

${OBJECTDIR}/src/libm2/game/CGuild.o: src/libm2/game/CGuild.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CGuild.o src/libm2/game/CGuild.cpp

${OBJECTDIR}/src/libm2/game/CGuildManager.o: src/libm2/game/CGuildManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CGuildManager.o src/libm2/game/CGuildManager.cpp

${OBJECTDIR}/src/libm2/game/CHARACTER.o: src/libm2/game/CHARACTER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CHARACTER.o src/libm2/game/CHARACTER.cpp

${OBJECTDIR}/src/libm2/game/CHARACTER_MANAGER.o: src/libm2/game/CHARACTER_MANAGER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CHARACTER_MANAGER.o src/libm2/game/CHARACTER_MANAGER.cpp

${OBJECTDIR}/src/libm2/game/CHorseRider.o: src/libm2/game/CHorseRider.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CHorseRider.o src/libm2/game/CHorseRider.cpp

${OBJECTDIR}/src/libm2/game/CInputAuth.o: src/libm2/game/CInputAuth.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputAuth.o src/libm2/game/CInputAuth.cpp

${OBJECTDIR}/src/libm2/game/CInputClose.o: src/libm2/game/CInputClose.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputClose.o src/libm2/game/CInputClose.cpp

${OBJECTDIR}/src/libm2/game/CInputDB.o: src/libm2/game/CInputDB.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputDB.o src/libm2/game/CInputDB.cpp

${OBJECTDIR}/src/libm2/game/CInputDead.o: src/libm2/game/CInputDead.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputDead.o src/libm2/game/CInputDead.cpp

${OBJECTDIR}/src/libm2/game/CInputHandshake.o: src/libm2/game/CInputHandshake.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputHandshake.o src/libm2/game/CInputHandshake.cpp

${OBJECTDIR}/src/libm2/game/CInputLogin.o: src/libm2/game/CInputLogin.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputLogin.o src/libm2/game/CInputLogin.cpp

${OBJECTDIR}/src/libm2/game/CInputMain.o: src/libm2/game/CInputMain.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputMain.o src/libm2/game/CInputMain.cpp

${OBJECTDIR}/src/libm2/game/CInputP2P.o: src/libm2/game/CInputP2P.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputP2P.o src/libm2/game/CInputP2P.cpp

${OBJECTDIR}/src/libm2/game/CInputProcessor.o: src/libm2/game/CInputProcessor.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CInputProcessor.o src/libm2/game/CInputProcessor.cpp

${OBJECTDIR}/src/libm2/game/CItem.o: src/libm2/game/CItem.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CItem.o src/libm2/game/CItem.cpp

${OBJECTDIR}/src/libm2/game/CPetActor.o: src/libm2/game/CPetActor.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CPetActor.o src/libm2/game/CPetActor.cpp

${OBJECTDIR}/src/libm2/game/CPetSystem.o: src/libm2/game/CPetSystem.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CPetSystem.o src/libm2/game/CPetSystem.cpp

${OBJECTDIR}/src/libm2/game/CPrivManager.o: src/libm2/game/CPrivManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CPrivManager.o src/libm2/game/CPrivManager.cpp

${OBJECTDIR}/src/libm2/game/CShopManager.o: src/libm2/game/CShopManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CShopManager.o src/libm2/game/CShopManager.cpp

${OBJECTDIR}/src/libm2/game/CState.o: src/libm2/game/CState.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CState.o src/libm2/game/CState.cpp

${OBJECTDIR}/src/libm2/game/CThreeWayWar.o: src/libm2/game/CThreeWayWar.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/CThreeWayWar.o src/libm2/game/CThreeWayWar.cpp

${OBJECTDIR}/src/libm2/game/DBManager.o: src/libm2/game/DBManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/DBManager.o src/libm2/game/DBManager.cpp

${OBJECTDIR}/src/libm2/game/DESC.o: src/libm2/game/DESC.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/DESC.o src/libm2/game/DESC.cpp

${OBJECTDIR}/src/libm2/game/DESC_MANAGER.o: src/libm2/game/DESC_MANAGER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/DESC_MANAGER.o src/libm2/game/DESC_MANAGER.cpp

${OBJECTDIR}/src/libm2/game/EVENT.o: src/libm2/game/EVENT.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/EVENT.o src/libm2/game/EVENT.cpp

${OBJECTDIR}/src/libm2/game/ITEM_MANAGER.o: src/libm2/game/ITEM_MANAGER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/ITEM_MANAGER.o src/libm2/game/ITEM_MANAGER.cpp

${OBJECTDIR}/src/libm2/game/LogManager.o: src/libm2/game/LogManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/LogManager.o src/libm2/game/LogManager.cpp

${OBJECTDIR}/src/libm2/game/P2P_MANAGER.o: src/libm2/game/P2P_MANAGER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/P2P_MANAGER.o src/libm2/game/P2P_MANAGER.cpp

${OBJECTDIR}/src/libm2/game/SECTREE.o: src/libm2/game/SECTREE.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/SECTREE.o src/libm2/game/SECTREE.cpp

${OBJECTDIR}/src/libm2/game/SECTREE_MANAGER.o: src/libm2/game/SECTREE_MANAGER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/SECTREE_MANAGER.o src/libm2/game/SECTREE_MANAGER.cpp

${OBJECTDIR}/src/libm2/game/SECTREE_MAP.o: src/libm2/game/SECTREE_MAP.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/SECTREE_MAP.o src/libm2/game/SECTREE_MAP.cpp

${OBJECTDIR}/src/libm2/game/SQLMsg.o: src/libm2/game/SQLMsg.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/SQLMsg.o src/libm2/game/SQLMsg.cpp

${OBJECTDIR}/src/libm2/game/SQLResult.o: src/libm2/game/SQLResult.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/SQLResult.o src/libm2/game/SQLResult.cpp

${OBJECTDIR}/src/libm2/game/TAffectFlag.o: src/libm2/game/TAffectFlag.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/TAffectFlag.o src/libm2/game/TAffectFlag.cpp

${OBJECTDIR}/src/libm2/game/TEMP_BUFFER.o: src/libm2/game/TEMP_BUFFER.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/TEMP_BUFFER.o src/libm2/game/TEMP_BUFFER.cpp

${OBJECTDIR}/src/libm2/game/VID.o: src/libm2/game/VID.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/VID.o src/libm2/game/VID.cpp

${OBJECTDIR}/src/libm2/game/building/CLand.o: src/libm2/game/building/CLand.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/building
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/building/CLand.o src/libm2/game/building/CLand.cpp

${OBJECTDIR}/src/libm2/game/building/CManager.o: src/libm2/game/building/CManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/building
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/building/CManager.o src/libm2/game/building/CManager.cpp

${OBJECTDIR}/src/libm2/game/building/CObject.o: src/libm2/game/building/CObject.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/building
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/building/CObject.o src/libm2/game/building/CObject.cpp

${OBJECTDIR}/src/libm2/game/global.o: src/libm2/game/global.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/global.o src/libm2/game/global.cpp

${OBJECTDIR}/src/libm2/game/lua.o: src/libm2/game/lua.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/lua.o src/libm2/game/lua.cpp

${OBJECTDIR}/src/libm2/game/marriage/CManager.o: src/libm2/game/marriage/CManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/marriage
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/marriage/CManager.o src/libm2/game/marriage/CManager.cpp

${OBJECTDIR}/src/libm2/game/marriage/TMarriage.o: src/libm2/game/marriage/TMarriage.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/marriage
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/marriage/TMarriage.o src/libm2/game/marriage/TMarriage.cpp

${OBJECTDIR}/src/libm2/game/misc.o: src/libm2/game/misc.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/misc.o src/libm2/game/misc.cpp

${OBJECTDIR}/src/libm2/game/quest/CQuestManager.o: src/libm2/game/quest/CQuestManager.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/quest
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/quest/CQuestManager.o src/libm2/game/quest/CQuestManager.cpp

${OBJECTDIR}/src/libm2/game/quest/PC.o: src/libm2/game/quest/PC.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/game/quest
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/game/quest/PC.o src/libm2/game/quest/PC.cpp

${OBJECTDIR}/src/libm2/lib/dif.o: src/libm2/lib/dif.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/lib
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/lib/dif.o src/libm2/lib/dif.cpp

${OBJECTDIR}/src/libm2/utils/hde/hde32.o: src/libm2/utils/hde/hde32.c nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src/libm2/utils/hde
	${RM} "$@.d"
	$(COMPILE.c) -Wall -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/libm2/utils/hde/hde32.o src/libm2/utils/hde/hde32.c

${OBJECTDIR}/src/main.o: src/main.cpp nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -Isrc -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
