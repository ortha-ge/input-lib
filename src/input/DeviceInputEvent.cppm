module;

#include <cstdint>

export module Input.DeviceInputEvent;

export namespace Input {

	enum class InputEventType : uint8_t {
		Pressed,
		Released
	};

	struct DeviceInputEvent {};

} // namespace Input
