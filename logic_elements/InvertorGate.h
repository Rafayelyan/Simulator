#ifndef INVERTORGATE_H
#define INVERTORGATE_H

#include "Gate.h"
#include "Wire.h"
#include "Utils.h"

#include <iostream>
#include <vector>

class InvertorGate : public Gate
{
public:
    InvertorGate(size_t tStart, size_t tStabile);
    ~InvertorGate();

    bool Logic() override;
};

#endif