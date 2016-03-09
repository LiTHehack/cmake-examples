cmake_minimum_required(VERSION 3.2)
project(cmake-example-3)

#add_definitions(-std=c++11)

include_directories(include)
file(GLOB_RECURSE SOURCE_FILES_RECURSE src/*.cpp)

add_executable(cmake_1 ${SOURCE_FILES_RECURSE})

##### GLFW #####
add_subdirectory(external/glfw)

include_directories(${GLFW_INCLUDE_DIRS})
target_link_libraries(cmake_1 glfw ${GLFW_LIBRARIES})