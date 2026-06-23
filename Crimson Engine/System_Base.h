#pragma once
#include "States.h"
#include "Application_Task.h"
#include "Graphics_Task.h"
#include "System_Task.h"
class System_Base
{
	protected:
	
	public:
		virtual void Initialize();
		virtual void Update();
		States* State = nullptr;
		System_Task* Tasks;

};

