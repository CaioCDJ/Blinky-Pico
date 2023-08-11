
cmake_minimum_required(VERSION 3.12)


# Pull in SDK (must be before project)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)


project(blink)

# Initialize the SDK
pico_sdk_init()

add_executable(
    ${PROJECT_NAME}  main.c
)

# pull in common dependencies
target_link_libraries(
    ${PROJECT_NAME} pico_stdlib
)


# create map/bin/hex file etc.
pico_add_extra_outputs(${PROJECT_NAME})

