#pragma once
#include <GLFW/glfw3.h>
#include <cstdint>

struct InstanceExtensionInfo{
    uint32_t     extensionCount{};
    const char **extensions    {};
};

class Window {
public:
    void initWindow();
    bool shouldClose() const;
    bool isKeyPressed(int key) const;
    void closeWindow();
    void pollEvents();
    InstanceExtensionInfo getRequiredInstanceExtensions() const;
    void cleanup();
private:
    GLFWwindow *m_window{};
};
