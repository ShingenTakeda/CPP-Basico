cmake_minimum_required(VERSION 3.16.0)

project(Basico)

set (CMAKE_CXX_STANDARD 17)

#Biblioteca
include_directories(${PROJECT_SOURCE_DIR}/Folha/)
file(GLOB_RECURSE FOLHA_SRC "${PROJECT_SOURCE_DIR}/Folha/*.cpp" "${PROJECT_SOURCE_DIR}/Folha/*.hpp")

add_library(folha SHARED ${FOLHA_SRC})

#Executavel
include_directories(${PROJECT_SOURCE_DIR}/src/)
file(GLOB_RECURSE B_SRC "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.hpp")

add_executable(b ${B_SRC})
target_link_libraries(b folha)