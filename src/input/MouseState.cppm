module;

#include <cstdint>

export module Input.MouseState;

export namespace Input {

    enum class MouseButton : uint8_t {
        Left = 0,
        Right = 1,
        Middle = 2,

        Count
    };

    constexpr uint8_t MouseButtonCount = static_cast<uint8_t>(MouseButton::Count);

    struct MouseState {
        float x{};
        float y{};
        bool buttons[MouseButtonCount]{};
    };

    bool isMouseButtonPressed(const MouseState& mouseState, MouseButton button);

} // Input