 
cmake_minimum_required(VERSION 3.31)

find_package(glfw3 CONFIG REQUIRED)

set (ortha-input-src
        src/input/KeyboardState.cpp
        src/input/MouseState.cpp
        src/input/systems/InputSystems.cpp
)

set (ortha-input-modules
        src/input/DeviceInputEvent.cppm
        src/input/KeyboardEvent.cppm
        src/input/KeyboardState.cppm
        src/input/MouseState.cppm
        src/input/services/InputSystemsService.cppm
        src/input/systems/InputSystems.cppm
)

add_library(ortha-input STATIC ${ortha-input-src} ${ortha-input-modules})

target_sources(ortha-input PUBLIC FILE_SET modules TYPE CXX_MODULES FILES ${ortha-input-modules})
target_compile_features(ortha-input PUBLIC cxx_std_23)
target_link_libraries(ortha-input PUBLIC ortha-core glfw)
target_include_directories(ortha-input PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

#add_subdirectory(tests)
