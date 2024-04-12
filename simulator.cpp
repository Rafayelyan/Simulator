#include <AndGate.h>
#include <OrGate.h>
#include <InverterGate.h>
#include <CircuitReader.h>

#include <memory>

int main()
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