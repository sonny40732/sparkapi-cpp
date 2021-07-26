cmake_minimum_required(VERSION 3.19)
project(sparkapi_cpp)

set(CMAKE_CXX_STANDARD 20)

include_directories(src include)

add_executable(sparkapi_cpp src/ApiCode.cpp src/Testing.cpp)
