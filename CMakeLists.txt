cmake_minimum_required(VERSION 3.16)

project(LoungeDrift)

set(CMAKE_CXX_STANDARD 20)
add_executable(
  loungedrift 
  src/main.cpp
  src/utils.cpp)

target_link_libraries(loungedrift sfml-graphics sfml-window sfml-system)
