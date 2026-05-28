#pragma once
#include "Settings.h"
#include "SystemBase.h"
#include <vector>

class SystemManager
{
public:
	void InitializeSystems(Settings* gameSettings);
	void StartEngine();
	std::vector <SystemBase*> ReturnSystems();

};

