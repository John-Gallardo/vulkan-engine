#pragma once
#include <GLFW/glfw3.h>

class Window {
public:
    void initWindow();
    bool shouldClose();
private:
    GLFWwindow *m_window{};
};
