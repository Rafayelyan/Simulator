#ifndef GATE_H
#define GATE_H

#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class Gate
{
public:
    Gate(size_t tStart, size_t tStable) : m_tStart (tStart), m_tStabile(tStable) {}

    std::vector<Wire*>  m_inputs;
    std::vector<Wire*>  m_outputs;
    size_t              m_tStart;
    size_t              m_tStabile;
    bool                m_state;
    Utils::Phase        m_phase;

public:
    virtual bool Logic() = 0;
};

#endif