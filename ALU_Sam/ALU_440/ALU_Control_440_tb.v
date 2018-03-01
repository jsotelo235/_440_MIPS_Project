`timescale 1ns / 1ps

module ALU_Control_440_tb;

	// Inputs
	reg [5:0] FuncCode;
	reg [1:0] ALU_op;

	// Outputs
	wire [3:0] ALU_Ctl;

	// Instantiate the Unit Under Test (UUT)
	ALU_Control uut (
		.FuncCode(FuncCode), 
		.ALU_op(ALU_op), 
		.ALU_Ctl(ALU_Ctl)
	);

	initial begin
		// Initialize Inputs
		FuncCode = 6'b0;
		ALU_op = 2'b0;
      #100;
      
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

