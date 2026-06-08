#pragma once
#include "System_Base.h"
#include "Settings.h"

class System_Graphics : public System_Base
{
	public:
		void Update() override;
		void Initialize(Settings* gameSettings);
		void UpdateGraphicsSettings(Settings* gameSettings);
	private:
		void DrawWindow();
		void DrawFrame();
		void InitializeRenderer();
		void PassWindowAndRenderPointerToSettings();
		void ProcessLayers();
		
		
};

