cmake_minimum_required(VERSION 3.20)

project(fft_example)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OFF_TARGET 1)

add_subdirectory(./../../../esp32-fft-module/ build/esp32-fft-module/)

add_executable(main_app main.cpp)
target_link_libraries(main_app fft)