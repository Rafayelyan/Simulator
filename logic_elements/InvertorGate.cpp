#include "InvertorGate.h"

InvertorGate::InvertorGate(size_t tStart, size_t tStable) : Gate(tStart, tStable)
{
}

InvertorGate::~InvertorGate()
{

}

bool InvertorGate::Logic()
{
    bool output = !(m_inputs[0]->state);

    return output;
}