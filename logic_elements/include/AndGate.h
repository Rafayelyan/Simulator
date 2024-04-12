#ifndef ANDGATE_H
#define ANDGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class AndGate : public Gate
{
public:
    AndGate(Wires, Wires, size_t, size_t);
    virtual ~AndGate();

    bool Logic() override;
};

#endif