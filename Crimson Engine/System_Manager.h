#pragma once
#include "Settings.h"
#include "System_Base.h"
#include "System_Loop.h"
#include <vector>

class SystemManager
{
public:
	void InitializeSystems(Settings* gameSettings, bool* LoopStateptr);
	System_Loop* ReturnLoop();
	std::vector <System_Base*> ReturnSystems();

};

