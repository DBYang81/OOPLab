cmake_minimum_required(VERSION 3.20)
project(OOPLab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(proj1)
include_directories(proj2A)
include_directories(proj2B)
include_directories(proj3)
include_directories(proj3B)
include_directories(proj4)
include_directories(proj5)

add_executable(OOPLab
        proj1/cmake-build-debug/Testing/Temporary/LastTest.log
        proj1/cmake-build-debug/cmake_install.cmake
        proj1/cmake-build-debug/CMakeCache.txt
        proj1/cmake-build-debug/intro_proj
        proj1/cmake-build-debug/intro_proj.cbp
        proj1/cmake-build-debug/Makefile
        proj1/CMakeLists.txt
        proj1/introd.cpp
        proj1/lab01.pdf
        proj2A/cmake-build-debug/Testing/Temporary/LastTest.log
        proj2A/cmake-build-debug/cmake_install.cmake
        proj2A/cmake-build-debug/CMakeCache.txt
        proj2A/cmake-build-debug/Makefile
        proj2A/cmake-build-debug/proj2
        proj2A/cmake-build-debug/proj2.cbp
        proj2A/CMakeLists.txt
        proj2A/lab02.pdf
        proj2A/weather.xml
        proj2A/xmltemperature_pohja.cpp
        proj2B/cmake-build-debug/Testing/Temporary/LastTest.log
        proj2B/cmake-build-debug/cmake_install.cmake
        proj2B/cmake-build-debug/CMakeCache.txt
        proj2B/cmake-build-debug/Makefile
        proj2B/cmake-build-debug/proj2B
        proj2B/cmake-build-debug/proj2B.cbp
        proj2B/CMakeLists.txt
        proj2B/lab2b.cpp
        proj3/cmake-build-debug/Testing/Temporary/LastTest.log
        proj3/cmake-build-debug/cmake_install.cmake
        proj3/cmake-build-debug/CMakeCache.txt
        proj3/cmake-build-debug/Makefile
        proj3/cmake-build-debug/proj3
        proj3/cmake-build-debug/proj3.cbp
        proj3/CMakeLists.txt
        proj3/lab03.pdf
        proj3/proj3.cpp
        proj3B/cmake-build-debug/Testing/Temporary/LastTest.log
        proj3B/cmake-build-debug/cmake_install.cmake
        proj3B/cmake-build-debug/CMakeCache.txt
        proj3B/cmake-build-debug/Makefile
        proj3B/cmake-build-debug/proj3B
        proj3B/cmake-build-debug/proj3B.cbp
        proj3B/CMakeLists.txt
        proj3B/proj3b.cpp
        proj4/cmake-build-debug/Testing/Temporary/LastTest.log
        proj4/cmake-build-debug/cmake_install.cmake
        proj4/cmake-build-debug/CMakeCache.txt
        proj4/cmake-build-debug/Makefile
        proj4/cmake-build-debug/proj4
        proj4/cmake-build-debug/proj4.cbp
        proj4/CMakeLists.txt
        proj4/lab04.pdf
        proj4/lab4_main.cpp
        proj4/Time.cpp
        proj4/Time.h
        proj5/cmake-build-debug/Testing/Temporary/LastTest.log
        proj5/cmake-build-debug/cmake_install.cmake
        proj5/cmake-build-debug/CMakeCache.txt
        proj5/cmake-build-debug/Makefile
        proj5/cmake-build-debug/proj5
        proj5/cmake-build-debug/proj5.cbp
        proj5/CMakeLists.txt
        proj5/lab05.pdf
        proj5/lab5_main.cpp
        proj5/Time.cpp
        proj5/Time.h
        LICENSE
        README.md)
