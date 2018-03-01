`timescale 1ns / 1ps

module ALU(
    input      [31:0] A,
    input      [31:0] B,
    input      [ 3:0] ALU_Ctl,
    output reg [31:0] Output,
    output reg        Zero_Flag
    );

    always@( * ) begin
      // Update output according to ALU truth table.
      case( ALU_Ctl )
         4'b0000 : Output =    A & B;
         4'b0001 : Output =    A | B;
         4'b0010 : Output =    A + B;
         4'b0110 : Output =    A - B;
         4'b0111 : Output =  ( A < B ) ? 32'b1 : 32'b0;
         4'b1100 : Output = ~( A | B );
         default : Output = 32'hxxxxxxxx;
      endcase
      // Assign Zero_Flag: 0 if Output is zero, else check that
      // output was valid and set to 1, else set to 'x'.
      if( Output == 32'b0        ) Zero_Flag = 1'b1; else
      if( Output == 32'hxxxxxxxx ) Zero_Flag = 1'bx; else
      if( Output != 32'b0        ) Zero_Flag = 1'b0;
    end
    
endmodule
