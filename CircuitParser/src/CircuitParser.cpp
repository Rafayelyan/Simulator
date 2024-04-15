#include <variant>

#include "CircuitParser.h"


CircuitParser::CircuitParser()
{
}

void CircuitParser::add_module(std::string&& module)
{
    std::cout<<module<<std::endl;
}

void CircuitParser::add_port(verilog::Port&& port)
{
    m_ports.push_back(port);
}

void CircuitParser::add_net(verilog::Net&& net)
{
    m_nets.push_back(net);
}

void CircuitParser::add_assignment(verilog::Assignment&& assignment)
{
    m_assignments.push_back(assignment);
}
void CircuitParser::add_instance(verilog::Instance&& instance)
{
    m_instances.push_back(instance);
}

void CircuitParser::InitializeCircuit(const std::vector<bool>& inputStates)
{
    InitializeWires();
    InitializeCircuitInputOutput();
    InitializeGates();

    InitInputWireStates(inputStates);
    SolveCircuit();
}

void CircuitParser::InitializeWires()
{
    auto AddWire = [](Wires& wires, const std::string& name) {
        if (wires.find(name) == wires.end())
        {
            wires[name] = std::make_shared<Wire>(name);
        }
        else
        {
            assert(false && "Can't get net name more then once");
        }
    };

    for (auto& port : m_ports)
    {
        for (const std::string& name : port.names)
        {
            AddWire(m_portObjets, name);
        }
    }
    for (auto& net : m_nets)
    {
        for (const std::string& name : net.names)
        {
            AddWire(m_netObjects, name);
        }
    }
}

std::shared_ptr<Wire> CircuitParser::GetWireByName(const std::string& name)
{
    if (m_netObjects.find(name) != m_netObjects.end())
    {
        return m_netObjects[name];
    }
    else if (m_portObjets.find(name) != m_portObjets.end())
    {
        return m_portObjets[name];
    }
    else
    {
        assert(false && "In the Parsing process wires not parset fully");
    }

    return std::shared_ptr<Wire>();
}

std::shared_ptr<Gate> CircuitParser::GetGateByTypeName(const std::string& typeName, std::vector<std::shared_ptr<Wire>>& inputs, std::shared_ptr<Wire> output)
{
    size_t deltaTStart = 2;
    size_t deltaTStabile = 3;

    if (typeName == "and")
    {
        m_gates.push_back(std::make_shared<AndGate>(inputs, std::vector<std::shared_ptr<Wire>>{output}, deltaTStart, deltaTStabile));
    }
    else if (typeName == "or")
    {
        m_gates.push_back(std::make_shared<OrGate>(inputs, std::vector<std::shared_ptr<Wire>>{output}, deltaTStart, deltaTStabile));
    }
    else if (typeName == "not")
    {
        m_gates.push_back(std::make_shared<InverterGate>(inputs, std::vector<std::shared_ptr<Wire>>{output}, deltaTStart, deltaTStabile));
    }
    else if (typeName == "xor")
    {
        m_gates.push_back(std::make_shared<XorGate>(inputs, std::vector<std::shared_ptr<Wire>>{output}, deltaTStart, deltaTStabile));
    }
    else if (typeName == "nand")
    {
        m_gates.push_back(std::make_shared<NandGate>(inputs, std::vector<std::shared_ptr<Wire>>{output}, deltaTStart, deltaTStabile));
    }
    else if (typeName == "nor")
    {
        m_gates.push_back(std::make_shared<NorGate>(inputs, std::vector<std::shared_ptr<Wire>>{output}, deltaTStart, deltaTStabile));
    }
    else
    {
        assert(false && "Not implemented type");
    }

    return m_gates.back();
}

void CircuitParser::InitializeGates()
{
    for (auto& instance : m_instances)
    {
        std::vector<std::shared_ptr<Wire>> inputs;
        std::shared_ptr<Wire> output;

        assert(!instance.net_names.empty());
        auto netNamesVectorIt = instance.net_names.begin();

        for (auto& netNameIt : *netNamesVectorIt)
        {
            if (std::holds_alternative<std::string>(netNameIt))
            {
                output = GetWireByName(std::get<std::string>(netNameIt));
            }
        }
        netNamesVectorIt++;
        for (; netNamesVectorIt < instance.net_names.end(); ++netNamesVectorIt)
        {
            for (auto& netNameIt : *netNamesVectorIt)
            {
                if (std::holds_alternative<std::string>(netNameIt))
                {
                    inputs.push_back(GetWireByName(std::get<std::string>(netNameIt)));
                }
            }
        }
        std::shared_ptr<Gate> gate = GetGateByTypeName(instance.module_name, inputs, output);
        for (auto& input : inputs)
        {
            input->m_right = std::vector<std::weak_ptr<Gate>>{gate};
        }
        output->m_left = gate;
    }
}

void CircuitParser::InitInputWireStates(const std::vector<bool>& states)
{
    auto GetWire = [](Wires& wires, const std::string& name) {
        if (wires.find(name) != wires.end())
        {
            return wires[name];
        }
        else
        {
            assert(false && "Can't get net name more then once");
        }
    };
    size_t index = 0;

    for (auto it = m_ports.begin(); it < m_ports.end(); ++it)
    {
        if (it->dir == verilog::PortDirection::INPUT)
        {
             GetWire(m_portObjets, it->names[0])->m_state = states[index];
             ++index;
        }
    }
}

void CircuitParser::InitializeCircuitInputOutput()
{
    auto GetWire = [](Wires& wires, const std::string& name) {
        if (wires.find(name) != wires.end())
        {
            return wires[name];
        }
        else
        {
            assert(false && "Can't get net name more then once");
        }
    };

    for (auto it = m_ports.begin(); it < m_ports.end(); ++it)
    {
        if (it->dir == verilog::PortDirection::INPUT)
        {
            m_inputs.push_back(GetWire(m_portObjets, it->names[0]));
        }
        else if (it->dir == verilog::PortDirection::OUTPUT)
        {
            m_outputs.push_back(GetWire(m_portObjets, it->names[0]));
        }
    }
}

std::vector<std::shared_ptr<Wire>> CircuitParser::GetCircuitInputs()
{
    return m_inputs;
}

std::vector<std::shared_ptr<Wire>> CircuitParser::GetCircuitOutputs()
{
    return m_outputs;
}

void CircuitParser::SolveCircuit()
{
    for (std::shared_ptr<Wire> input : GetCircuitInputs())
    {
        if (!input->m_right.empty())
        {
            auto right = input->m_right[0].lock();
            if (!right)
            {
                continue;
            }
            do
            {
                right->m_outputs[0]->m_state = right->Logic();
                right = right->m_outputs[0]->m_right[0].lock();
            }
            while (right->m_outputs[0] != GetCircuitOutputs()[0]);
        }
    }
}

