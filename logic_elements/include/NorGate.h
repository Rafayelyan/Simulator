#ifndef NORGATE_H
#define NORGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class NorGate : public Gate
{
public:
    NorGate(Wires inputs, Wires outputs, size_t deltaTStart, size_t deltaTStable);
    virtual ~NorGate();

    bool Logic() override;
};

#endif
