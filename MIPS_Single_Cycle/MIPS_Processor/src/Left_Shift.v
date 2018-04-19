`timescale 1ns / 1ps

module Left_Shift( 
   input      clock,
   input      [31:0] shift_in,
   output reg [31:0] shift_out
   );
   
   always@( posedge clock )
      shift_out <= { shift_in[29:0], 2'b0 };

endmodule
 