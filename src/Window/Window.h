#pragma once
#include <GLFW/glfw3.h>

class Window {
public:
    void initWindow();
    bool shouldClose() const;
    bool isKeyPressed(int key) const;
    void closeWindow();
    void pollEvents();
    void cleanup();
private:
    GLFWwindow *m_window{};
};
