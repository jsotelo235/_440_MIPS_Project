`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:20:51 04/24/2018
// Design Name:   STACK_CPU
// Module Name:   C:/Users/Sam/Desktop/440/Stack_CPU/STACK_CPU_tb.v
// Project Name:  Stack_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: STACK_CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module STACK_CPU_tb;

	// Inputs
	reg clock;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	STACK_CPU uut (
		.clock(clock), 
		.reset(reset)
	);

   always #5 clock = ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
      
      uut.imem.IM[0] = 32'h0400_0011;
      uut.imem.IM[1] = 32'h0400_0022;
      uut.imem.IM[2] = 32'h0400_0033;
      uut.imem.IM[3] = 32'h0400_0044;
      uut.imem.IM[4] = 32'h0400_0055;
      uut.imem.IM[5] = 32'h0000_0000;
      uut.imem.IM[6] = 32'h0C00_0000;
      uut.imem.IM[7] = 32'h0000_0000;
      uut.imem.IM[8] = 32'h0800_0000;
      uut.imem.IM[9] = 32'h0800_0000;
      uut.imem.IM[10] = 32'h0800_0000;
      uut.imem.IM[11] = 32'h0800_0000;
      uut.imem.IM[12] = 32'h0000_0000;
      uut.imem.IM[13] = 32'h0000_0000;
      uut.imem.IM[14] = 32'h0000_0000;
      uut.imem.IM[15] = 32'h0000_0000;

		// Wait 100 ns for global reset to finish
		#10;
      reset = 0;
        
		// Add stimulus here
      #90;
      $stop;
      #40;
      $stop;

	end
      
endmodule

