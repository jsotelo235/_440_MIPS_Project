`timescale 1ns / 1ps

module PROGRAM_COUNTER( 
   input             clock, 
   input             reset,
   input      [31:0] pc_in, 
   output reg [31:0] pc_out 
   );

   always@( posedge clock, posedge reset ) begin
      if( reset ) pc_out <= 32'b0; 
      else        pc_out <= pc_in;
   end

endmodule

