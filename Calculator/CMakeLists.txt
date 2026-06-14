cmake_minimum_required(VERSION 3.25)

project(
    Calculator
    VERSION 0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SRCS
    main
    simple_calc
    advance_calc
)
list(TRANSFORM SRCS PREPEND "src/")
list(TRANSFORM SRCS APPEND ".cpp")

message(STATUS "Source list: ${SRCS}")
add_executable(
    ${PROJECT_NAME}
    ${SRCS}
)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")