#include "Wire.h"

Wire::Wire(std::shared_ptr<Gate> left, std::vector<std::shared_ptr<Gate>> right, bool state)
    : m_left(left),
    m_right(right),
    m_state(state)
{

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