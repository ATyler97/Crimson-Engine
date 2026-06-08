#pragma once
#include <SDL2/SDL.h>
struct Settings {
	//Engine related settings
	
	//Graphics related settings
	int WindowWidth = 800;
	int WindowHeight = 640;
	const char* WindowTitle = "My Game";
	bool Fullscreen = false;
	bool FullscreenDesktop = false;
	bool OpenGL = false;
	bool Vulkan = false;
	bool Borderless = false;
	bool IsResizeable = false;
	bool IsMinimizable = false;
	bool IsMaxamized = false;
	bool HardwareAcceleration = false;
	bool SoftwareRenderer = false;
	bool VSync = false;

};