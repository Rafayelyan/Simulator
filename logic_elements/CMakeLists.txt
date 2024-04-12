add_library(
        logic_elements_headers
        INTERFACE
        include/AndGate.h
        include/Gate.h
        include/InverterGate.h
        include/OrGate.h
        include/Wire.h
        include/Utils.h
)

target_include_directories(
        logic_elements_headers
        INTERFACE
        include/
)

add_library(
        logic_elements
        STATIC
        src/AndGate.cpp
        src/InverterGate.cpp
        src/OrGate.cpp
        src/Wire.cpp
        src/Utils.cpp
)

target_link_libraries(
        logic_elements
        PUBLIC
        logic_elements_headers
)

target_link_libraries(
        logic_elements_headers
        INTERFACE
)