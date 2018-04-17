`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:11:15 04/07/2018
// Design Name:   MIPS_Core
// Module Name:   D:/CSULB_Classes/CECS_440/Labs_Projects/MIPS_Core/MIPS_Core/MIPS_Core_tf.v
// Project Name:  MIPS_Core
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS_Core
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_Core_tf;

	// Inputs
	reg            clk;
	reg [7:0]      ReadAddr;

	// Outputs
	wire [31:0]    SEImm;
	wire [25:0]    JumpValue;
	wire           Zero;
	wire           Branch;
	wire           Jump;

	// Instantiate the Unit Under Test (UUT)
	MIPS_Core uut (
		.clk(clk), 
		.ReadAddr(ReadAddr), 
		.SEImm(SEImm), 
		.JumpValue(JumpValue), 
		.Zero(Zero), 
		.Branch(Branch), 
		.Jump(Jump)
	);

     integer i;
     
     always #5 clk = ~clk;
     
	initial begin
		// Initialize Inputs
		clk = 0;
		ReadAddr = 0;
          
          // initialize register values
          for(i = 1; i < 32; i = i + 1)
               uut.eu.RF32.RF[i] = i;
               
          // inititalize DMEM
          for(i = 0; i < 256; i = i + 1)
               uut.dmem.DM[i] = $random;

     //-+--+--+--+- initialize IMEM with instructions -+--+--+--+-//
          //instruction 0: and $31, $22, $13
     {uut.imem.IM[0], uut.imem.IM[1], uut.imem.IM[2], uut.imem.IM[3]}     = 32'h02CDF824;
     
          //instruction 1: slt $1, $2, $3
     {uut.imem.IM[4], uut.imem.IM[5], uut.imem.IM[6], uut.imem.IM[7]}     = 32'h0043082A;
          
          //instruction 2: lw $12, 20($20)
     {uut.imem.IM[8], uut.imem.IM[9], uut.imem.IM[10], uut.imem.IM[11]}   = 32'h8E8C0014;
     
          //instruction 3: sw $4, 0($0)
     {uut.imem.IM[12], uut.imem.IM[13], uut.imem.IM[14], uut.imem.IM[15]} = 32'hAC040000;
     
          //instruction 4: beq $5, $6, 0xffffffff
     {uut.imem.IM[16], uut.imem.IM[17], uut.imem.IM[18], uut.imem.IM[19]} = 32'h10A6FFFF;

          //instruction 5: sub $7, $8, $9
     {uut.imem.IM[20], uut.imem.IM[21], uut.imem.IM[22], uut.imem.IM[23]} = 32'h01093822;
     
          //instruction 6: jump to I-MEM location 0x00400010
     {uut.imem.IM[24], uut.imem.IM[25], uut.imem.IM[26], uut.imem.IM[27]} = 32'h08100004;
     //-+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+-//
     
     //step through and execute instructions in IMEM on consecutive clock cycles
     for(i = 0; i< 7; i = i + 1)
          @(posedge clk) 
          begin
               ReadAddr = i*4;
               #6;
               case(i)
                    0:
                    begin
                         $display("Test case 1:   and $31, $22, $13");
                         $display("expected result: $31 = 0x%h",
                                  uut.eu.RF32.RF[22] & uut.eu.RF32.RF[13]);
                         $display("actual result: $31 = 0x%h", uut.eu.RF32.RF[31]);
                         $display("");
                    end
                    1:
                    begin
                         $display("Test case 2:   slt $1, $2, $3");
                         $display("expected result: $1 = 0x%h",
                                  {31'h0, (uut.eu.RF32.RF[2] < uut.eu.RF32.RF[3])});
                         $display("actual result: $1 = 0x%h", uut.eu.RF32.RF[1]);
                         $display("");
                    end
                    2:
                    begin
                         $display("Test case 3:   lw $12, 20($20)");
                         $display("expected result: $12 = 0x%h",
                                  {     uut.dmem.DM[40],
                                        uut.dmem.DM[41],
                                        uut.dmem.DM[42],
                                        uut.dmem.DM[43]} );
                         $display("actual result: $12 = 0x%h", uut.eu.RF32.RF[12]);
                         $display("");
                    end
                    3:begin
                         $display("Test case 4:   sw $4, 0($0)");
                         $display("expected result: DMEM[0] = 0x%h",uut.eu.RF32.RF[4]);
                         #5;  // delay to wait for store to occur on next posedge clk
                         $display("actual result: DMEM[0] = 0x%h",
                                   {    uut.dmem.DM[0],
                                        uut.dmem.DM[1],
                                        uut.dmem.DM[2],
                                        uut.dmem.DM[3]} );
                         $display("");
                    end
                    4:
                    begin
                         $display("test case 5:   beq $5, $6, 0xffff");
                         $display("expected results:");
                         $display(" Zero = 0");
                         $display(" Branch = 1");
                         $display(" SeIMM = 0xffffffff");
                         $display("actual results:");
                         $display(" Zero = %b", Zero);
                         $display(" Branch = %b", Branch);
                         $display(" SeIMM = 0x%h", SEImm);
                         $display("");
                    end
                    5:
                    begin
                         $display("Test case 6:   sub $7, $8, $9");
                         $display("expected result: $7 = 0x%h",
                                   uut.eu.RF32.RF[8] - uut.eu.RF32.RF[9]);
                         $display("actual result: $7 = 0x%h", uut.eu.RF32.RF[7]);
                         $display("");
                    end
                    6:
                    begin
                         $display("Test case 7:   jump to IMEM address 0x00400010");
                         $display("expected result: JumpValue = 0x0100004");
                         $display("actual result:   JumpValue = 0x%h", JumpValue);
                         $display("");     
                    end
                    default:
                    begin
                         $display("INVALID TEST CASE");
                    end
               endcase
               end            // end of @(posedge clk) within the for loop
               #20 $stop;
          end                 // end of initial block
endmodule

