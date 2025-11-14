#include "crorts.h"
#include <iostream>
#include <stdexcept>

int main() {
    Game app;

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << "[ERROR] " << e.what() << std::endl;
        std::cin.get();
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}