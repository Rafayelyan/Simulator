#ifndef TIMEWHEEL_H
#define TIMEWHEEL_H

#include "../logic_elements/Gate.h"
#include "../logic_elements/Wire.h"
#include "Event.h"

#include <iostream>
#include <vector>

class TimeWheel
{
public:
    TimeWheel();

    std::vector<Event>::iterator FindNextEvent();
    void PopEvent();
    void PushEvent(Event);

public:
    std::vector<Event>  m_timeWheel;
    size_t              m_currentTime;
};

#endif