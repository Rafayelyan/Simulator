#ifndef XORGATE_H
#define XORGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class XorGate : public Gate
{
public:
    XorGate(Wires, Wires, size_t, size_t);
    virtual ~XorGate();

    bool Logic() override;
};

#endif