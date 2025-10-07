export module Ortha.Input.KeyboardEvent;

export import Ortha.Input.DeviceInputEvent;

import Ortha.Input.KeyboardState;

export namespace Ortha::Input {

	struct KeyboardEvent {
		Key key{};
		InputEventType eventType{};
	};

} // namespace Ortha::Input
