#include <GLFW/glfw3.h>
#include <iostream>

#include <mathlib/idVec2.h>

#include "graphics/Window.h"

#if __APPLE__
	#define GL_SILENCE_DEPRECATION // Silence GLFW deprecation warnings
#endif

int main() {
	using namespace lambda;
	using namespace graphics;

	Window window("Lambda Engine v1.0.0 [MAIN FORK]", 1280, 720, false, false);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	
	while (!window.closed()) {
		// I swear to god if I have to use god awful std::cout all the time I will literally murder myself,
		// it is absolutely dogs**t. - 4tl
		// std::cout << "[DEBUG] " << window.getWidth() << ", " << window.getHeight() << std::endl;

		window.clear();

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
		window.update();
	}

	return 1;

}