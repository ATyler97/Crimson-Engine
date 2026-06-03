#pragma once
#include "System_Base.h"
#include <vector>

class Loop : public System_Base
{
	public:
		void Start(bool* State);
		void Stop();
		void InsertSystemsIntoLoop(std::vector<System_Base*> systemsVector);
};

