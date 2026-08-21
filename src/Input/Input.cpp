#include "Input.h"
#include "Window/Window.h"
#include <GLFW/glfw3.h>  // for GLFW_KEY_ESCAPE

void Input::processUserInput(Window &window) const {
    if (window.isKeyPressed(GLFW_KEY_ESCAPE)) {
        window.closeWindow();
    }
}
