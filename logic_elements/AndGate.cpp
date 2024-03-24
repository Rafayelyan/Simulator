#include "AndGate.h"

AndGate::AndGate(size_t tStart, size_t tStable) : Gate(tStart, tStable)
{
}

AndGate::~AndGate()
{

}

bool AndGate::Logic()
{
    bool output = m_inputs[0]->state && m_inputs[1]->state;

    return output;
}