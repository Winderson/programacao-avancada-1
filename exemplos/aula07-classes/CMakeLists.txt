cmake_minimum_required(VERSION 3.6)
project(aula_classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp aluno.h aluno.cpp)
add_executable(aula_classes ${SOURCE_FILES})
