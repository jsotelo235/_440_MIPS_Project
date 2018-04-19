`timescale 1ns / 1ps
module ProgramCounter( clk, PC_In, PC_Out );
   input             clk;
   input      [31:0] PC_In;
   output reg [31:0] PC_Out;

   always@( posedge clk )
      PC_Out <= PC_In;

endmodule
