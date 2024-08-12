cmake_minimum_required(VERSION 3.20)
project(rust_dynamic_library)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify the path to the Rust DLL
if(WIN32)
    set(RUST_DLL_PATH "${CMAKE_SOURCE_DIR}/rust_lib/target/release/my_native_lib.lib")
elseif(UNIX AND NOT APPLE)
    set(RUST_DLL_PATH "${CMAKE_SOURCE_DIR}/rust_lib/target/release/libmy_native_lib.so")
elseif(APPLE)
    set(RUST_DLL_PATH "${CMAKE_SOURCE_DIR}/rust_lib/target/release/libmy_native_lib.lib")
endif()

# Add executable
add_executable(rust_dynamic_library 
    src/main.cpp)

# Link the Rust DLL
target_link_libraries(rust_dynamic_library "${RUST_DLL_PATH}")
