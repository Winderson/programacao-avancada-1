cmake_minimum_required(VERSION 3.6)
project(aula09_camadas)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Conta.cpp Conta.h ControladorAgencia.cpp ControladorAgencia.h InterfaceAgencia.cpp InterfaceAgencia.h)
add_executable(aula09_camadas ${SOURCE_FILES})
