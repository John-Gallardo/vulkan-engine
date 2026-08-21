#include "Input.h"
#include "Window/Window.h"

void Input::processUserInput(Window &window) const {
    if (window.isKeyPressed(GLFW_KEY_ESCAPE)) {
        window.closeWindow();
    }
}
