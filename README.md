# Project README

## Overview
The project is a simple 2D particle simulation using the SMPP library. The application creates a window and allows users to interact with particles by adding them with mouse clicks and observing their movement based on simple physics.

## Features
- 2D particle simulation
- Mouse-based particle addition
- Basic rendering of particles

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed in specific projects:
  - X11 for windowing on Linux
  - WINAPI for windowing on Windows

## Build & Run
The project includes four makefiles tailored for different platforms: Linux, Windows, Wine, and WebAssembly.

### Building the Project
To build the project for a specific platform, navigate to the project directory and run:
```bash
make -f Makefile.(os) all
```
Replace `(os)` with `linux`, `windows`, `wine`, or `web` depending on your target platform.

For example, to build for Linux:
```bash
make -f Makefile.linux all
```

To perform a clean rebuild (removing previous build artifacts):
```bash
make -f Makefile.(os) clean
make -f Makefile.(os) all
```

### Running the Project
After building the project, you can run it using:
```bash
make -f Makefile.(os) exe
```
This will execute the compiled program.

For debugging:
```bash
make -f Makefile.(os) debug
```

### Build Options
- `make -f Makefile.(os) all`: Builds the project output.
- `make -f Makefile.(os) do`: Builds and executes the project.
- `make -f Makefile.(os) clean`: Removes build artifacts.