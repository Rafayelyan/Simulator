#ifndef ORGATE_H
#define ORGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class OrGate : public Gate
{
public:
    OrGate(Wires, Wires, size_t, size_t);
    virtual ~OrGate();

    bool Logic() override;
};

#endif