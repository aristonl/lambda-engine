#include <GLFW/glfw3.h>
#include <iostream>

#include "graphics/Window.h"

int main() {
	using namespace lambda;
	using namespace graphics;

	Window window("Lambda Engine v0.0.1", 800, 600);
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

	return 0;
}