cmake_minimum_required(VERSION 3.0)
project(simulator_logic)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsanitize=undefined,address -Wall -Wextra -Werror -Wno-register")
#set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g -fsanitize=undefined,address -Wl,--no-as-needed")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g -Wl,--no-as-needed")


include_directories(
        ${CMAKE_SOURCE_DIR}/logic_elements
        ${CMAKE_SOURCE_DIR}/TimeWheel
        ${CMAKE_SOURCE_DIR}/CircuitParser
)

add_subdirectory(logic_elements)
add_subdirectory(TimeWheel)
add_subdirectory(CircuitParser)

set(SOURCES simulator.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE
        logic_elements
        TimeWheel
        CircuitParser
        ${CMAKE_SOURCE_DIR}/CircuitParser/lib/parser-verilog/verilog_parser_lib.a
)

file(COPY ${CMAKE_SOURCE_DIR}/VerilogFiles DESTINATION ${CMAKE_BINARY_DIR})
