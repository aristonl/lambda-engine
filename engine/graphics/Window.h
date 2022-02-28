#pragma once

#include <iostream>

#if __APPLE__
	#define GL_SILENCE_DEPRECATION // Silence GLFW deprecation warnings
#endif
#include <GLFW/glfw3.h>

namespace lambda { namespace graphics {
	class Window {
	private:
		const char* m_title;
		int m_width, m_height;
		GLFWwindow* m_window;
		bool m_closed;
		bool m_fullscreen;
		bool m_fullscreenWindowed;

		bool init(); // The main window function
	public:
		Window(const char* title, int width, int height, bool fullscreen, bool fullscreenWindowed);
		~Window();
		void update(); // Runs every tick.
		bool closed() const;
		void clear() const; // Clears the screen. This is needed apparently because you can't show shit without clearing the screen upon init.

		inline int getWidth() const { return m_width; }
		inline int getHeight() const { return m_height; }
	};
} }