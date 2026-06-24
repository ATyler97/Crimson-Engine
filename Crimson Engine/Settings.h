#pragma once
#include <SDL2/SDL.h>
struct Settings {
	//Engine related settings
	bool Debug = true;
	//Graphics related settings
	int LocX = 30;
	int LocY = 30;
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