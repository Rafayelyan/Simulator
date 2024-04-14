#include "CircuitParser.h"

void CircuitParser::add_module(std::string&& s)
{
    std::cout<<s<<std::endl;
}

void CircuitParser::add_port(verilog::Port&& p)
{
    std::cout<<p<<std::endl;
}

void CircuitParser::add_net(verilog::Net&& n)
{
    std::cout<<n<<std::endl;
}

void CircuitParser::add_assignment(verilog::Assignment&& a)
{
    std::cout<<a<<std::endl;
}
void CircuitParser::add_instance(verilog::Instance&& i)
{
    std::cout<<i<<std::endl;
}

void CircuitParser::GetGateData()
{

}

void CircuitParser::ConstructCircuit()
{

}

