#include "Window.h"

namespace lambda { namespace graphics {
	Window::Window(const char* title, int width, int height) {
		m_title = title;
		m_width = width;
		m_height = height;
		if (!init()) { glfwTerminate(); }
	}

	Window::~Window() {
		glfwTerminate();
	}

	bool Window::init() {
		if (!glfwInit()) {
			std::cout << "[GLFW] GLFW was unable to initialize... too bad!" << std::endl; // fuck this thing
			return false;
		}

		m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);

		if (!m_window) {
			glfwTerminate();
			std::cout << "[GLFW] Failed to create a GLFW Window." << std::endl;
			return false;
		}

		glfwMakeContextCurrent(m_window);
		return true;
	}

	bool Window::closed() const {
		return glfwWindowShouldClose(m_window) == 1;
	}

	void Window::clear() const {
		glClear(GL_COLOR_BUFFER_BIT);
	}

	void Window::update() {
		glfwSwapBuffers(m_window);
		glfwGetFramebufferSize(m_window, &m_width, &m_height);
		glViewport(0, 0, m_width, m_height);
		glfwPollEvents();
	}

} }