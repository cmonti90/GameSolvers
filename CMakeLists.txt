cmake_minimum_required(VERSION 3.10)

project(GameSolver VERSION 1.0
                DESCRIPTION "Game Solver" )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS  "-std=c++17")
set(CMAKE_EXPORT_COMPILE_COMMANDS=ON)

list(APPEND CMAKE_PREFIX_PATH $ENV{MATHLIB_DIR})

find_package(Boost REQUIRED)
find_package(mathlib CONFIG REQUIRED)

add_executable(GameSolver main.cpp)