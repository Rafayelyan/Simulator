#ifndef GATE_H
#define GATE_H

#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class Gate
{
protected:
    using Wires = std::vector<std::shared_ptr<Wire>>;

public:
    Gate(Wires inputs, Wires outputs, size_t deltaTStart, size_t deltaTStabile)
    :   m_inputs(inputs),
        m_outputs(outputs),
        m_deltaTStart (deltaTStart),
        m_deltaTStabile(deltaTStabile) {}

    ~Gate() {}

    std::vector<std::shared_ptr<Wire>>  m_inputs;
    std::vector<std::shared_ptr<Wire>>  m_outputs;
    size_t                              m_deltaTStart;
    size_t                              m_deltaTStabile;

public:
    virtual bool Logic() = 0;
};

#endif