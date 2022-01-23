cmake_minimum_required(VERSION 3.20)
project(proj11)

set(CMAKE_CXX_STANDARD 14)

add_executable(proj11
        lab11_main.cpp CounterUser.h CounterUser.cpp OverflowCounter.cpp OverflowCounter.h)
