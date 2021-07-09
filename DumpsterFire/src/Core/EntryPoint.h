#pragma once

#ifdef DF_PLATFORM_WINDOWS

#include <stdio.h>

extern df::Application* df::CreateApplication();

int main(int argc, char** argv) {
	auto app = df::CreateApplication();
	app->Run();
	delete app;
}

#endif // !DF_PLATFORM_WINDOWS