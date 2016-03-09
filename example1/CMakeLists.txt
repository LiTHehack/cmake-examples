cmake_minimum_required(VERSION 3.2)
project(cmake-lecture)

# allows C++ includes like #include "calculator.hpp"
include_directories(include)

# create an executable from the source files
add_executable(cmake_1 src/main.cpp src/Calculator.cpp)

#[[
set(SOURCE_FILES src/main.cpp src/Calculator.cpp)
add_executable(cmake_2 ${SOURCE_FILES})
]]

#[[
file(GLOB_RECURSE SOURCE_FILES_RECURSE src/*.cpp)
message(WARNING "C++ source files: ${SOURCE_FILES_RECURSE}")
add_executable(cmake_3 ${SOURCE_FILES_RECURSE})
]]