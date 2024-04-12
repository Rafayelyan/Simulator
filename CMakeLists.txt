cmake_minimum_required(VERSION 3.0)
project(simulator_logic)

set(CMAKE_C_COMPILER /usr/bin/g++)
set(CMAKE_CXX_COMPILER /usr/bin/g++)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsanitize=undefined,address -Wall -Wextra -Werror")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g -fsanitize=undefined,address -Wall -Wextra -Werror")

set(SOURCES simulator.cpp)

include_directories(${CMAKE_SOURCE_DIR}/logic_elements)
include_directories(${CMAKE_SOURCE_DIR}/TimeWheel)
add_subdirectory(logic_elements)
add_subdirectory(TimeWheel)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE logic_elements TimeWheel)

