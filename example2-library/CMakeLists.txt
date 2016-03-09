cmake_minimum_required(VERSION 3.2)
project(cmake-example-2)

add_definitions(-std=c++11)

include_directories(include)
file(GLOB_RECURSE SOURCE_FILES_RECURSE src/*.cpp)

add_executable(cmake_1 ${SOURCE_FILES_RECURSE})

# AwesomeNPC library
add_subdirectory(lib/awesome-npc)
include_directories(lib/awesome-npc/include)

target_link_libraries(cmake_1 AwesomeNPC)