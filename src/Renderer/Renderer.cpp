#include "Renderer.h"
#include "Config.h"
#include "Window/Window.h"
#include <volk.h>
#include <stdexcept>

void Renderer::initVulkan(Window &window) {
    if (volkInitialize() != VK_SUCCESS) {
        throw std::runtime_error("Error: failed to initialize Volk");
    }
    createInstance(window);

}

void Renderer::createInstance(Window &window) {
    constexpr VkApplicationInfo applicationInfo{
        .sType             {VK_STRUCTURE_TYPE_APPLICATION_INFO},
        .pNext             {nullptr},
        .pApplicationName  {Config::title},
        .applicationVersion{Config::version},
        .pEngineName       {nullptr},
        .engineVersion     {},
        .apiVersion        {VK_API_VERSION_1_4}
    };

    // grab requried instance extensions for GLFW
    auto [glfwExtensionCount, glfwExtensions] = window.getRequiredInstanceExtensions();

    const VkInstanceCreateInfo instanceCreateInfo{
        .sType                  {VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO},
        .pNext                  {nullptr},
        .flags                  {},
        .pApplicationInfo       {&applicationInfo},
        .enabledLayerCount      {0},
        .ppEnabledLayerNames    {nullptr},
        .enabledExtensionCount  {glfwExtensionCount},
        .ppEnabledExtensionNames{glfwExtensions}
    };

    vkCreateInstance(&instanceCreateInfo, nullptr, &m_instance);
}
