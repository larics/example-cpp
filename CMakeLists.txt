cmake_minimum_required(VERSION 2.8)

project(traffic_sim)

# Specify where to look for include files
include_directories(include)

# Our source files are in src
#add_subdirectory(src)

# Specify the source files that need to be build
set(traffic_sim_SOURCES src/Car.cpp
                        src/sim_main.cpp)

# Tell CMake to build the source
add_executable(traffic_sim ${traffic_sim_SOURCES})

