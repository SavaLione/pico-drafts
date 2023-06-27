project(blink C CXX ASM)
set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} src/blink.c)

# pull in common dependencies
target_link_libraries(${PROJECT_NAME} pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(${PROJECT_NAME})
