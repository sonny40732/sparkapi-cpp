cmake_minimum_required(VERSION 3.19)
project(sparkapi_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out/library/)
set(DEPENDENCIES ${PROJECT_SOURCE_DIR}/dependencies/)
include_directories(dependencies/include/ include)

add_library(SparkApi_cpp STATIC
        include/Utils/ApiCode.h src/utils/ApiCode.cpp
        include/Utils/StringUtils.h src/utils/StringUtils.cpp
        include/Configs/Config.h
        include/SparkApi.hpp src/SparkApi.cpp
        include/Configs/AccessTokenConfig.h
        )

find_library(libCurl curl_MacOS PATHS ${DEPENDENCIES}/lib/curl/ REQUIRED)
find_library(libSparkApi_cpp SparkApi_cpp PATHS ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY} REQUIRED)

add_executable(temp_test tests/tmp/testing.cpp)
target_link_libraries(temp_test PRIVATE ${libSparkApi_cpp})
