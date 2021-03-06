#pragma once
#include "Core.h"

namespace Ash {

	class ASH_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication(); // to be defined by client

}