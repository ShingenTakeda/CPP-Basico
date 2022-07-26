cmake_minimum_required(VERSION 3.16.0)

project(basico2)

set (CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/src/)
file(GLOB_RECURSE B2_SRC "src/*.cpp")

add_executable(b2 ${B2_SRC})