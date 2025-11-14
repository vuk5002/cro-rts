#pragma once

#include "Window.h"
#include "VulkanRenderer.h"

class Game {
public:
    void run();

private:
    void init();
    void mainLoop();
    void cleanup();

    Window window;
    VulkanRenderer vulkanRenderer;
};