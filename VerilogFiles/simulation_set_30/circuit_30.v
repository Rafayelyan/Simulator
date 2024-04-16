module simple_circuit(
    input a0,
    input a1,
    input a2,
    input a3,
    input a4,
    input a5,
    input a6,
    input a7,
    input a8,
    input a9,
    input a10,
    input a11,
    input a12,
    input a13,
    input a14,
    input a15,
    input a16,
    input a17,
    input a18,
    input a19,
    input a20,
    input a21,
    input a22,
    input a23,
    input a24,
    input a25,
    input a26,
    input a27,
    input a28,
    input a29,
    output f);

wire d0;
wire d1;
wire d2;
wire d3;
wire d4;
wire d5;
wire d6;
wire d7;
wire d8;
wire d9;
wire d10;
wire d11;
wire d12;
wire d13;
wire d14;
wire d15;
wire d16;
wire d17;
wire d18;
wire d19;
wire d20;
wire d21;
wire d22;
wire d23;
wire d24;
wire d25;
wire d26;
wire d27;
wire d28;
wire d29;
and and0(d0, a0, a1);
not not1(d1, a1);
or or2(d2, a2, a3);
and and3(d3, a3, a4);
not not4(d4, a4);
or or5(d5, a5, a6);
and and6(d6, a6, a7);
not not7(d7, a7);
or or8(d8, a8, a9);
and and9(d9, a9, a10);
not not10(d10, a10);
or or11(d11, a11, a12);
and and12(d12, a12, a13);
not not13(d13, a13);
or or14(d14, a14, a15);
and and15(d15, a15, a16);
not not16(d16, a16);
or or17(d17, a17, a18);
and and18(d18, a18, a19);
not not19(d19, a19);
or or20(d20, a20, a21);
and and21(d21, a21, a22);
not not22(d22, a22);
or or23(d23, a23, a24);
and and24(d24, a24, a25);
not not25(d25, a25);
or or26(d26, a26, a27);
and and27(d27, a27, a28);
not not28(d28, a28);
or or29(d29, a29, a0);
or or_final(f, d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29);
endmodule
