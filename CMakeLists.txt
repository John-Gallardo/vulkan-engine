cmake_minimum_required(VERSION 3.19)

project(main)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()

set(SOURCE src/main.cpp src/App/App.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
