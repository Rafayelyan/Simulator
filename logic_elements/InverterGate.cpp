#include "InverterGate.h"

InverterGate::InverterGate(size_t tStart, size_t tStable) : Gate(tStart, tStable)
{
}

InverterGate::~InverterGate()
{

}

bool InverterGate::Logic()
{
    bool output = !(m_inputs[0]->m_state);

    return output;
}