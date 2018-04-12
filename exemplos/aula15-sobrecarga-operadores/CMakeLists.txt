cmake_minimum_required(VERSION 3.6)
project(aula15_sobrecarga_operadores)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ponto.h)
add_executable(aula15_sobrecarga_operadores ${SOURCE_FILES})
