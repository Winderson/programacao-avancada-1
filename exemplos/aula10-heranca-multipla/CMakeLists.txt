cmake_minimum_required(VERSION 3.6)
project(aula10_heranca_multipla)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Relogio.h Calendario.h Agenda.h)
add_executable(aula10_heranca_multipla ${SOURCE_FILES})
