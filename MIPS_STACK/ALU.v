`timescale 1ns / 1ps

module ALU(
   input      [31:0] data_in_1st,
   input      [31:0] data_in_2nd,
   input      [ 3:0] alu_op,
   output            zero,
   output            pop,
   output reg [31:0] result
   );
     
   parameter ADD = 4'h3,
             OR  = 4'h4,
             SUB = 4'h5,
             SLT = 4'h6,
             NOR = 4'h7,
             AND = 4'h8; 
   
   always@( * ) begin
      case( alu_op )
         ADD : result =    data_in_1st + data_in_2nd;
         SUB : result =    data_in_1st - data_in_2nd;
         OR  : result =    data_in_1st | data_in_2nd;
         SLT : result =    data_in_1st < data_in_2nd;
         NOR : result = ~( data_in_1st | data_in_2nd );
         AND : result =    data_in_1st & data_in_2nd;
         default : result = 32'b0;
      endcase
   end

   assign zero = ( result == 32'b0 ) ? 1'b1 : 1'b0;
   assign pop  = ( result != 32'b0 );

endmodule
