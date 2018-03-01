`timescale 1ns / 1ps

module ALU_Control(
    input      [5:0] FuncCode,
    input      [1:0] ALU_op,
    output reg [3:0] ALU_Ctl
    );

    // Assign ALU_Ctl based on FuncCode
    // and ALU_Op.
    always@( * ) begin
      if( ALU_op == 01 | ALU_op == 11 ) ALU_Ctl = 4'b0110; else
      if( ALU_op == 00)                 ALU_Ctl = 4'b0010; 
      else
         case( { FuncCode, ALU_op } )
            8'b100000_10 : ALU_Ctl = 4'b0010;
            8'b100010_10 : ALU_Ctl = 4'b0110;
            8'b100100_10 : ALU_Ctl = 4'b0000;
            8'b100101_10 : ALU_Ctl = 4'b0001;
            8'b101010_10 : ALU_Ctl = 4'b0111;
            8'b100111_11 : ALU_Ctl = 4'b1100;
            default      : ALU_Ctl = 4'bxxxx;
         endcase
    end     

endmodule
