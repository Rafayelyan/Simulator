#include <include/Event.h>
#include <cassert>

Event::Event(std::shared_ptr<Wire> wire, size_t tStart, size_t tStabile, bool state, Utils::Phase phase)
:   m_wire(wire),
    m_tStart(tStart),
    m_tStabile(tStabile),
    m_state(state),
    m_phase(phase)
{

}

Event::Event(const Event &other)
{
    m_wire = other.m_wire;
    m_tStart = other.m_tStart;
    m_tStabile = other.m_tStabile;
    m_state = other.m_state;
    m_phase = other.m_phase;
}

Event &Event::operator=(const Event& other)
{
    if (this == &other)
    {
        return *this;
    }
    m_wire = other.m_wire;
    m_tStart = other.m_tStart;
    m_tStabile = other.m_tStabile;
    m_state = other.m_state;
    m_phase = other.m_phase;

    return *this;
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

void Event::ReuseEvent(const Event &event)
{
    *this = event;
}

void Event::ResetEventAndInitTimeParams(std::shared_ptr<Wire> wirePtr, size_t tStart, size_t tStabile)
{
    ChangePhaseTo(Utils::Phase::NotStarted);
    m_wire = std::move(wirePtr);
    m_tStart = tStart;
    m_tStabile = tStabile;
}

Utils::SignalDisturbingCases::Value Event::IsCase(Event::EventIt event)
{
    assert(m_wire == event->m_wire);

    Utils::SignalDisturbingCases::Value caseType = Utils::SignalDisturbingCases::Value::Undefined;
    std::shared_ptr<Gate> gate = m_wire->m_left.lock();
    if (!gate)
    {
        return Utils::SignalDisturbingCases::Value::Undefined;
    }
    size_t deltaTStart = gate->m_deltaTStart;

    //if (m_tStart < event->m_tStart && m_state != event->m_state)
    if (m_tStart - event->m_tStart < deltaTStart && m_state != event->m_state)
    {
        caseType =  Utils::SignalDisturbingCases::Value::B;
    }
    else if (m_tStart > event->m_tStart && m_tStart < event->m_tStabile && m_state != event->m_state)
    {
        caseType = Utils::SignalDisturbingCases::Value::C;
    }

    return caseType;
}

