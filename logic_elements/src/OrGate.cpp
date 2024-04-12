#include <OrGate.h>

OrGate::OrGate(Wires inputs, Wires outputs, size_t deltaTStart, size_t deltaTStable) : Gate(inputs, outputs, deltaTStart, deltaTStable)
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