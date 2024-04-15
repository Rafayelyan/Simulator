#include <AndGate.h>
#include <NandGate.h>
#include <OrGate.h>
#include <XorGate.h>
#include <InverterGate.h>
#include <CircuitReader.h>

#include <CircuitParser.h>

#include <optional>
#include <memory>
#include <fstream>
#include <sstream>
#include <string>
#include <utility>

#include <optional>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <unordered_map>

class TestbenchManager {
public:
    using TestVector = std::vector<std::pair<size_t, bool>>;
    using Testbench = std::vector<TestVector>;
    using InitialStates = std::vector<bool>;

    std::optional<std::string> loadTestbench(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) {
            return "Failed to open file: " + filename;
        }

        std::string line;
        bool firstNonCommentLine = true;

        while (std::getline(file, line)) {
            std::istringstream iss(line);
            if (line.empty() || line[0] == '#') {
                continue;  // Ignore empty lines and comments
            }

            if (firstNonCommentLine) {  // Assume first valid line might be initial states if not labeled
                bool state;
                if (!(iss >> state)) {  // Attempt to parse it as a bool to check if it's likely a state
                    return "Expected initial states or test sequences, found none in " + filename;
                }
                iss.seekg(0);  // Reset stream position to start to parse correctly
                InitialStates tempStates;
                while (iss >> state) {
                    tempStates.push_back(state);
                }
                if (tempStates.size() <= 1) {  // More likely a test sequence if only one value
                    testbench.push_back({{0, tempStates.front()}});  // Treat as a test sequence
                } else {
                    initialStates = tempStates;  // Accept as initial states
                }
                firstNonCommentLine = false;
                continue;
            }

            // Parse regular test sequences
            TestVector testVector;
            size_t time;
            bool state;  // Declare 'state' within this scope for test sequence reading
            while (iss >> time >> state) {
                testVector.emplace_back(time, state);
            }
            if (!testVector.empty()) {
                testbench.push_back(testVector);
            }
        }

        if (testbench.empty() && initialStates.empty()) {
            return "No valid data found in " + filename;
        }

        return std::nullopt;  // No errors, successful load
    }

    const Testbench& getTestbench() const {
        return testbench;
    }

    const InitialStates& getInitialStates() const {
        return initialStates;
    }

private:
    Testbench testbench;
    InitialStates initialStates;
};





int main(const int argc, const char **argv) {
    if (argc < 3) {
        std::cerr << "Usage: ./sample_parser verilog_file testbench_file\n";
        return EXIT_FAILURE;
    }

    if (!std::filesystem::exists(argv[1]) || !std::filesystem::exists(argv[2])) {
        std::cerr << "Error: File(s) not found.\n";
        return EXIT_FAILURE;
    }

    CircuitParser parser;
    parser.read(argv[1]);

    TestbenchManager testbenchManager;
    auto error = testbenchManager.loadTestbench(argv[2]);
    if (error)
    {
        std::cout<<*error<<std::endl;
        return EXIT_FAILURE;
    }

    auto& initialStates = testbenchManager.getInitialStates();
    auto& testBench = testbenchManager.getTestbench();

    parser.InitializeCircuit(initialStates);

    CircuitReader circuitReader(parser.GetCircuitInputs(), testBench);

    return EXIT_SUCCESS;
}















int createCircuit()
{
    size_t deltaTStart = 2;
    size_t deltaTStabile = 3;

    std::shared_ptr<Wire> a = std::make_shared<Wire>("a");
    std::shared_ptr<Wire> b = std::make_shared<Wire>("b");
    std::shared_ptr<Wire> c = std::make_shared<Wire>("c");

    std::shared_ptr<Wire> d = std::make_shared<Wire>("d");
    std::shared_ptr<Wire> e = std::make_shared<Wire>("e");
    std::shared_ptr<Wire> f = std::make_shared<Wire>("f");

    std::vector<std::shared_ptr<Wire>> inputs = {a, b};
    std::vector<std::shared_ptr<Wire>> outputs = {d};

    std::shared_ptr<Gate> and1 = std::make_shared<AndGate>(inputs, outputs, deltaTStart, deltaTStabile);
    inputs.clear(); inputs.push_back(c);
    outputs.clear(); outputs.push_back(e);
    std::shared_ptr<Gate> invertor1 = std::make_shared<InverterGate>(inputs, outputs, deltaTStart, deltaTStabile);
    inputs.clear(); inputs.push_back(d); inputs.push_back(e);
    outputs.clear(); outputs.push_back(f);
    std::shared_ptr<Gate> or1 = std::make_shared<OrGate>(inputs, outputs, deltaTStart, deltaTStabile);

    a->SetLeftRight({}, {and1});
    b->SetLeftRight({}, {and1});
    c->SetLeftRight({}, {invertor1});

    d->SetLeftRight(and1, {or1});
    e->SetLeftRight(invertor1, {or1});
    f->SetLeftRight(or1, {});

    a->m_state = 0;
    b->m_state = 1;
    c->m_state = 0;

    d->m_state = 0;
    e->m_state = 1;
    f->m_state = 1;

    inputs.clear(); inputs.push_back(a); inputs.push_back(b); inputs.push_back(c);
    std::vector<std::vector<std::pair<size_t, bool>>> testBench;
    testBench.push_back({{0,0}, {3, 1}, {7, 0}, {8, 1}, {11, 0}, {13, 1}, {14, 0}, {15, 1}
                        });
    testBench.push_back({{0,1}, {7, 0}, {9, 1}
                        });
    testBench.push_back({{0,0}, {5, 1}, {9, 0}, {15, 1}
                        });

    CircuitReader circuitReader(inputs, testBench);


    return 0;
}

int last_main(const int argc, const char **argv){
    if(argc < 2) {
        std::cerr << "Usage: ./sample_parser verilog_file\n";
        return EXIT_FAILURE;
    }

    if(std::filesystem::exists(argv[1])) {
        CircuitParser parser;
        parser.read(argv[1]);

        std::vector<bool> inputStates{0, 1, 0};
        parser.InitializeCircuit(inputStates);

        parser.GetWireByName("d")->m_state = 0;
        parser.GetWireByName("e")->m_state = 1;
        parser.GetWireByName("f")->m_state = 1;

        std::vector<std::vector<std::pair<size_t, bool>>> testBench;
        testBench.push_back({{0,0}, {3, 1}, {7, 0}, {8, 1}, {11, 0}, {13, 1}, {14, 0}, {15, 1}
                            });
        testBench.push_back({{0,1}, {7, 0}, {9, 1}
                            });
        testBench.push_back({{0,0}, {5, 1}, {9, 0}, {15, 1}
                            });

        CircuitReader circuitReader(parser.GetCircuitInputs(), testBench);
    }
    return EXIT_SUCCESS;
}