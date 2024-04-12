add_library(
        TimeWheelHeaders
        INTERFACE
        include/TimeWheel.h
        include/Event.h
        include/CircuitReader.h
)

target_include_directories(
        TimeWheelHeaders
        INTERFACE
        include/
)

add_library(
        TimeWheel
        STATIC
        src/TimeWheel.cpp
        src/Event.cpp
        src/TimeWheel.cpp
        src/CircuitReader.cpp
)

target_link_libraries(
        TimeWheel
        PUBLIC
        TimeWheelHeaders
)

target_link_libraries(
        TimeWheelHeaders
        INTERFACE
)