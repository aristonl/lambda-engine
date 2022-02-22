cmake_minimum_required(VERSION 3.13)
project(Lambda)
set(CMAKE_CXX_STANDARD 17)

if (UNIX)
	add_definitions(-DUSE_GLFW)
endif()

if (WIN32)
	add_definitions(-DWIN32)
	target_include_directories(Lambda PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/DX12/include)
	add_subdirectory(thirdparty/DX12)
	target_link_libraries(Lambda PRIVATE d3d12 d3dcompiler d3d12-dynamic)
endif()

set(ENGINE_SOURCES
	engine/main.cpp
	engine/graphics/stb-image.h
	engine/graphics/Window.h
	engine/graphics/Window.cpp
)

add_library(
	public
	public/mathlib/idVec2.cpp
	public/mathlib/idVec2.h
)

add_subdirectory(thirdparty/GLFW)

include_directories(${OPENGL_INCLUDE_DIR})

add_executable(Lambda ${ENGINE_SOURCES})

target_include_directories(Lambda PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/GLFW/include)
target_include_directories(Lambda PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)
target_link_libraries(Lambda glfw)
target_link_libraries(Lambda public)

find_package(OpenGL REQUIRED)

target_link_libraries(Lambda OpenGL::GL)
