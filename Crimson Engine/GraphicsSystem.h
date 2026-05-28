#pragma once
#include "SystemBase.h"
#include "Settings.h"

class GraphicsSystem : public SystemBase
{
	public:
		void Update() override;
		void Initialize(Settings* gameSettings);
		void UpdateGraphicsSettings(Settings* gameSettings);
	private:
		void DrawWindow();
		void DrawFrame();
		void InitializeRenderer();
		void ProcessLayers();
		
		
};

