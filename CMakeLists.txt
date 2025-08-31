 
cmake_minimum_required(VERSION 3.31)

find_package(glfw3 CONFIG REQUIRED)

set (input-lib-src
        src/input/KeyboardState.cpp
        src/input/MouseState.cpp
        src/input/systems/InputSystems.cpp
)

set (input-lib-modules
        src/input/DeviceInputEvent.cppm
        src/input/KeyboardState.cppm
        src/input/MouseState.cppm
        src/input/services/InputSystemsService.cppm
        src/input/systems/InputSystems.cppm
)

add_library(input-lib STATIC ${input-lib-src} ${input-lib-modules})

target_sources(input-lib PUBLIC FILE_SET modules TYPE CXX_MODULES FILES ${input-lib-modules})
target_compile_features(input-lib PUBLIC cxx_std_23)
target_link_libraries(input-lib PUBLIC core-lib glfw)
target_include_directories(input-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

#add_subdirectory(tests)
