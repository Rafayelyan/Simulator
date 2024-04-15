#include <NandGate.h>

NandGate::NandGate(Wires inputs, Wires outputs, size_t deltaTStart, size_t deltaTStable) : Gate(inputs, outputs, deltaTStart, deltaTStable)
{
}

NandGate::~NandGate()
{
}

bool NandGate::Logic()
{
    for (auto& input : m_inputs) {
        if (!input->m_state) {
            return true;
        }
    }
    return false;
}