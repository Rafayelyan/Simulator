#include "Event.h"

Event::Event(std::shared_ptr<Wire> wire, size_t tStart, size_t tStabile, bool state, Utils::Phase phase)
:   m_wire(wire),
    m_tStart(tStart),
    m_tStabile(tStabile),
    m_state(state),
    m_phase(phase)
{

}

bool Event::operator==(const Event &other)
{
    bool res =  m_wire == other.m_wire &&
                m_tStart == other.m_tStart &&
                m_tStabile == other.m_tStabile &&
                m_state == other.m_tStart &&
                m_phase == other.m_phase;
    return res;
}

bool Event::ChangePhaseTo(Utils::Phase phase)
{
    if (phase == m_phase)
    {
        return false;
    }
    m_phase = phase;

    return true;
}


