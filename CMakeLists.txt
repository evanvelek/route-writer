cmake_minimum_required(VERSION 3.5.0)
project(route-writer VERSION 0.1.0 LANGUAGES C CXX)

add_library(route-writer route-writer.cpp)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/toolchain.cmake")


add_executable(route-writer main.cpp)