`timescale 1ns / 1ps

module STACK_tb;

	// Inputs
	reg clock;
	reg reset;
	reg push;
	reg pop;
	reg [31:0] data_in;

	// Outputs
	wire [31:0] data_out_1st;
	wire [31:0] data_out_2nd;

	// Instantiate the Unit Under Test (UUT)
	STACK uut (
		.clock(clock), 
		.reset(reset), 
		.push(push), 
		.pop(pop), 
		.data_in(data_in), 
		.data_out_1st(data_out_1st), 
		.data_out_2nd(data_out_2nd)
	);

   always #5 clock = ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
		push = 0;
		pop = 0;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#5;
      reset = 0;
        
		// Add stimulus here
      #10;
      push = 1;
      data_in = 32'hAAAA_0000;
      
      #10;
      push = 1;
      data_in = 32'hBBBB_0000;
      
      #10;
      push = 1;
      data_in = 32'hCCCC_0000;
      
      #10;
      push = 1; 
      data_in = 32'hDDDD_0000;
      
      #10;
      push = 0;
      pop = 0;
      #10;
      
      #10;
      push = 0;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
       
      $stop;
      
	end
      
endmodule

