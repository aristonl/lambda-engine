#pragma once

#include <iostream>
#include <GLFW/glfw3.h>

namespace lambda { namespace graphics {
	class Window {
	private:
		const char* m_title;
		int m_width, m_height;
		GLFWwindow* m_window;
		bool m_closed;

		bool init();
	public:
		Window(const char* title, int width, int height);
		~Window();
		void update() const;
		bool closed() const;
		void clear() const;
	};
} }