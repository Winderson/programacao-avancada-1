cmake_minimum_required(VERSION 3.6)
project(aula14_classes_abstratas)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Animal.h Jacare.h)
add_executable(aula14_classes_abstratas ${SOURCE_FILES})
