#include "App/App.h"
#include <iostream>   // for std::cerr
#include <print>      // IWYU pragma: keep
#include <exception>  // for exception

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
