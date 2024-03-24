#include "OrGate.h"

OrGate::OrGate(size_t tStart, size_t tStable) : Gate(tStart, tStable)
{
}

OrGate::~OrGate()
{

}

bool OrGate::Logic()
{
    bool output = m_inputs[0]->state || m_inputs[1]->state;

    return output;
}