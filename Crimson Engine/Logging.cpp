#include "Logging.h"
#include <iostream>
using namespace std;

void Logging::Log(bool Debug, int message)
{
	if (Debug) {
		switch (message) {
		case 0:
			cout << "Main | Starting application" << std::endl;
			break;
		case 1:
			cout << "\tApplication | Start() | Starting Application" << std::endl;
			break;
		case 2:
			cout << "\tApplication | Start() | SDL systems Initalized" << std::endl;
			break;
		case 3:
			cout << "\tApplication | Start() | Initalizing all Systems." << std::endl;
			break;
		case 4:
			cout << "\tApplication | Start() | Systems Passed Into Loop System" << std::endl;
			break;
		case 5:
			cout << "\tApplication | Start() | Starting Engine Loop" << std::endl;
			break;
		case 6:
			cout << "\t\tSystem_Manager | InitializeSystems() | Setting each System's 'State' value equal to the State value and initalizing systems" << std::endl;
			break;
		case 7:
			cout << "\t\tSystem_Manager | InitializeSystems() | Initalization success" << std::endl;
			break;
		case 8:
			cout << "\t\tSystem_Manager | ReturnLoop() | Returning 'System_Loop'" << std::endl;
			break;
		case 9:
			cout << "\t\tSystem_Manager | ReturnSystems() | Returning 'Systems'" << std::endl;
			break;
		case 10:
			cout << "\t\tSystem_EventManager | Initialize() | 'System_EventManager Initalizing" << std::endl;
			break;
		case 11:
			cout << "\t\tSystem_EventManager | Update() | 'Checking for Updates" << std::endl;
			break;
		case 12:
			cout << "\t\tSystem_EventManager | CheckEvents() | SDL_QUIT | Ending loop" << std::endl;
			break;
		case 13:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_WINDOWEVENT | Windows event Triggered" << std::endl;
			break;
		case 14:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_SYSWMEVENT | System Event Triggered" << std::endl;
			break;
		case 15:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_KEYDOWN | Key Pressed Event" << std::endl;
			break;
		case 16:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_KEYUP | Key Released Event" << std::endl;
			break;
		case 17:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_TEXTEDITING | Text being edited" << std::endl;
			break;
		case 18:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_TEXTINPUT | Text being input" << std::endl;
			break;
		case 19:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEMOTION | Mouse move event" << std::endl;
			break;
		case 20:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEBUTTONDOWN | Mousebutton down" << std::endl;
			break;
		case 21:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEBUTTONUP | MouseButton up " << std::endl;
			break;
		case 22:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEWHEEL | Mouse wheel" << std::endl;
			break;
		case 23:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_RENDER_TARGETS_RESET | Render Target Reset" << std::endl;
			break;
		case 24:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_RENDER_DEVICE_RESET | Render Divice Reset" << std::endl;
			break;
		case 25:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | 'Event Unidentified' \t\t<--ERROR: Stopping Loop to fix-->" << std::endl;
			break;
		case 26:
			std::cout << "\t\tSystem_Graphics | Initialize() | 'Initializing System_Graphics' " << std::endl;
			break;
		case 27:
			std::cout << "\t\tSystem_Graphics | Update() | 'Updating System_Graphics' " << std::endl;
			break;
		case 28:
			std::cout << "\t\tSystem_Graphics | DrawWindow() | 'Drawing Window' " << std::endl;
			break;
		case 29:
			std::cout << "\t\tSystem_Graphics | DrawFrame() | 'Drawing Frame' " << std::endl;
			break;
		case 30:
			std::cout << "\t\tSystem_Graphics | ProcessLayers() | 'Doing nothing currently' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 32:
			std::cout << "\t\tSystem_Input | Initialize() | 'Initializing System_Input' " << std::endl;
			break;
		case 33:
			std::cout << "\t\tSystem_Input | Update() | 'Updating' " << std::endl;
			break;
		case 34:
			std::cout << "\t\tSystem_Input | ProcessMouseInput() | Triggering process from mouse press " << std::endl;
			break;
		case 35:
			std::cout << "\t\tSystem_Input | KeyReleased() | Setting KeyPressed to false " << std::endl;
			break;
		case 36:
			std::cout << "\t\tSystem_Input | MouseMoved() | Setting mouse location " << std::endl;
			break;
		case 37:
			std::cout << "\t\tSystem_Input | MouseButtonPressed() | Left Mouse Button Clicked " << std::endl;
			break;
		case 38:
			std::cout << "\t\tSystem_Input | MouseButtonPressed() | Middle Mouse Button Clicked " << std::endl;
			break;
		case 39:
			std::cout << "\t\tSystem_Input | MouseButtonPressed() | Middle Mouse Button Clicked " << std::endl;
			break;
		case 40:
			std::cout << "\t\tSystem_Input | MouseButtonReleased() | Left Mouse Button Released " << std::endl;
			break;
		case 41:
			std::cout << "\t\tSystem_Input | MouseButtonReleased() | Middle Mouse Button Released " << std::endl;
			break;
		case 42:
			std::cout << "\t\tSystem_Input | MouseButtonReleased() | Middle Mouse Button Released " << std::endl;
			break;
		case 43:
			std::cout << "\t\tSystem_Input | MouseWheel() | Mouse Wheel Scrolled " << std::endl;
			break;
		case 44:
			std::cout << "\t\tSystem_Input | KeyPressed() | key has been pressed " << std::endl;
			break;
		case 45:
			std::cout << "\t\tSystem_Logic | Initialize() | 'Initializing Logic System' " << std::endl;
			break;
		case 46:
			std::cout << "\t\tSystem_Logic | Update() | 'Updating Logic System' " << std::endl;
			break;
		case 47:
			std::cout << "\t\tSystem_Sound | Initialize() | 'Initializing Sound system' " << std::endl;
			break;
		case 48:
			std::cout << "\t\tSystem_Sound | Update() | 'Updating Sound system' " << std::endl;
			break;
		case 49:
			std::cout << "\t\tSystem_Loop | Start() | Starting Engine loop " << std::endl;
			break;
		case 50:
			std::cout << "\t\tSystem_Loop | Stop() | Stopping Engine loop " << std::endl;
			break;
		case 51:
			std::cout << "\t\tSystem_Loop | InsertSystemsIntoLoop() | Receiving Systems " << std::endl;
			break;
		case 52:
			std::cout << "\t\t" << std::endl;
			break;
		case 53:
			std::cout << "\t\tSystem_Graphics | DrawFrame() | GUI_Graphics_Renderer | GUI_Logic | GUI_Check() | Checking to see if elements need to be changed " << std::endl;
			break; 
		case 54:
			std::cout << "\t\tSystem_Graphics | DrawFrame() | GUI_Graphics_Renderer | GUI_Logic | MouseClicked() | If Left mouse button is pressed then move seen elements to mouse pos " << std::endl;
			break;
		}

	}

}
