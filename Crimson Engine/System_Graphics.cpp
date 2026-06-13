#include "System_Graphics.h"
#include "GUI_Layer.h"
#include "GUI_Base_Window.h"
#include <SDL2/SDL.h>
#include "Settings.h"
#include <iostream>
#include "GUI_Graphics_Renderer.h"

int WindowWidth = 1920;
int WindowHeight = 1200;
const char* Title = "Default Title";
SDL_Window* window;
SDL_Renderer* GUIRendererPtr;
Settings* gameSettings;
GUI_Graphics_Renderer GUI_Grap_Rend = GUI_Graphics_Renderer();

void System_Graphics::Initialize(Settings* gameSettings)
{
	std::cout << "\t\tGraphics System | Initialize() | 'Initializing Graphics system' " << std::endl;
	Title = gameSettings->WindowTitle;
	WindowWidth = gameSettings->WindowWidth;
	WindowHeight = gameSettings->WindowHeight;
	DrawWindow();
	InitializeRenderer();
}
void System_Graphics::UpdateGraphicsSettings(Settings* gameSettings)
{
	std::cout << "\t\tGraphics System | Initialize() | 'Initializing Graphics system' " << std::endl;
	// Initialize the graphics system
}
void System_Graphics::Update()
{
	std::cout << "\t\tGraphics System | Update() | 'Updating Graphics system' " << std::endl;
	DrawFrame();
	// Update the graphics system
}
void System_Graphics::DrawWindow() {
	std::cout << "\t\tGraphics System | DrawWindow() | 'Drawing Window' " << std::endl;

	window = SDL_CreateWindow(Title , 800, 600, WindowWidth, WindowHeight, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		// Handle error
	}
}
void System_Graphics::DrawFrame() {
	std::cout << "\t\tGraphics System | DrawFrame() | 'Drawing Frame' " << std::endl;	
	// this methood will have alot of shit to do when it comes to what to draw. 
	ProcessLayers();
	
}
void System_Graphics::ProcessLayers() 
{
	SDL_RenderClear(GUIRendererPtr);
	//Hey bart do the thing


	GUI_Grap_Rend.RenderGUIGraphics(GUIRendererPtr);

	SDL_RenderPresent(GUIRendererPtr);
	//SDL_Delay(10000);
}

void System_Graphics::InitializeRenderer()
{
	std::cout << "\t\tGraphics System | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
	GUIRendererPtr = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(GUIRendererPtr, 0, 0, 0, 256);
	SDL_RenderClear(GUIRendererPtr);
}
void System_Graphics::PassWindowAndRenderPointerToSettings() 
{
	
}
