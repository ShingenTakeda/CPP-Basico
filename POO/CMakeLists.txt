cmake_minimum_required(VERSION 3.16.0)

project(POO)

set (CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/src/)
file(GLOB_RECURSE POO_SRC "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.hpp")

add_executable(POO ${B2_SRC})