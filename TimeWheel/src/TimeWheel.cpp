#include <include/TimeWheel.h>

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

    std::vector<Event>::iterator minTStartIt = m_timeWheel.end();
    size_t minTStart = 0;
    for (std::vector<Event>::iterator eventIt = m_timeWheel.begin(); eventIt < m_timeWheel.end(); ++eventIt)
    {
        if (eventIt->m_phase == Utils::Phase::NotStarted)
        {
            minTStart = eventIt->m_tStart;
            minTStartIt = eventIt;
            break;
        }
    }
    for (std::vector<Event>::iterator eventIt = m_timeWheel.begin(); eventIt < m_timeWheel.end(); ++eventIt)
    {
        if (eventIt->m_phase == Utils::Phase::NotStarted && eventIt->m_tStart < minTStart)
        {
            minTStart = eventIt->m_tStart;
            minTStartIt = eventIt;
        }
    }

    return minTStartIt;
}

void TimeWheel::PopEvent()
{
    std::vector<Event>::iterator eventIt = FindNextEvent();

    eventIt->m_wire->ChangeStateTo(eventIt->m_state);
    m_currentTime = eventIt->m_tStart;
    // print the state in the output
    std::cout<<"wire : "<<eventIt->m_wire->m_name<<", "<<eventIt->m_tStart<<", "<<eventIt->m_state<<std::endl;

    eventIt->ChangePhaseTo(Utils::Phase::StartedSwitching);
    if (!IsAnyDisturbingSignal(eventIt))
    {
        PlaceFanouts(eventIt->m_wire);
        //eventIt->ChangePhaseTo(Utils::Phase::StartedSwitching);
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
        if (currentEvent->IsCase(event) == Utils::SignalDisturbingCases::Value::B)
        {
            HandleCaseB(currentEvent, event);
        }
        else if (currentEvent->IsCase(event) == Utils::SignalDisturbingCases::Value::C)
        {
            auto currentEventsRightGate = currentEvent->m_wire->m_right[0].lock();
            auto secondEventsRightGate = currentEvent->m_wire->m_right[0].lock();

            if (!currentEventsRightGate || !secondEventsRightGate)
            {
                static_assert("right gate is invalid");
                return false; // ?
            }

            size_t newTStartForCurrentEvent = currentEvent->m_tStart + currentEventsRightGate->m_deltaTStabile;
            size_t newTStartForSecondEvent = event->m_tStart + (event->m_tStart - newTStartForCurrentEvent) / 2;

            if (currentEventsRightGate)
            {
                currentEvent->ResetEventAndInitTimeParams(currentEventsRightGate->m_outputs[0], newTStartForCurrentEvent, newTStartForCurrentEvent);
            }
            if (secondEventsRightGate)
            {
                event->ResetEventAndInitTimeParams(secondEventsRightGate->m_outputs[0], newTStartForSecondEvent, newTStartForSecondEvent);
            }
        }
    }

    return false;
}

void TimeWheel::PushEvent(Event newEvent)
{
    for (Event& event : m_timeWheel)
    {
        if (event.m_phase == Utils::Phase::Switched)
        {
            event.ReuseEvent(newEvent);
            return ;
        }
    }

    m_timeWheel.push_back(newEvent);
}

void TimeWheel::PlaceFanouts(std::shared_ptr<Wire> wire)
{
    if (!wire)
    {
        return;
    }

    for (std::weak_ptr<Gate> gatePtr : wire->m_right)
    {
        auto gate = gatePtr.lock();
        if (!gate)
        {
            continue;
        }
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

void TimeWheel::HandleCaseC(TimeWheel::EventIt, TimeWheel::EventIt)
{

}

void TimeWheel::HandleCaseB(TimeWheel::EventIt currentEvent, TimeWheel::EventIt event) {
    currentEvent->ChangePhaseTo(Utils::Phase::Switched);
    event->ChangePhaseTo(Utils::Phase::Switched);
}

void TimeWheel::StartSimulation()
{
    while (FindNextEvent() != m_timeWheel.end())
    {
        PopEvent();
    }
}
