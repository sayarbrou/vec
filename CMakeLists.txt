cmake_minimum_required(VERSION 4.0)

project(Vec CXX)

add_library(Vec2 STATIC src/Vec2.cpp)

target_include_directories(Vec2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
