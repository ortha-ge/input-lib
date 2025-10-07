module;

#include <cstdint>

module Ortha.Input.KeyboardState;

namespace Ortha::Input {
	bool isKeyPressed(const KeyboardState& keyboardState, Key key) {
		return keyboardState.keys[static_cast<uint8_t>(key)];
	}
} // namespace Ortha::Input
