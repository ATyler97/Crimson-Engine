#pragma once
#include "System_Base.h"
#include "vector"

class System_Logic : public System_Base
{
public:
	void Initialize() override;
	void Update() override;
	void ReceiveActiveKeys(std::vector<bool*> activeKeys);
};

