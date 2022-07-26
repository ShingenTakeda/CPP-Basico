cmake_minimum_required(VERSION 3.16.0)

project(intensivo_cpp)

set (CMAKE_CXX_STANDARD 17)

option(BASICO_UM "Primeira parte(headers,classes,structs,bibliotecas)" ON)
option(BASICO_DOIS "Segunda parte(pointeiros,referencias,basicos de template)" ON)
option(POO "basicos de POO em c++" ON)

if(BASICO_UM)
    add_subdirectory(Basico1/)
endif()

if(BASICO_DOIS)
    add_subdirectory(Basico2/)
endif()

if()
    add_subdirectory(POO/)
endif()