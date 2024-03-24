add_library(
        TimeWheelHeaders
        INTERFACE
        TimeWheel.h
        Event.h
)

add_library(
        TimeWheel
        STATIC
        TimeWheel.cpp
        Event.cpp
)

target_link_libraries(
        TimeWheel
        PUBLIC
        TimeWheelHeaders
)