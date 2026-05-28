#pragma once
#include "SystemBase.h"
#include "vector"
#include "KeyStruct.h"

class LogicSystem : public SystemBase
{
public:
	void Initialize() override;
	void Update() override;
	void ReceiveActiveKeys(std::vector<Key*> activeKeys);
};

