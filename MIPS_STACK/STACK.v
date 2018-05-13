`timescale 1ns / 1ps

module STACK( 
   input         clock,     // System clock.
   input         reset,     // System reset. 
   input         push,      // Pushing onto stack signal.
   input         pop,       // Popping off of stack signal.
   input         pop_alu,   // Signal from alu to pop.
   input  [31:0] result,    // Result from alu.
   input  [31:0] data_in,   // Data to push on.
   output [31:0] data_out_1st,  // Data from first read segment.
   output [31:0] data_out_2nd   // Data from second read segment. 
   );

   // Keeps track of location in the stack. 
   reg [3:0]  stack_pointer; 
   // Stack is 32 bits wide, 32 words deep.
   reg [31:0] stack [15:0];
   
   /****************************************
   'data_out' is always assigned the value
   at the top of the stack. It is zero when
   initialized and always reads one behind
   the stack pointer since that location is
   empty and waiting to be written to. 
   ****************************************/
   assign data_out_1st = ( stack_pointer == 4'b0 ) ? 32'b0 : stack[ stack_pointer - 1 ];
   assign data_out_2nd = ( stack_pointer <= 4'b1 ) ? 32'b0 : stack[ stack_pointer - 2 ];
   
   // Update the stack pointer and stack contents. 
   always@( posedge clock, posedge reset ) begin
      
      /**********************************************
      If reset: zero out all of the contents of the
      stack and reset the stack pointer to zero. 
      **********************************************/
      if( reset ) begin
         stack[0 ] <= 32'b0; stack[1 ] <= 32'b0;
         stack[2 ] <= 32'b0; stack[3 ] <= 32'b0;
         stack[4 ] <= 32'b0; stack[5 ] <= 32'b0;
         stack[6 ] <= 32'b0; stack[7 ] <= 32'b0;
         stack[8 ] <= 32'b0; stack[9 ] <= 32'b0;
         stack[10] <= 32'b0; stack[11] <= 32'b0;
         stack[12] <= 32'b0; stack[13] <= 32'b0;
         stack[14] <= 32'b0; stack[15] <= 32'b0;
         stack_pointer <= 4'b0;
      end
      else if( push | pop ) begin
         /***********************************************
         If push: increment the stack pointer and assign
         a value to the location pointed to on the stack. 
         ***********************************************/
         if( push ) begin
            stack[ stack_pointer ] <= data_in;
            stack_pointer <= stack_pointer + 4'b1;
         end
         /***********************************************
         If pop: decrement the stack pointer. No need to
         overwrite the existing data. 
         ***********************************************/
         if( pop ) begin
            stack_pointer <= stack_pointer - 4'b1;
         end
      end
      /************************************************
      If the ALU has completed an operation it sends a 
      pop instruction to the stack. 
      ************************************************/
      else if( pop_alu ) begin
         stack_pointer <= stack_pointer - 4'b1;
         stack[ stack_pointer - 4'd2 ] <= result;
      end
      /***********************************************
      Else: keep the stack pointer where it is.
      ***********************************************/
      else begin
         stack_pointer <= stack_pointer;
      end
      
   end
   
endmodule
