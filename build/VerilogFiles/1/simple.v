module simple_circuit(
    input a,  // Input wire a
    input b,  // Input wire b
    input c,  // Input wire c
    output f  // Output wire f
);

wire d, e; // Declare intermediate wires

and and1(d, a, b);    // AND gate, inputs a and b, output to d
not inverter1(e, c);  // Inverter gate, input c, output to e
or or1(f, d, e);      // OR gate, inputs d and e, output to f

endmodule
