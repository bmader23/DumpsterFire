#pragma once

#include "Core.h"

namespace df {
	class DF_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

