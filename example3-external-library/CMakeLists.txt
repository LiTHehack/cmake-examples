cmake_minimum_required(VERSION 3.2)
project(cmake-example-3)

add_definitions(-std=c++11)

include_directories(include)
file(GLOB_RECURSE SOURCE_FILES_RECURSE src/*.cpp)

add_executable(cmake_1 ${SOURCE_FILES_RECURSE})

##### GLFW #####

# built-in CMake command to handle external projects
include(ExternalProject)

set(GLFW_GIT_URL https://github.com/glfw/glfw.git)
set(GLFW_GIT_BRANCH master)
set(GLFW_PREFIX ${PROJECT_SOURCE_DIR}/external/GLFW)
set(GLFW_INSTALL_DIR ${GLFW_PREFIX})
set(GLFW_CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${GLFW_INSTALL_DIR})

ExternalProject_Add(GLFW
        PREFIX ${GLFW_PREFIX}
        GIT_REPOSITORY ${GLFW_GIT_URL}
        GIT_TAG ${GLFW_GIT_BRANCH}
        INSTALL_DIR ${GLFW_INSTALL_DIR}
        CMAKE_ARGS ${GLFW_CMAKE_ARGS}
        )

include_directories(${GLFW_INSTALL_DIR}/include)
target_link_libraries(cmake_1 glfw ${GLFW_LIBRARIES})