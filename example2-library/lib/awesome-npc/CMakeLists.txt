cmake_minimum_required(VERSION 3.2)

# find all source and header files
file(GLOB_RECURSE AWESOMENPC_SOURCE src/*cpp)
file(GLOB_RECURSE AWESOMENPC_HEADER include/*hpp)

include_directories(include)

# generate CMake library to link executables against
add_definitions(-std=c++11)

add_library(AwesomeNPC ${ANPC_BUILD_TYPE} ${AWESOMENPC_SOURCE} ${AWESOMENPC_HEADER})