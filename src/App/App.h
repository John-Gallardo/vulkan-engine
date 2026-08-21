#pragma once
#include "Renderer/Renderer.h"
#include "Window/Window.h"
#include "Input/Input.h"

class App {
public:
    void run();
    void renderLoop();

private:
    Window m_window{};
};
