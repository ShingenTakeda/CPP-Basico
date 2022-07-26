cmake_minimum_required(VERSION 3.16.0)

project(basico1)

set (CMAKE_CXX_STANDARD 17)

#Biblioteca
include_directories(${PROJECT_SOURCE_DIR}/Folha/)
file(GLOB_RECURSE FOLHA_SRC "${PROJECT_SOURCE_DIR}/Folha/*.cpp" "${PROJECT_SOURCE_DIR}/Folha/*.hpp")

add_library(folha SHARED ${FOLHA_SRC})

include_directories(${PROJECT_SOURCE_DIR}/biblioteca/)
file(GLOB_RECURSE BIBLIO_SRC "${PROJECT_SOURCE_DIR}/biblioteca/*.cpp" "${PROJECT_SOURCE_DIR}/biblioteca/*.hpp")

add_library(biblio STATIC ${BIBLIO_SRC})

#Executavel
include_directories(${PROJECT_SOURCE_DIR}/src/)
file(GLOB_RECURSE B1_SRC "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.hpp")

add_executable(b1 ${B1_SRC})
target_link_libraries(b1 folha biblio)