cmake_minimum_required(VERSION 3.10)

project(hello_world VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

configure_file(hello_world.h.in hello_world.h)

add_executable(hello_world "hello_world.cpp")

target_include_directories(hello_world PUBLIC
	${PROJECT_BINARY_DIR}
	)

target_link_libraries(hello_world
	CONAN_PKG::boost
	)
