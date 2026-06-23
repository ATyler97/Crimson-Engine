#include "System_Loop.h"
#include "System_Base.h"
#include <vector>
#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

vector<System_Base*> systems;

void System_Loop::Start(bool* state) {

	while (state) {
		State->TimeSt8.CurrentTime = SDL_GetTicks64();
		State->TimeSt8.DeltaTime = State->TimeSt8.CurrentTime - State->TimeSt8.PreviousTime;
		State->TimeSt8.PreviousTime = State->TimeSt8.CurrentTime;

		for (int i = 0; i < systems.size(); i++) 
		{
			systems[i]->Update();
		}
	}
}
void System_Loop::InsertSystemsIntoLoop(std::vector<System_Base*> systemsVector) {
	systems = systemsVector;
}
