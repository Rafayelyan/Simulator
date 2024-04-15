#ifndef NANDGATE_H
#define NANDGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class NandGate : public Gate
{
public:
    NandGate(Wires, Wires, size_t, size_t);
    virtual ~NandGate();

    bool Logic() override;
};

#endif