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
    AndGate(size_t tStart, size_t tStabile);
    ~AndGate();

    bool Logic() override;
};

#endif