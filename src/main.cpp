#include "App/App.h"
#include <print>
#include <iostream>

int main() {
    try {
        App app{};
        app.run();
    } catch (const std::exception &e) {
        std::println(std::cerr, "{}", e.what());
        return -1;
    }
    return 0;
}
