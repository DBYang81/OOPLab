cmake_minimum_required(VERSION 3.20)
project(proj10)

set(CMAKE_CXX_STANDARD 14)

add_executable(proj10
        lab10_main.cpp Counter.h LimitedCounter.cpp LimitedCounter.h OverflowCounter.cpp OverflowCounter.h)
