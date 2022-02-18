cmake_minimum_required(VERSION 3.10)

add_library(util STATIC string_util.cpp)

target_include_directories(util
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})