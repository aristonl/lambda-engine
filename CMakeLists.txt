cmake_minimum_required(VERSION 3.13)
project(Lambda)
set(CMAKE_CXX_STANDARD 17)

set(ENGINE_SOURCES
	engine/main.cpp
	engine/graphics/stb-image.h
	engine/graphics/Window.h
	engine/graphics/Window.cpp
	engine/input/InputHandler.h
	engine/input/InputHandler.cpp
)


add_subdirectory(thirdparty/GLFW)

include_directories(${OPENGL_INCLUDE_DIR})

add_executable(Lambda ${ENGINE_SOURCES})

target_include_directories(Lambda PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/GLFW/include)
target_link_libraries(Lambda glfw)

find_package(OpenGL REQUIRED)

target_link_libraries(Lambda OpenGL::GL)