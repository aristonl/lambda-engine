#include <GLFW/glfw3.h>
#include <iostream>

#include "graphics/Window.h"

int main() {
	using namespace lambda;
	using namespace graphics;

	Window window("Lambda Engine v0.0.1", 800, 600);

	while (!window.closed()) {
		window.update();
	}

	return 0;
}