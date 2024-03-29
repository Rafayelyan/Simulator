#ifndef WIRE_H
#define WIRE_H

#include <vector>
#include <memory>

class Gate;

class Wire
{
public:
    Wire(std::shared_ptr<Gate>, std::vector<std::shared_ptr<Gate>>, bool);

    //bool operator==(const Wire& other);
    bool ChangeStateTo(bool state);

public:
    std::shared_ptr<Gate>               m_left;
    std::vector<std::shared_ptr<Gate>>  m_right;
    bool                                m_state;
};

#endif