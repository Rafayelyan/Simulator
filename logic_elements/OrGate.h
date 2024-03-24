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
    OrGate(size_t tStart, size_t tStabile);
    ~OrGate();

    bool Logic() override;
};

#endif