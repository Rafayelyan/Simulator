add_library(
        logic_elements_headers
        INTERFACE
        AndGate.h
        Gate.h
        InverterGate.h
        OrGate.h
        Utils.h
)

add_library(
        logic_elements
        STATIC
        AndGate.cpp
        InverterGate.cpp
        OrGate.cpp
        Wire.cpp
)

target_link_libraries(
        logic_elements
        PUBLIC
        logic_elements_headers
)