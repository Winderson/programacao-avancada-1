cmake_minimum_required(VERSION 3.6)
project(aula10_heranca)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Conta.cpp Conta.h ContaCorrente.cpp ContaCorrente.h)
add_executable(aula10_heranca ${SOURCE_FILES})
