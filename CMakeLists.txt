cmake_minimum_required(VERSION 2.8)

project(race_simulation)

# Specify where to look for include files
include_directories(include)

# Our source files are in src
#add_subdirectory(src)

# Specify the source files that need to be build
set(race_simulation_SOURCES src/car.cpp
                            src/bike.cpp
                            src/simulation_engine.cpp
                            src/race_main.cpp)
                          
# Tell CMake to build the source
add_executable(race_simulation ${race_simulation_SOURCES})
set_property(TARGET race_simulation PROPERTY CXX_STANDARD 11)                          
