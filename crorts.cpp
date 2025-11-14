#include "crorts.h"
#include <iostream>

void Game::run() {
    init();
    mainLoop();
    cleanup();
}

void Game::init() {
    window.init("Cro RTS", WINX, WINY);
    vulkanRenderer.init(window.getGLFWwindow());
}

void Game::mainLoop() {
    while (!window.shouldClose()) {
        window.pollEvents();
        
    }
}

void Game::cleanup() {
    vulkanRenderer.cleanup();
    window.cleanup();
}