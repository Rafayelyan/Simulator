module complex_circuit(
    input a,  // Input wire a
    input b,  // Input wire b
    input c,  // Input wire c
    input d,  // Input wire c
    input e,  // Input wire c
    output z  // Output wire f
);


wire w1, w2, w3, w4, w5, w6, w7, w8, w9;


and and1(w1, a, b);           // AND gate, inputs a and b, output to w1
or or1(w2, w1, c);            // OR gate, inputs w1 and c, output to w2
not not1(w3, d);              // NOT gate, input d, output to w3
xor xor1(w4, c, d);           // XOR gate, inputs c and d, output to w4
nand nand1(w5, e, w4);        // NAND gate, inputs e and w4, output to w5


and and2(w6, w2, w3);         // AND gate, inputs w2 and w3, output to w6
or or2(z, w5, w6);            // OR gate, inputs w5 and a, output to w7

endmodule