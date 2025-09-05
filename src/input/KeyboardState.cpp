module;

#include <cstdint>

module Input.KeyboardState;

namespace Input {
	bool isKeyPressed(const KeyboardState& keyboardState, Key key) {
		return keyboardState.keys[static_cast<uint8_t>(key)];
	}
} // namespace Input
