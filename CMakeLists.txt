cmake_minimum_required(VERSION 3.21)
project(Animal)

set(CMAKE_CXX_STANDARD 20)

add_executable(Animal main.cpp Animal.cpp Animal.h Dog.cpp Dog.h Horse.cpp Horse.h)
