cmake_minimum_required(VERSION 3.10)

project(BTE)

set(CMAKE_CXXSTANDARD 20)
set(CMAKE_STANDARD_REQUIRED ON)

target_include_directories(${PROJECT_NAME} PRIVATE include)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/parser.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})