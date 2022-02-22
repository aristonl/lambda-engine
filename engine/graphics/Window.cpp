#include "Window.h"

#if __APPLE__
	#define GL_SILENCE_DEPRECATION // Silence GLFW deprecation warnings
#endif

#define STB_IMAGE_IMPLEMENTATION
#include "stb-image.h"

namespace lambda { namespace graphics {
	void WindowResize(GLFWwindow* window, int width, int height);

	// This is a really bad way to enable fullscreen and fullscreen windowed on init, but i'm lazy and it works so whatever.
	// TODO: Make this better.
	Window::Window(const char* title, int width, int height, bool fullscreen, bool fullscreenWindowed) {
		m_title = title;
		m_width = width;
		m_height = height;
		m_fullscreen = fullscreen;
		m_fullscreenWindowed = fullscreenWindowed;
		if (!init())
		{
			glfwTerminate();
		}
	}

	Window::~Window() {
		glfwTerminate();
	}

	bool Window::init() {
		if (!glfwInit()) {
			std::cout << "[GLFW] GLFW was unable to initialize... too bad!" << std::endl; // fuck this thing
			return false;
		}

		if (m_fullscreen == true) {
			m_window = glfwCreateWindow(m_width, m_height, m_title, glfwGetPrimaryMonitor(), NULL);
			std::cout << "[GLFW] Created window in fullscreen mode." << std::endl;
		}
		else if (m_fullscreenWindowed == true) {
			const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());

			glfwWindowHint(GLFW_RED_BITS, mode->redBits);
			glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
			glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
			glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);

			m_window = glfwCreateWindow(m_width, m_height, m_title, glfwGetPrimaryMonitor(), NULL);
			std::cout << "[GLFW] Created window in fullscreen windowed mode." << std::endl;
		}
		else {
			m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
			std::cout << "[GLFW] Created window in windowed mode." << std::endl;
		}

		if (!m_window) {
			glfwTerminate();
			std::cout << "[GLFW] Failed to create a GLFW Window." << std::endl;
			return false;
		}
		else {
			return true;
		}

		glfwMakeContextCurrent(m_window); // Making sure the main window is set to the only window we have lmao. 

		// Only resize the glViewpoint when window resize is called back instead of doing it in the update function.
		// Putting it in the update function is very resource intensive since it will be resetting the viewpoint every
		// tick so it's better to call WindowResize when a resize is detected.
		glfwSetWindowSizeCallback(m_window, WindowResize); 

		// Set window icon (TODO: Find a better implementation for this)
		GLFWimage images[2];
		images[0].pixels = stbi_load("icon/lambda-large.png", &images[0].width, &images[0].height, 0, 4);
		images[1].pixels = stbi_load("icon/lambda-small.png", &images[0].width, &images[0].height, 0, 4);

		glfwSetWindowIcon(m_window, 2, images);

		return true;
	}

	bool Window::closed() const {
		return glfwWindowShouldClose(m_window) == 1;
	}

	void Window::clear() const {
		glClear(GL_COLOR_BUFFER_BIT); // again, still not sure why we need this but here it is
	}

	void Window::update() {
		glfwSwapBuffers(m_window);
		glfwGetFramebufferSize(m_window, &m_width, &m_height);
		glfwPollEvents();
	}

	void WindowResize(GLFWwindow* window, int width, int height) { 
		glViewport(0, 0, width, height);
	}
} }