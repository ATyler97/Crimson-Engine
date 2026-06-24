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
#include "Settings.h"
#include "States.h"
#include "System_Task.h"
#include "Logging.h"


//Application dependent Classes and System Instanciation
States				 State;										// State is a class that is within every base system class and is responsible for holding
																//      Engine Specific condtions that all classes may need to know about.
System_EventManager  Events		 = System_EventManager();		// Events handles SDL events raised or triggered during the process
System_Graphics		 Graphics	 = System_Graphics();			// Graphics is currently the GUI or Graphics User Interface so windows, menues etc. UI elements
System_Input		 Input		 = System_Input();				// Input handles the SDL Key/Button pressed and released events. 
System_Logic		 Logic		 = System_Logic();				// Logic will be the portion of the program that will process the data to yield desired results
System_Loop			 Loop		 = System_Loop();				// Loop is as it sounds, the loop that IS the game engine process.
System_Sound		 Sound		 = System_Sound();				// Sound will just be called on to play a sound. 
System_Task			 Task		 = System_Task();				// This is experimental and maybe removed. 

States*				 StatePtr	 = &State;						
System_Task*		 TaskPtr	 = &Task;
System_Loop*		 LoopPtr	 = &Loop;
System_Input*		 InputPtr	 = &Input;
System_EventManager* EventsPtr	 = &Events;
System_Logic*		 LogicPtr	 = &Logic;
System_Sound*		 SoundPtr	 = &Sound;
System_Graphics*	 GraphicsPtr = &Graphics;

std::vector <System_Base*>		   Systems;						// Systems is the collection of all the previously mention systems for easy access and passing.

//Initialization of systems and assigning Task and State pointers to each system's base class.
void SystemManager::InitializeSystems(Settings* gameSettings)
{
	Logging::Log(gameSettings->Debug, 6);
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
	Events.Initialize(InputPtr);
	Input.Initialize();
	Logic.Initialize();
	Graphics.Initialize(gameSettings);
	Sound.Initialize();

	Systems = { EventsPtr,InputPtr, LogicPtr, GraphicsPtr, SoundPtr};
	Logging::Log(gameSettings->Debug, 7);
}
// a specific method to return the loop system back out to application for its needed access. 
System_Loop* SystemManager::ReturnLoop() {
	Logging::Log(State.MainSt8.Debug, 8);
	return LoopPtr;
}
// a specific method that returns all of the systems to the application class.
std::vector <System_Base*> SystemManager::ReturnSystems() {
	Logging::Log(State.MainSt8.Debug, 9);
	return Systems;
}



