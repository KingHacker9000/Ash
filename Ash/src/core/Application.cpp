#include "Application.h"
#include <stdio.h>

namespace Ash {

	Application::Application() {

	}

	Application::~Application() {
		printf("Engine is Stopping");
	}

	void Application::Run() {
		printf("Engine is Running\n");
		while (true);
	}

	
}