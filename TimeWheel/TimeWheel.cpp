#include "TimeWheel.h"

TimeWheel::TimeWheel()
        : m_currentTime(0)
{
}

std::vector<Event>::iterator TimeWheel::FindNextEvent()
{
    for (Event& event : m_timeWheel)
    {
        if (event.m_tStabile < m_currentTime)
        {
            event.ChangePhaseTo(Utils::Phase::Switched);
        }
    }

    auto minByTStartIt = std::min_element(m_timeWheel.begin(), m_timeWheel.end(), [](const Event& a, const Event& b) {
        if (a.m_phase == Utils::Phase::NotStarted && b.m_phase == Utils::Phase::NotStarted)
            return a.m_tStart < b.m_tStart;
        else
            return false;
    });

    return minByTStartIt;
}

void TimeWheel::PopEvent()
{
    std::vector<Event>::iterator eventIt = FindNextEvent();

    eventIt->m_wire->ChangeStateTo(eventIt->m_state);
    eventIt->ChangePhaseTo(Utils::Phase::StartedSwitching);
    if (!IsAnyDisturbingSignal(eventIt))
    {
        PlaceFanouts(eventIt->m_wire);
    }
}

bool TimeWheel::IsAnyDisturbingSignal(std::vector<Event>::iterator currentEvent)
{
    for (std::vector<Event>::iterator event = m_timeWheel.begin(); event < m_timeWheel.end(); ++event)
    {
        if (event->m_phase == Utils::Phase::Switched || currentEvent == event || currentEvent->m_wire != event->m_wire)
        {
            continue;
        }
        if (currentEvent->m_tStart < event->m_tStart)
        {
            currentEvent->ChangePhaseTo(Utils::Phase::Switched);
            event->ChangePhaseTo(Utils::Phase::Switched);
            return true; // delete for case d (?)
        }
        else if (currentEvent->m_tStart > event->m_tStart && currentEvent->m_tStart < event->m_tStabile)
        {
            // case c
        }
    }

    return false;
}

void TimeWheel::PushEvent(Event event)
{
    // needs some checks or not?

    m_timeWheel.push_back(event);
}

void TimeWheel::PlaceFanouts(std::shared_ptr<Wire> wire)
{
    if (!wire)
    {
        return;
    }

    for (std::shared_ptr<Gate> gate : wire->m_right)
    {
        bool output = gate->Logic();
        if (output != gate->m_outputs[0]->m_state)
        {
            for (std::shared_ptr<Wire> outputWire : gate->m_outputs)
            {
                PushEvent(Event(outputWire, m_currentTime + gate->m_deltaTStart, m_currentTime + gate->m_deltaTStabile, output, Utils::Phase::NotStarted));
            }
        }
    }
}