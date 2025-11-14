#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class VulkanRenderer {
public:
    void init(GLFWwindow* window);
    void cleanup();

private:
    void createInstance();

    VkInstance instance = VK_NULL_HANDLE;
};