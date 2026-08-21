cmake_minimum_required(VERSION 3.19)

project(main)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()

# find libraries
find_package(glfw3 3.3 REQUIRED)

set(SOURCE 
    src/main.cpp
    src/App/App.cpp 
    src/Window/Window.cpp 
    src/Input/Input.cpp 
    src/Renderer/Renderer.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)

# treat src as a root
target_include_directories(${PROJECT_NAME} PRIVATE src)

# defines
target_compile_definitions(${PROJECT_NAME} PRIVATE
    GLFW_INCLUDE_VULKAN
)

# link libraries
target_link_libraries(${PROJECT_NAME}
    glfw)
