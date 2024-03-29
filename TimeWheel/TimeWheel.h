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
    bool IsAnyDisturbingSignal(std::vector<Event>::iterator currentEvent);
    void PushEvent(Event);
    void PlaceFanouts(std::shared_ptr<Wire>);

public:
    std::vector<Event>  m_timeWheel;
    size_t              m_currentTime;
};

#endif