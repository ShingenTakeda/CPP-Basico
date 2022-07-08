cmake_minimum_required(VERSION 3.16.0)

project(Basico)

set (CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE B_SRC "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.hpp")

add_executable(b ${B_SRC})