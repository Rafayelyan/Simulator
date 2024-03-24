add_library(
        logic_elements_headers
        INTERFACE
        AndGate.h
        Gate.h
        InvertorGate.h
        OrGate.h
        Utils.h
)

add_library(
        logic_elements
        STATIC
        AndGate.cpp
        InvertorGate.cpp
        OrGate.cpp
)

target_link_libraries(
        logic_elements
        PUBLIC
        logic_elements_headers
)