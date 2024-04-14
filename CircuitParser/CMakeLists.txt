add_library(
        CircuitParserHeaders
        INTERFACE
        include/CircuitParser.h
)

target_include_directories(
        CircuitParserHeaders
        INTERFACE
        include/
)

add_library(
        CircuitParser
        STATIC
        src/CircuitParser.cpp
)

target_link_libraries(
        CircuitParser
        PUBLIC
        CircuitParserHeaders
)

target_link_libraries(
        CircuitParserHeaders
        INTERFACE
)