cmake_minimum_required(VERSION 3.27)
project(FarmOctavia)

include_directories(C:/Users/wicol/CLionProjects/FarmOctavia/biblio/x86_64-w64-mingw32/include)

set(CMAKE_CXX_STANDARD 23)

add_executable(FarmOctavia main.cpp)

target_link_libraries(FarmOctavia SDL2 SDL2main)
