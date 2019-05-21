cmake_minimum_required(VERSION 3.4)
project(CMakeProject1)

set(CMAKE_CXX_STANDARD 17)

file (STRINGS "booldecision.cpp" RUNTESTS)


if(RUNTESTS MATCHES "1")
    MESSAGE(STATUS "Running tests")
    add_executable(ShoppingBillTest Test.cpp)
else(RUNTESTS MATCHES "0")
    MESSAGE(STATUS "Running Source code")
    add_executable(ShoppingBill sourcemain.cpp)