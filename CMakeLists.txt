cmake_minimum_required(VERSION 3.30)
project(herencia1)

set(CMAKE_CXX_STANDARD 20)

add_executable(herencia1 main.cpp
        person.cpp
        person.h
        student.cpp
        student.h)
