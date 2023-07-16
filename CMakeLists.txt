set(CMAKE_TOOLCHAIN_FILE "C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")
cmake_minimum_required(VERSION 3.0.0)
project(amber)

find_package(xtensor REQUIRED)

add_library(amber amber.cpp)

find_package(xtensor CONFIG REQUIRED)
target_link_libraries(amber xtensor)

