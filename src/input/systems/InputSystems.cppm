export module Input.Systems;

import Core.Scheduler;
import entt;

export namespace Input {

	class InputSystems {
	public:
		InputSystems(entt::registry&, Core::Scheduler&);
		~InputSystems();

		InputSystems(InputSystems&&) = delete;
		InputSystems& operator=(InputSystems&&) noexcept = delete;

		InputSystems(const InputSystems&) = delete;
		InputSystems& operator=(const InputSystems&) = delete;

		void tick(entt::registry&);
		void tickKeyboardState(entt::registry&);

	private:
		entt::registry& mRegistry;
		Core::Scheduler& mScheduler;
		Core::TaskHandle mTickHandle{};
	};

} // namespace Input
