#include <iostream>
#include <vector>


#include "lib/parser-verilog/verilog_driver.hpp"
#include "lib/parser-verilog/verilog_data.hpp"

struct CircuitParser : public verilog::ParserVerilogInterface
{
    virtual ~CircuitParser(){}

    void add_module(std::string&&);
    void add_port(verilog::Port&&);
    void add_net(verilog::Net&&);
    void add_assignment(verilog::Assignment&&);
    void add_instance(verilog::Instance&&);

    void GetGateData();
    void ConstructCircuit();

    std::vector<verilog::Port> ports;
    std::vector<verilog::Net> nets;
    std::vector<verilog::Assignment> assignments;
    std::vector<verilog::Instance> insts;
};
