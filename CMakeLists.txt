
cmake_minimum_required(VERSION 3.24.1)

project(ImageToAsciiConverter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp ImageParser.cpp)

target_link_libraries(${PROJECT_NAME} lib\\Magick++.lib)



