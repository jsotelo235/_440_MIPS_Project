`timescale 1ns / 1ps

module Left_Shift( 
   input      [31:0] shift_in,
   output reg [31:0] shift_out
   );
   
   always @(*)
     shift_out <= {shift_in[29:0], 2'b0};
      //assign shift_out = shift_in << 2;

endmodule
 