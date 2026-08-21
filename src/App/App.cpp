#include "App.h"
#include "Window/Window.h"

void App::run() {
    m_window.initWindow();
    renderLoop();
}

void App::renderLoop() {
    while (!m_window.shouldClose()) {

    }
}
