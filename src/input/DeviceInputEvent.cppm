module;

#include <cstdint>

export module Ortha.Input.DeviceInputEvent;

export namespace Ortha::Input {

	enum class InputEventType : uint8_t {
		Pressed,
		Released
	};

	struct DeviceInputEvent {};

} // namespace Ortha::Input
