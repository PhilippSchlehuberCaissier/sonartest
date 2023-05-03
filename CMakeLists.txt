cmake_minimum_required(VERSION 3.25)
project(test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -fanalyzer")

add_executable(test main.cpp)