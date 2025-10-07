
cmake_minimum_required(VERSION 3.31)

find_package(Catch2 3 REQUIRED)

set(ortha-input-tests-src
        InputSystemsTests.cpp
)

set(ortha-input-tests-modules
)

add_executable(ortha-input-tests ${ortha-input-tests-src})

target_sources(ortha-input-tests PUBLIC FILE_SET modules TYPE CXX_MODULES FILES ${ortha-input-tests-modules})
target_compile_features(ortha-input-tests PUBLIC cxx_std_23)
target_link_libraries(ortha-input-tests PRIVATE core-lib Catch2::Catch2WithMain)

#add_custom_target(ortha-input-tests-assets
#        COMMAND ${CMAKE_COMMAND} -E copy_directory_if_different
#        "${CMAKE_CURRENT_SOURCE_DIR}/assets/"
#        "$<TARGET_FILE_DIR:ortha-input-tests>/assets/"
#        COMMENT "Copying assets"
#)

#add_dependencies(ortha-input-tests ortha-input-tests-assets)

include(CTest)
include(Catch)
catch_discover_tests(ortha-input-tests)
