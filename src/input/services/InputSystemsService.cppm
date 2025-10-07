
export module Ortha.Input.SystemsService;

import kangaru;
import Ortha.Core.EnTTRegistryService;
import Ortha.Core.SchedulerService;
export import Ortha.Input.Systems;

export namespace Ortha::Input {

    class InputSystemsService : public kgr::single_service<InputSystems, kgr::dependency<Core::EnTTRegistryService, Core::SchedulerService>>{};

} // Input
