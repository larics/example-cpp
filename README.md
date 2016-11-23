# example-cpp

An example generic C++ project conforming to the [LARICS C++ coding standard](http://larics.rasip.fer.hr/farm/laricswiki/doku.php?id=software:coding_standard#c_coding_standards). Outlines general rules for C++ projects. Specific frameworks (e.g. ROS, Qt, ...) may have additional rules or override some of these rules.

The example implements a very simplified race simulation between different types of vehicles.

## Prerequisites

The code has been developed and tested on an Ubuntu 16.04 system. The following libraries are required to build the code and the developer docs:

 * cmake
 * doxygen

On Ubuntu 16.04 the abovementioned prerequisites can be installed with the following commands:
```
sudo apt install cmake doxygen
```

A similar procedure should work on most modern Linux systems. The code itself does not use any Linux-specific functionality, so it should be directly portable to Windows, but this has not been tested.

## Quickstart

### Building the code

After installing the prerequisites, `cd` to the project folder and build the code:
```
mkdir build
cd build
cmake ..
make
```

then run the demo:
```
blablabla
```

### Building the docs

blabla

## Detailed description

Some important points which should be noted and followed in all LARICS C++ projects are outlined below.

### The README.md file

**Every** project must have a README.md file in the root of the project. This is the first and most important information for any developer trying to build and use your code. It must provide enough instructions for the user to quickly install the necessary prerequisites, run an example program and check whether it yields correct output.

### Build system

LARICS C++ code shall use [CMake](https://cmake.org/) as its build system, because of its simplicity and cross-platform portability (unless another build system is explicitly required by a specific project).

### Code organization

Source code should be organized in folders. The recommended layout is separate a `include` folder for header files and a `src` folder for source (`.cpp`) files. In general, each class should be impnlemented in it's own `.h` and `.cpp` file pair.


### Code documentation

The code API should be documented using [Doxygen](http://www.stack.nl/~dimitri/doxygen/).
