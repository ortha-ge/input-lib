
export module Input.SystemsService;

import kangaru;
import Core.EnTTRegistryService;
import Core.SchedulerService;
export import Input.Systems;

export namespace Input {

    class InputSystemsService : public kgr::single_service<InputSystems, kgr::dependency<Core::EnTTRegistryService, Core::SchedulerService>>{};

} // Input
