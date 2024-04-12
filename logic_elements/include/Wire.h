#ifndef WIRE_H
#define WIRE_H

#include <vector>
#include <memory>
#include <string>

class Gate;

class Wire
{
public:
    Wire(const std::string&);
    Wire(std::shared_ptr<Gate>, std::vector<std::shared_ptr<Gate>>, bool, const std::string&);

    void SetLeftRight(std::shared_ptr<Gate>, std::vector<std::shared_ptr<Gate>>);
    bool ChangeStateTo(bool state);

public:
    std::weak_ptr<Gate>                 m_left;
    std::vector<std::weak_ptr<Gate>>    m_right;
    bool                                m_state;
    std::string                         m_name;
};

#endif