#pragma once
#include "States.h"
class System_Base
{
	protected:
	
	public:
		virtual void Initialize();
		virtual void Update();
		States* State = nullptr;
};

