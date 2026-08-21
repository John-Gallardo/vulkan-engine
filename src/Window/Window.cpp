#include "Window.h"
#include "stdexcept"
#include "Config.h"
#include <GLFW/glfw3.h>

void Window::initWindow() {
    if (glfwInit() == GLFW_FALSE) {
        throw std::runtime_error("Error: Failed to initialize GLFW");
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    m_window = glfwCreateWindow(Config::width, Config::height, Config::title.data(), nullptr, nullptr);

    if (m_window == nullptr) {
        throw std::runtime_error("Error: Failed to create GLFW window");
    }
}

bool Window::shouldClose() {
    return glfwWindowShouldClose(m_window);
}
