#pragma once
#include <volk.h>
#include <string_view>
class Window;

class Renderer {
public:
    void initVulkan(Window &window);
private:
    VkInstance       m_instance      {VK_NULL_HANDLE};
    VkPhysicalDevice m_physicalDevice{VK_NULL_HANDLE};
    VkDevice         m_device        {VK_NULL_HANDLE};

    void createInstance(Window &window);
    void pickPhysicalDevice();
    void createDevice();
    void checkResult(VkResult result, std::string_view errorMessage) const;
    void cleanup();
};
