#include <algorithm>

#include <Wire.h>

Wire::Wire(const std::string& name)
    : m_left(),
    m_right(),
    m_state(0),
    m_name(name)
{

}

Wire::Wire(std::shared_ptr<Gate> left, std::vector<std::shared_ptr<Gate>> right, bool state, const std::string& name)
    : m_left(left),
    m_state(state),
    m_name(name)
{
    std::transform(right.begin(), right.end(), m_right.begin(),
                   [](const std::shared_ptr<Gate>& sp) -> std::weak_ptr<Gate> {
                       return std::weak_ptr<Gate>(sp);
    });
}

void Wire::SetLeftRight(std::shared_ptr<Gate> left, std::vector<std::shared_ptr<Gate>> right)
{
    m_left = left;
    m_right.clear();
    for (std::shared_ptr<Gate> gatePtr : right)
    {
        m_right.push_back(gatePtr);
    }
}

bool Wire::ChangeStateTo(bool state)
{
    if (state == m_state)
    {
        return false;
    }
    m_state = state;

    return true;
}
