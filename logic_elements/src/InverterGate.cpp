#include <InverterGate.h>

InverterGate::InverterGate(Wires inputs, Wires outputs, size_t deltaTStart, size_t deltaTStable) : Gate(inputs, outputs, deltaTStart, deltaTStable)
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