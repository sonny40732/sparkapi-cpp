cmake_minimum_required(VERSION 3.19)
project(sparkapi_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out/library/)
include_directories(src include)

add_library(SparkApi_cpp src/ApiCode.cpp)

