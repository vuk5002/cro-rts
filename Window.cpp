#include "Window.h"
#include <iostream>
#include <stdexcept>


void Window::init(const std::string& title, int width, int height) {
    std::cout << "[START0]" << std::endl;
    glfwInit();

    // OpenGL sub
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);

    if (!window) {
        throw std::runtime_error("failed to create main window!");
    }
}

void Window::cleanup() {
    if (window) {
        glfwDestroyWindow(window);
    }
    glfwTerminate();
}

bool Window::shouldClose() {
    return glfwWindowShouldClose(window);
}

void Window::pollEvents() {
    glfwPollEvents();
}