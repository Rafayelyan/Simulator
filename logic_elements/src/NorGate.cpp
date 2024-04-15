#include <NorGate.h>

NorGate::NorGate(Wires inputs, Wires outputs, size_t deltaTStart, size_t deltaTStable)
        : Gate(inputs, outputs, deltaTStart, deltaTStable)
{
}

NorGate::~NorGate()
{
    // Cleanup if necessary
}

bool NorGate::Logic()
{
    bool output = !(m_inputs[0]->m_state || m_inputs[1]->m_state); // NOR logic: NOT (input1 OR input2)

    return output;
}
