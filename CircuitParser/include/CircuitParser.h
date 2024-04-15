#include <iostream>
#include <vector>
#include <unordered_map>

#include <include/Wire.h>
#include <include/AndGate.h>
#include <include/OrGate.h>
#include <include/InverterGate.h>
#include <include/CircuitReader.h>
#include <include/NandGate.h>
#include <include/XorGate.h>
#include <include/NorGate.h>

#include "lib/parser-verilog/verilog_driver.hpp"
#include "lib/parser-verilog/verilog_data.hpp"

struct CircuitParser : public verilog::ParserVerilogInterface
{
    using Wires = std::unordered_map<std::string, std::shared_ptr<Wire>>;

    CircuitParser();
    virtual ~CircuitParser(){}

    void add_module(std::string&&);
    void add_port(verilog::Port&&);
    void add_net(verilog::Net&&);
    void add_assignment(verilog::Assignment&&);
    void add_instance(verilog::Instance&&);

    std::shared_ptr<Wire> GetWireByName(const std::string&);
    std::shared_ptr<Gate> GetGateByTypeName(const std::string&, std::vector<std::shared_ptr<Wire>>&, std::shared_ptr<Wire>);
    std::vector<std::shared_ptr<Wire>> GetCircuitInputs();
    std::vector<std::shared_ptr<Wire>> GetCircuitOutputs();

    void InitializeWires();
    void InitializeGates();
    void InitializeCircuit(const std::vector<bool>&);
    void InitInputWireStates(const std::vector<bool>&);
    void InitializeCircuitInputOutput();
    void SolveCircuit();

    std::vector<verilog::Port>          m_ports;
    std::vector<verilog::Net>           m_nets;
    std::vector<verilog::Assignment>    m_assignments;
    std::vector<verilog::Instance>      m_instances;

    Wires                               m_netObjects;
    Wires                               m_portObjets;
    std::vector<std::shared_ptr<Wire>>  m_inputs;
    std::vector<std::shared_ptr<Wire>>  m_outputs;
    std::vector<std::shared_ptr<Gate>>  m_gates;
};
