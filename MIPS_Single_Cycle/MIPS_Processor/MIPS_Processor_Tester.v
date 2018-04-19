`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:35:08 04/18/2018
// Design Name:   MIPS_Processor
// Module Name:   D:/CSULB_Classes/CECS_440/Labs_Projects/MIPS_Single_Cycle_Processor/MIPS_Processor/MIPS_Processor_Tester.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS_Processor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_Processor_Tester;

	// Inputs
	reg clk;

	// Outputs
	wire Zero_Flag;

	// Instantiate the Unit Under Test (UUT)
	MIPS_Processor uut (
		.clk(clk), 
		.Zero_Flag(Zero_Flag)
	);

     integer i;
     
     parameter      RTYPE     = 6'b000_000,       LW   = 6'b100_011,
                    SW        = 6'b101_011,       BEQ  = 6'b000_100,
                    J         = 6'b000_010,       ADD  = 6'b100_000,
                    SUB       = 6'b100_010,       AND  = 6'b100_100,
                    OR        = 6'b100_101,       SLT  = 6'b101_010;
     
     wire [4:0]     rd, rs, rt;
     wire [15:0]    imm;
     wire [25:0]    addr;
     
     assign {rd, rs, rt} = {uut.mips_core.I[15:11], uut.mips_core.I[25:21],uut.mips_core.I[20:16]},
                    imm = uut.mips_core.I[15:0], addr = uut.mips_core.I[25:0];
     
     always #5 clk = ~clk;
     
     always @(posedge clk) begin
          $timeformat( -9, 1, "ns", 8);
          $display("At time %t", $time);
          #1;
          
          case(uut.mips_core.I[31:26])
               RTYPE:
                    case(uut.mips_core.I[5:0])
                         ADD: $display("add $%0d, $%0d, $%0d", rd, rs, rt);
                         SUB: $display("sub $%0d, $%0d, $%0d", rd, rs, rt);
                         AND: $display("and $%0d, $%0d, $%0d", rd, rs, rt);
                         OR:  $display("or $%0d, $%0d, $%0d", rd, rs, rt);
                         SLT: $display("slt $%0d, $%0d, $%0d", rd, rs, rt);
                         default begin $display("Error: invalid R-Type Instruction");
                              i = 1;end
                    endcase
               LW:  $display("lw $%0d, 0x%h($%0d)", rt, imm, rs);
               SW:  $display("sw $%0d, 0x%h($%0d)", rt, imm, rs);
               BEQ: $display("beq $%0d, 4%0d, 0x%h", rs, rt, imm);
               J:   $display("j 0x%h", {addr, 2'b00});
               default: begin $display("Error: Invalid Instruction");
                    i = 1; end
          endcase
          $display("");
     end
     
	initial begin
		$display("SIMULATION BEGINS!");
          uut.program_counter.PC_Out = 0;
          i = 0;
          $readmemh("../DMEM.dat", uut.mips_core.dmem.DM);
          $readmemh("../IMEM.dat", uut.mips_core.imem.IM);
          $readmemh("../REGFILE.dat", uut.mips_core.cpu.RF32.RF);

		$display("SIMULATION BEGINS!!!!!");
		clk = 0;
          while(!i) #1 i = i; // do nothing while i == 0
          $display("DUMPING REGISTERS");
          for(i = 0; i < 32; i = i + 1)
               $display("$%0d = 0x%h", i, uut.mips_core.cpu.RF32.RF[i]);
          $display("\nDUMPING DATA MEMORY");
          for(i = 0; i < 28; i = i + 1)
               $display("DMEM[0x%h] = 0x%h", i, uut.mips_core.dmem.DM[i]);
          $display("SIMULATION ENDS!");
          $finish;
	end
      
endmodule

