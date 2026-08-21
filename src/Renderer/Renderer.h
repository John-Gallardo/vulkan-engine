#pragma once
#include <volk.h>
class Window;

class Renderer {
public:
    void initVulkan(Window &window);
private:
    VkInstance m_instance{VK_NULL_HANDLE};

    void createInstance(Window &window);
};
