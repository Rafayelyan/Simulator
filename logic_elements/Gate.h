#ifndef GATE_H
#define GATE_H

#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class Gate
{
public:
    Gate(size_t deltaTStart, size_t deltaTStabile) : m_deltaTStart (deltaTStart), m_deltaTStabile(deltaTStabile) {}

    std::vector<std::shared_ptr<Wire>>  m_inputs;
    std::vector<std::shared_ptr<Wire>>  m_outputs;
    size_t                              m_tStart;
    size_t                              m_tStabile;
    bool                                m_state;
    Utils::Phase                        m_phase;
    size_t                              m_deltaTStart;
    size_t                              m_deltaTStabile;

public:
    virtual bool Logic() = 0;
};

#endif