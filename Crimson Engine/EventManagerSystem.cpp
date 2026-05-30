#include "EventManagerSystem.h"
#include <iostream>;
bool* stateptr;

void EventManagerSystem::CarryoutEvent(SDL_Event e,std::string ID)
{
	std::cout << "\t\tEvent Manager System | CarryoutEvent() | 'Event with ID: '"<<ID<<" being carried out" << std::endl;
	switch (e.type) {
		case SDL_QUIT:
			std::cout << "\t\tEvent Manager System | CarryoutEvent() | 'Event SDL_QUIT" << std::endl;
			*stateptr = false;
			break;
	}
}
void EventManagerSystem::Initialize(bool* LoopState)
{
	std::cout << "\t\tEvent Manager System | Initialize() | 'Event Manager System Initalizing" << std::endl;
	stateptr = LoopState;
}
