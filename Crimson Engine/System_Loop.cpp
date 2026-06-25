#include "System_Loop.h"
#include "System_Base.h"
#include <vector>
#include <iostream>
#include <SDL2/SDL.h>
#include "Logging.h"
using namespace std;

vector<System_Base*> systems;

void System_Loop::Start() {
	State->MainSt8.Running = true;
	Logging::Log(State->MainSt8.Debug, 49);

	while (State->MainSt8.Running) {
		State->TimeSt8.CurrentTime = SDL_GetTicks64();
		State->TimeSt8.DeltaTime = State->TimeSt8.CurrentTime - State->TimeSt8.PreviousTime;
		State->TimeSt8.PreviousTime = State->TimeSt8.CurrentTime;

		for (int i = 0; i < systems.size(); i++) 
		{
			systems[i]->Update();
		}
		Logging::Log(State->MainSt8.Debug, 52);

	}
}
void System_Loop::Stop()
{
	State->MainSt8.Running = false;
	Logging::Log(State->MainSt8.Debug, 50);
}
void System_Loop::InsertSystemsIntoLoop(std::vector<System_Base*> systemsVector) {
	Logging::Log(State->MainSt8.Debug, 51);
	systems = systemsVector;
}
