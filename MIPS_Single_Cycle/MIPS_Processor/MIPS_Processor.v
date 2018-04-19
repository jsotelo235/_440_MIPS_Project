`timescale 1ns / 1ps
module MIPS_Processor(clk, Zero_Flag);
   
   input       clk;
   output      Zero_Flag;
   
   wire [31:0] PC_Out,         
               PC_Out_plus4,
               PC_Next,
               SEImm32,       
               SL2SEImm32,
               JumpAddress,
               BranchTarget,
               BranchMuxOut;
   wire [25:0] I_Offset;
   wire        Zero_Flag,     
               Branch_Flag,
               Jump_Flag,     
               PC0_Branch1;    
              
    assign JumpAddress = {4'b0, I_Offset, 2'b00};
    
   // Shift left.
   Left_Shift 
          sl2_forBranch(
               .shift_in(SEImm32),
               .shift_out(SL2SEImm32)
          );
     
   // PC incrementer. 
   ALU 
     pc_incrementer(
          .A(PC_Out),
          .B(32'h4),
          .ALU_Ctl(4'b0010),
          .Zero(),
          .ALU_Result(PC_Out_plus4)
     );
     
   // Branch Target Addresser
   ALU 
     branch_target_addr(
          .A(PC_Out_plus4),
          .B(SL2SEImm32),
          .ALU_Ctl(4'b0010),
          .Zero(),
          .ALU_Result(BranchTarget) 
     );
         
   // 'And' gate to set branch mux
   assign PC0_Branch11 = Branch_Flag & Zero_Flag;
   
   // Branch Mux
   Mux_2to1_by32 
          branch_mux(
               .In0(PC_Out_plus4),
               .In1(BranchTarget),
               .Sel(PC0_Branch11),
               .Out(BranchMuxOut)
          );
          
   // Jump Mux
   Mux_2to1_by32 
          jump_mux(
               .In0(BranchMuxOut),
               .In1(JumpAddress),
               .Sel(Jump_Flag),
               .Out(PC_Next)
          ); 
   
   // PC Instantiation. 
   ProgramCounter 
          program_counter(
               .clk(clk),
               .PC_In(PC_Next),
               .PC_Out(PC_Out) 
          );
          
   // MIPS core instantiation. 
   MIPS_Core 
          mips_core(
               .clk(clk),
               .ReadAddr(PC_Out[7:0]),        
               .SEImm(SEImm32),    
               .JumpValue(I_Offset),       
               .Zero(Zero_Flag),
               .Branch(Branch_Flag),
               .Jump(Jump_Flag) 
          );   
endmodule