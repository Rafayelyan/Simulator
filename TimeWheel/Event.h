#ifndef EVENT_H
#define EVENT_H

#include "../logic_elements/Gate.h"
#include "../logic_elements/Wire.h"
#include "../logic_elements/Utils.h"

#include <iostream>
#include <memory>

class Event
{
public:
    Event(std::shared_ptr<Wire>, size_t, size_t, bool, Utils::Phase);

    bool ChangePhaseTo(Utils::Phase);
    bool ChangeStateTo(bool);

public:
    std::shared_ptr<Wire>   m_wire;
    size_t                  m_tStart;
    size_t                  m_tStabile;
    bool                    m_state;
    Utils::Phase            m_phase;
};

#endif