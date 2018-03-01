`timescale 1ns / 1ps

module ALU_440_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] ALU_Ctl;

	// Outputs
	wire [31:0] Output;
	wire Zero_Flag;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Ctl(ALU_Ctl), 
		.Output(Output), 
		.Zero_Flag(Zero_Flag)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALU_Ctl = 0;

      #10;
      A = 32'h1398_9207;
      B = 32'h1234_5678;
      
      ALU_Ctl = 4'b0000;
      #100;
      ALU_Ctl = 4'b0001;
      #100;
      ALU_Ctl = 4'b0010;
      #100;
      ALU_Ctl = 4'b0110;
      #100;
      ALU_Ctl = 4'b0111;
      #100;
      ALU_Ctl = 4'b1100;
      #100;
      ALU_Ctl = 4'b1111;
      #100;
      $stop;
      
	end
      
endmodule

