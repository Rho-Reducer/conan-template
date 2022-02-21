cmake_minimum_required(VERSION 3.10)

project(hello_world VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(Boost REQUIRED)

add_subdirectory(src)

configure_file(hello_world.h.in hello_world.h)

add_executable(hello_world "hello_world.cpp")

target_include_directories(hello_world PUBLIC
	${PROJECT_BINARY_DIR}
	)

target_link_libraries(hello_world
	util
	)

include(cmake/packaging.cmake)