module;

#include <cstdint>

module Input.MouseState;

namespace Input {

    bool isMouseButtonPressed(const MouseState& mouseState, MouseButton button) {
        return mouseState.buttons[static_cast<uint8_t>(button)];
    }

} // Input
