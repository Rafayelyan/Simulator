#ifndef TIMEWHEEL_H
#define TIMEWHEEL_H

#include <include/Gate.h>
#include <include/Wire.h>
#include <include/Event.h>

#include <iostream>
#include <vector>

class TimeWheel
{
    using EventIt = std::vector<Event>::iterator;
public:
    TimeWheel();

    void StartSimulation();
    std::vector<Event>::iterator FindNextEvent();
    void PopEvent();
    void PushEvent(Event);
    bool IsAnyDisturbingSignal(EventIt);
    void PlaceFanouts(std::shared_ptr<Wire>);
    void HandleCaseB(EventIt, EventIt);
    void HandleCaseC(EventIt, EventIt);

public:
    std::vector<Event>  m_timeWheel;
    size_t              m_currentTime;
};

#endif