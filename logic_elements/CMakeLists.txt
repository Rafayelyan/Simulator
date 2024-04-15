add_library(
        logic_elements_headers
        INTERFACE
        include/AndGate.h
        include/NandGate.h
        include/Gate.h
        include/InverterGate.h
        include/OrGate.h
        include/XorGate.h
        include/NorGate.h
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
        src/NandGate.cpp
        src/InverterGate.cpp
        src/OrGate.cpp
        src/XorGate.cpp
        src/NorGate.cpp
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