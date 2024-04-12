#ifndef EVENT_H
#define EVENT_H

#include <include/Gate.h>
#include <include/Wire.h>
#include <include/Utils.h>

#include <iostream>
#include <memory>

class Event
{
    using EventIt = std::vector<Event>::iterator;

public:
    Event(std::shared_ptr<Wire>, size_t, size_t, bool, Utils::Phase);
    Event(const Event&);
    Event& operator=(const Event&);
    bool operator==(const Event& other);

    Utils::SignalDisturbingCases::Value IsCase(EventIt event);
    bool ChangePhaseTo(Utils::Phase);
    void ReuseEvent(const Event&);
    void ResetEventAndInitTimeParams(std::shared_ptr<Wire>, size_t, size_t);

public:
    std::shared_ptr<Wire>   m_wire;
    size_t                  m_tStart;
    size_t                  m_tStabile;
    bool                    m_state;
    Utils::Phase            m_phase;
};

#endif