export module Input.KeyboardEvent;

export import Input.DeviceInputEvent;

import Input.KeyboardState;

export namespace Input {

	struct KeyboardEvent {
		Key key{};
		InputEventType eventType{};
	};

} // namespace Input
