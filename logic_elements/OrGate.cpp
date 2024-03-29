#include "OrGate.h"

OrGate::OrGate(size_t tStart, size_t tStable) : Gate(tStart, tStable)
{
}

OrGate::~OrGate()
{

}

bool OrGate::Logic()
{
    bool output = m_inputs[0]->m_state || m_inputs[1]->m_state;

    return output;
}