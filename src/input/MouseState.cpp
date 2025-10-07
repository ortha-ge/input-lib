module;

#include <cstdint>

module Ortha.Input.MouseState;

namespace Ortha::Input {

	bool isMouseButtonPressed(const MouseState& mouseState, MouseButton button) {
		return mouseState.buttons[static_cast<uint8_t>(button)];
	}

} // namespace Ortha::Input
