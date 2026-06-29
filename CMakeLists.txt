cmake_minimum_required(VERSION 3.15)
project(ShutdownTimer)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ShutdownTimer
    src/main.cpp
)

target_include_directories(ShutdownTimer PRIVATE ${CMAKE_SOURCE_DIR}/include)

#  fold release
set_target_properties(ShutdownTimer PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/release
)