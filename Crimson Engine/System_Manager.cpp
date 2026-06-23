#include "System_Manager.h"
#include "System_Logic.h"
#include "System_Graphics.h"
#include "System_Input.h"
#include "System_Sound.h"
#include "System_EventManager.h"
#include "System_Loop.h"
#include "System_ObjectProcessor.h"
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "Settings.h"
#include "States.h"
#include "System_Task.h"


//Application dependent Classes and System Instanciation
States				 State;

System_EventManager  Events		 = System_EventManager();
System_Graphics		 Graphics	 = System_Graphics();
System_Input		 Input		 = System_Input();
System_Logic		 Logic		 = System_Logic();
System_Loop			 Loop		 = System_Loop();
System_Sound		 Sound		 = System_Sound();
System_Task			 Task		 = System_Task();

States*				 StatePtr	 = &State;
System_Task*		 TaskPtr	 = &Task;
System_Loop*		 LoopPtr	 = &Loop;
System_Input*		 InputPtr	 = &Input;
System_EventManager* EventsPtr	 = &Events;
System_Logic*		 LogicPtr	 = &Logic;
System_Sound*		 SoundPtr	 = &Sound;
System_Graphics*	 GraphicsPtr = &Graphics;

std::vector <System_Base*>		   Systems;

//Initialization of systems and assigning Task and State pointers to each system's base class.
void SystemManager::InitializeSystems(Settings* gameSettings ,bool* LoopStateptr)
{
	Loop.State		= StatePtr;
	Events.State	= StatePtr;
	Input.State		= StatePtr;
	Logic.State		= StatePtr;
	Graphics.State	= StatePtr;
	Sound.State		= StatePtr;

	Loop.Tasks		= TaskPtr;
	Events.Tasks	= TaskPtr;
	Input.Tasks		= TaskPtr;
	Logic.Tasks		= TaskPtr;
	Graphics.Tasks	= TaskPtr;
	Sound.Tasks		= TaskPtr;

	Task.Initialize();
	Events.Initialize(LoopStateptr, InputPtr);
	Input.Initialize();
	Logic.Initialize();
	Graphics.Initialize(gameSettings);
	Sound.Initialize();

	Systems = { EventsPtr,InputPtr, LogicPtr, GraphicsPtr, SoundPtr};
}
System_Loop* SystemManager::ReturnLoop() {
	return LoopPtr;
}

std::vector <System_Base*> SystemManager::ReturnSystems() {
	return Systems;
}

//void SystemManager::ReturnSDL


