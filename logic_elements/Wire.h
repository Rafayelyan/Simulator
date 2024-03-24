#ifndef WIRE_H
#define WIRE_H

#include "Gate.h"

#include <vector>

class Gate;

class Wire
{
public:
        Gate*               m_left;
        std::vector<Gate*>  m_right;
        bool                state;
};

#endif