cmake_minimum_required(VERSION 3.20)
project(proj11B)

set(CMAKE_CXX_STANDARD 14)

add_executable(proj11B main.cpp
        OverflowCounter.cpp headers/OverflowCounter.h LimitedCounter.cpp headers/LimitedCounter.h
        Observer.cpp headers/Observer.h)
