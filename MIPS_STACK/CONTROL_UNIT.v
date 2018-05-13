`timescale 1ns / 1ps
/******************************************************
Takes in the opcade and generates a push / pop signal,
also converts the op-code to an alu-op to be sent to 
the ALU.
******************************************************/
module CONTROL_UNIT(
   input        clock,
   input        reset,
   input  [5:0] opcode,
   output reg   push,
   output reg   pop,
   output reg [3:0] alu_op
   );
   
   always@( * ) begin
      case( opcode )
         4'd1 : { push, pop, alu_op } = 7'b10_0000;
         4'd2 : { push, pop, alu_op } = 7'b01_0000;
         4'd3 : { push, pop, alu_op } = 7'b00_0011;
         4'd4 : { push, pop, alu_op } = 7'b00_0100;
         4'd5 : { push, pop, alu_op } = 7'b00_0101;
         4'd6 : { push, pop, alu_op } = 7'b00_0110;
         4'd7 : { push, pop, alu_op } = 7'b00_0111;
         4'd8 : { push, pop, alu_op } = 7'b00_1000;
         default : { push, pop, alu_op } = 7'b00_0000;
      endcase
   end

endmodule
