cmake_minimum_required(VERSION 3.6)
project(aula_inline)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp disciplina.h disciplina.cpp aluno.cpp eleitor.h)
add_executable(aula_inline ${SOURCE_FILES})
