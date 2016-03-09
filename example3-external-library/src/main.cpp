#include <iostream>
#include "GLFW/glfw3.h"

#include "sleep.hpp"

using std::cout;
using std::endl;

int main() {
    if (!glfwInit()) {
        exit(EXIT_FAILURE);
    }

    // Set some flags for OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); //TessShader = 4 otherwise 3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3); //TessShader = 0 otherwise 3
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //Open a window
	GLFWwindow *window = glfwCreateWindow(200, 160, "CMake and GLFW", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    //Set the GLFW-context the current window
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
    	glfwPollEvents();
    	Sleep(10);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}