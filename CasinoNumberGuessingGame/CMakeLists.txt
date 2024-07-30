cmake_minimum_required(VERSION 3.28)
project(CasinoNumberGuessingGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(CasinoNumberGuessingGame main.cpp
        Game.cpp
        Game.h
)
