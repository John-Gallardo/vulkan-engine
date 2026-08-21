#pragma once
#include "Renderer/Renderer.h"
#include "Window/Window.h"
#include "Input/Input.h"

class App {
public:
    void run();

private:
    Window   m_window{};
    Input    m_input{};
    Renderer m_renderer{};

    void mainLoop();
    void cleanup();
};
