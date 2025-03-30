cmake_minimum_required(VERSION 3.10)

project(cpp_project)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

file(GLOB SOURCES "src/*.cpp")

add_executable(cpp_project ${SOURCES})