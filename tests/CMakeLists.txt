
cmake_minimum_required(VERSION 3.31)

find_package(Catch2 3 REQUIRED)

set(input-lib-tests-src
        InputSystemsTests.cpp
)

set(input-lib-tests-modules
)

add_executable(input-lib-tests ${input-lib-tests-src})

target_sources(input-lib-tests PUBLIC FILE_SET modules TYPE CXX_MODULES FILES ${input-lib-tests-modules})
target_compile_features(input-lib-tests PUBLIC cxx_std_23)
target_link_libraries(input-lib-tests PRIVATE core-lib Catch2::Catch2WithMain)

#add_custom_target(input-lib-tests-assets
#        COMMAND ${CMAKE_COMMAND} -E copy_directory_if_different
#        "${CMAKE_CURRENT_SOURCE_DIR}/assets/"
#        "$<TARGET_FILE_DIR:input-lib-tests>/assets/"
#        COMMENT "Copying assets"
#)

#add_dependencies(input-lib-tests input-lib-tests-assets)

include(CTest)
include(Catch)
catch_discover_tests(input-lib-tests)
