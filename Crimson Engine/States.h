#pragma once
#include <iostream>
#include "vector"

struct InputState
{
	bool KEYS[322];
	bool* KEYSPtr = KEYS;
	bool LeftMouseButton;
	bool RightMouseButton;
	bool MiddleMouseButton = false;
	int32_t MouseXpos;
	int32_t MouseYpos;
	int32_t ScrollPosition;
};
struct MainLoop{
	bool Running;
};
struct TimeState {
	int64_t CurrentTime;
	int64_t DeltaTime;
	int64_t PreviousTime;
};
struct WindowState {
	int WindowWidth = 1920;
	int WindowHeight = 1200;
	const char* Title = "Game";
	bool Fullscreen;
	bool FullscreenDesktop;
	bool OpenGL;
	bool Vulkan;
	bool Borderless;
	bool IsResizeable;
	bool IsMinimizable;
	bool IsMaxamized;
	bool HardwareAcceleration;
	bool SoftwareRenderer;
	bool VSync;
};
struct RendererState {

};
struct States {
	InputState InputSt8;
	TimeState TimeSt8;
	WindowState WindowSt8;
	RendererState RenderSt8;
};

