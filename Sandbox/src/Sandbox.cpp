#pragma once
#include "Sandbox.h"

df::Application* df::CreateApplication() {
	return new Sandbox();
}