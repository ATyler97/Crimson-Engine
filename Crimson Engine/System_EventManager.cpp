#include "System_EventManager.h"
#include "System_Input.h"
#include <iostream>;
#include <SDL2/SDL.h>
#include "Logging.h"

System_Input* Inputptr;

void System_EventManager::Initialize(System_Input* Inptr)
{
	Logging::Log(State->MainSt8.Debug, 10);
	Inputptr = Inptr;
}
void System_EventManager::Update() 
{
	Logging::Log(State->MainSt8.Debug, 11);
	CheckEvents();
}
void System_EventManager::CheckEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type) {
		case SDL_QUIT:
			Logging::Log(State->MainSt8.Debug, 12);
			State->MainSt8.Running = false;
			break;

		case SDL_WINDOWEVENT:
			Logging::Log(State->MainSt8.Debug, 13);
			break;
		case SDL_SYSWMEVENT:
			Logging::Log(State->MainSt8.Debug, 14);
			break;
		case SDL_KEYDOWN:
			Logging::Log(State->MainSt8.Debug, 15);
			Inputptr->KeyPressed(event.key.keysym);
			break;
		case SDL_KEYUP:
			Logging::Log(State->MainSt8.Debug, 16);
			Inputptr->KeyPressed(event.key.keysym);
			break;
		case SDL_TEXTEDITING:
			Logging::Log(State->MainSt8.Debug, 17);
			break;
		case SDL_TEXTINPUT:
			Logging::Log(State->MainSt8.Debug, 18);
			break;
		case SDL_MOUSEMOTION:
			Logging::Log(State->MainSt8.Debug, 19);
			Inputptr->MouseMoved(event.motion);
			break;
		case SDL_MOUSEBUTTONDOWN:
			Logging::Log(State->MainSt8.Debug, 20);
			Inputptr->MouseButtonPressed(event.button);
			break;
		case SDL_MOUSEBUTTONUP:
			Logging::Log(State->MainSt8.Debug, 21);
			Inputptr->MouseButtonReleased(event.button);
			break;
		case SDL_MOUSEWHEEL:
			Logging::Log(State->MainSt8.Debug, 22);
			Inputptr->MouseWheel(event.wheel);
			break;
		case SDL_RENDER_TARGETS_RESET:
			Logging::Log(State->MainSt8.Debug, 23);
			break;
		case SDL_RENDER_DEVICE_RESET:
			Logging::Log(State->MainSt8.Debug, 24);
			break;
		default:
			Logging::Log(State->MainSt8.Debug, 25);
			State->MainSt8.Running = false;
			break;
		}
	}
}
