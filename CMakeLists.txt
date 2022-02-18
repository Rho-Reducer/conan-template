cmake_minimum_required(VERSION 3.10)

project(hello_world VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(hello-world.h.in hello-world.h)

add_executable(hello-world "hello-world.cpp")

target_include_directories(hello-world PUBLIC
	${PROJECT_BINARY_DIR}
	)