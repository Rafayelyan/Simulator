#ifndef CIRCUITREADER_H
#define CIRCUITREADER_H

#include <include/Wire.h>
#include <include/TimeWheel.h>
#include <include/Event.h>

#include <vector>
#include <memory>

class CircuitReader
{
    using testBenchUnitType = std::pair<size_t, bool>;
public:
    CircuitReader(std::vector<std::shared_ptr<Wire>>, std::vector<std::vector<testBenchUnitType>>);

    void CheckForChanges();

private:
    std::vector<std::shared_ptr<Wire>>          m_inputs;
    std::vector<std::vector<testBenchUnitType>> m_testBench;
    TimeWheel                                   m_timeWheel;
};


#endif
