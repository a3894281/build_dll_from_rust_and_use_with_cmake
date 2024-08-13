# Use RUST to build dynamic link library and use that on C++ Project

This project is to show how to make dynamic link library using RUST and how can we use that on C++ project.

Here, main project is composed with CMake so it can be compiled on multi-platform environment.

## Install Prerequisite

This is tested on Ubuntu-24.04.

#### 1. Install Rust

Use this command to install RUST.

```
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
```

For more detailed information, please refer [here](https://www.rust-lang.org/tools/install).

#### 2. Install cmake, make, g++

Use these commands to install.

```
sudo apt install cmake make g++ -y
```

## Build Rust Project

Use this command to build RUST Project.

```
cd rust_lib
cargo build --release
cd ..
```

## Build Total Project

Initialize CMake Project.

```
cmake -S . -B build
```

Compile Entire Project.

```
cmake --build build --config release
```

## Run compiled project

To run the program, use this command.

```
cd build
./rust_dynamic_library
```

## Add CI/CD pipeline

To add the CI/CD pipeline, 

Well Done ♥!