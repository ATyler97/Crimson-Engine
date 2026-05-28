#pragma once
#include "SystemBase.h"
#include <vector>

class Loop : public SystemBase
{
	public:
		void Start();
		void Stop();
		void InsertSystemsIntoLoop(std::vector<SystemBase*> systemsVector);
};

