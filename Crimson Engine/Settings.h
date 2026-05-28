#pragma once
struct Settings {
	//Engine related settings
	
	//Graphics related settings
	int WindowWidth = 800;
	int WindowHeight = 600;
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