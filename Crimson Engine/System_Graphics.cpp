                                                                                                                                                                    #include "System_Graphics.h"
#include "GUI_Layer.h"
#include "GUI_Base_Window.h"
#include <SDL2/SDL.h>
#include "Settings.h"
#include <iostream>
#include "GUI_Graphics_Renderer.h"
#include "Logging.h"


int WindowWidth = 1920;
int WindowHeight = 1200;
const char* Title = "Default Title";
SDL_Window* window;
SDL_Renderer* GUIRendererPtr;
Settings* gameSettings;
GUI_Graphics_Renderer GUIGraphicsRender = GUI_Graphics_Renderer();


void System_Graphics::Initialize(Settings* GameSettings)
{
	Logging::Log(State->MainSt8.Debug, 26);
	gameSettings = GameSettings;
	DrawWindow();
	InitializeRenderer();
	GUIGraphicsRender.SetState(System_Graphics::State);
		
}
void System_Graphics::Update()
{
	Logging::Log(State->MainSt8.Debug, 27);
	DrawFrame();
}
void System_Graphics::DrawWindow() 
{
	Logging::Log(State->MainSt8.Debug, 28);
	window = SDL_CreateWindow("Game", gameSettings->LocX, gameSettings->LocY, gameSettings->WindowWidth, gameSettings->WindowHeight, SDL_WINDOW_SHOWN);
}
void System_Graphics::DrawFrame() {
	Logging::Log(State->MainSt8.Debug, 29);
	SDL_RenderClear(GUIRendererPtr);

	// this methood will have alot of shit to do when it comes to what to draw. 
	ProcessLayers();
	
	GUIGraphicsRender.RenderObjectsToGUI(GUIRendererPtr);
	SDL_RenderPresent(GUIRendererPtr);
}
void System_Graphics::ProcessLayers() 
{
	Logging::Log(State->MainSt8.Debug, 30);
	
}
void System_Graphics::InitializeRenderer()
{
	Logging::Log(State->MainSt8.Debug, 31);
	GUIRendererPtr = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(GUIRendererPtr, 0, 0, 0, 256);
	SDL_RenderClear(GUIRendererPtr);
}
