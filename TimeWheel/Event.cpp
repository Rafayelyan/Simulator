#include "Event.h"

Event::Event(std::shared_ptr<Wire> wire, size_t tStart, size_t tStabile, bool state, Utils::Phase phase)
:   m_wire(wire),
    m_tStart(tStart),
    m_tStabile(tStabile),
    m_state(state),
    m_phase(phase)
{

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

bool Event::ChangeStateTo(bool state)
{
    if (state == m_state)
    {
        return false;
    }
    m_state = state;

    return true;
}

