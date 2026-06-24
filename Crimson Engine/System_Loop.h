#pragma once
#include "System_Base.h"
#include <vector>

class System_Loop : public System_Base
{
	public:
		void Start();
		void Stop();
		void InsertSystemsIntoLoop(std::vector<System_Base*> systemsVector);
};

