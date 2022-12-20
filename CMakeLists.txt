cmake_minimum_required(VERSION 3.24.0)

project(ImageToAsciiConverter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/main.cpp 
                               ${CMAKE_SOURCE_DIR}/Image.cpp)

add_compile_options(-Wall -Wextra -Wshadow -Wnon-virtual-dtor 
                    -pedantic -Wpedantic -Wcast-align -Wconversion -Wsign-conversion
                    -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference
                    -Wuseless-cast)


