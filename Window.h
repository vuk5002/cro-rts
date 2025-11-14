#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

#define WINX 1280
#define WINY 720

class Window {
public:
    void init(const std::string& title, int width, int height);
    void cleanup();
    bool shouldClose();
    void pollEvents();

    GLFWwindow* getGLFWwindow() const { return window; }

private:
    GLFWwindow* window = nullptr;
};