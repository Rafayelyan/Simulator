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
    InverterGate(size_t tStart, size_t tStabile);
    ~InverterGate();

    bool Logic() override;
};

#endif