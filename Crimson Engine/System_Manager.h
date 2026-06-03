#pragma once
#include "Settings.h"
#include "System_Base.h"
#include <vector>

class SystemManager
{
public:
	void InitializeSystems(Settings* gameSettings, bool* LoopStateptr);
	void StartEngine();
	std::vector <System_Base*> ReturnSystems();

};

