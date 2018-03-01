`timescale 1ns / 1ps

module ALU_TOP_tb;

	// Inputs ALU
	reg [31:0] A;
	reg [31:0] B;
   
   // Inputs ALU_Control
	reg [5:0] FuncCode;
	reg [1:0] ALU_op;

	// Outputs ALU
	wire [31:0] Output;
	wire Zero_Flag;
   
   // Outputs ALU_Control
	wire [3:0] ALU_Ctl;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Ctl(ALU_Ctl), 
		.Output(Output), 
		.Zero_Flag(Zero_Flag)
	);

	// Instantiate the Unit Under Test (UUT)
	ALU_Control dut (
		.FuncCode(FuncCode), 
		.ALU_op(ALU_op), 
		.ALU_Ctl(ALU_Ctl)
	);

	initial begin
  
      A = 0;
		B = 0;
		FuncCode = 0;
		ALU_op = 0;

      #10;
      A = 32'h1398_9207;
      B = 32'h1398_9208;

      { FuncCode, ALU_op } = 8'b100000_10;
      #100;
      { FuncCode, ALU_op } = 8'b100010_10;
      #100;
      { FuncCode, ALU_op } = 8'b100100_10;
      #100;
      { FuncCode, ALU_op } = 8'b100101_10;
      #100;
      { FuncCode, ALU_op } = 8'b101010_10;
      #100;
      { FuncCode, ALU_op } = 8'b100111_11;
      #100;
      { FuncCode, ALU_op } = 8'bxxxxxx_00;
      #100;
      { FuncCode, ALU_op } = 8'bxxxxxx_x1;
      #100;
      $stop;
      
	end
      
endmodule

