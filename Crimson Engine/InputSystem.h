#pragma once
#include "SystemBase.h"
#include "KeyStruct.h"
#include <vector>

class InputSystem : public SystemBase
{
	public:
		void Initialize() override;
		void Update() override;
		void ProcessInput();
		void KeyPressed();
		void KeyReleased();
		std::vector<Key*> ReturnActiveKeys();
};

