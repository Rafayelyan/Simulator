#include "CircuitReader.h"

CircuitReader::CircuitReader(std::vector<std::shared_ptr<Wire>> inputs, std::vector<std::vector<testBenchUnitType>> testBench)
    : m_inputs(inputs),
    m_testBench(testBench)
{
    CheckForChanges();
    m_timeWheel.StartSimulation();
}

void CircuitReader::CheckForChanges()
{
    for (size_t inputIter = 0; inputIter < m_inputs.size(); ++inputIter)
    {
        for (size_t testBenchIter = 0; testBenchIter < m_testBench[inputIter].size(); ++testBenchIter)
        {
            if (testBenchIter == 0 && m_inputs[inputIter]->m_state == m_testBench[inputIter][testBenchIter].second)
            {
                continue;
            }
            size_t tStart = m_testBench[inputIter][testBenchIter].first;
            size_t state = m_testBench[inputIter][testBenchIter].second;

            m_timeWheel.PushEvent(Event(m_inputs[inputIter], tStart, tStart, state, Utils::Phase::NotStarted));
        }
    }
}
