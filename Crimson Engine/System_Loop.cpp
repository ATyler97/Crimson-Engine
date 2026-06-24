#include "System_Loop.h"
#include "System_Base.h"
#include <vector>
#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

vector<System_Base*> systems;

void System_Loop::Start() {
	State->MainSt8.Running = true;

	while (State->MainSt8.Running) {
		State->TimeSt8.CurrentTime = SDL_GetTicks64();
		State->TimeSt8.DeltaTime = State->TimeSt8.CurrentTime - State->TimeSt8.PreviousTime;
		State->TimeSt8.PreviousTime = State->TimeSt8.CurrentTime;

		for (int i = 0; i < systems.size(); i++) 
		{
			systems[i]->Update();
		}
	}
}
void System_Loop::Stop()
{
	State->MainSt8.Running = false;
}
void System_Loop::InsertSystemsIntoLoop(std::vector<System_Base*> systemsVector) {
	systems = systemsVector;
}
