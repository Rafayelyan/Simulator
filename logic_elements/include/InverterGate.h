#ifndef INVERTERGATE_H
#define INVERTERGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class InverterGate : public Gate
{
public:
    InverterGate(Wires, Wires, size_t, size_t);
    virtual ~InverterGate();

    bool Logic() override;
};

#endif