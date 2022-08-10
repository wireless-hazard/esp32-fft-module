cmake_minimum_required(VERSION 3.5)

set(EXTRA_COMPONENT_DIRS ${PWD}../../esp32-fft-module/)

set(COMPONENT_REQUIRES "esp32-fft-module")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(rms_example)