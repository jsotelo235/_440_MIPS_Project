`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <MIPS Single Cycle Processor>             //
// File name:  MIPS_Processor.v                          //
//                                                       //
// Created by <Jose Sotelo> on <April 17, 2018>          // 
//                                                       //
// Team: Jose S., Jose P. and Sam P.                     //
// Abstract: Control Unit that tells the datapath        //           
//           with connections are necessary to           //
//           implement the ISA.                          //
//                                                       //
// In submitting this file for class work at CSULB       //
// I am confirming that this is my work and the work     //
// of no one else.                                       // 
//                                                       //
// In the event other code source are utilized I will    //
// document which portion of code and who is the author  //
//                                                       //
// In submitting this code I acknowledge that plagiarism //
// in student project work is subject to dismissal from  //
// the class                                             //
//*******************************************************//
module MIPS_Processor(clk, Zero_Flag);
   
   input       clk;           
   output      Zero_Flag;
   
   wire [31:0] PC_Out,            // Program Counter holds current instruction
               PC_Out_plus4,      // Adder Increments current PC by 4    
               PC_Next,           // Point to the next instruction in the PC
               SEImm32,           // Sign Extension Out      
               SL2SEImm32,        // Left Shift Sign Extension
               JumpAddress,       // 26-bit Jump Address Instruction
               BranchTarget,      // 
               BranchMuxOut;      //
   wire [25:0] I_Offset;          //
   wire        Zero_Flag,         //
               Branch_Flag,       //
               Jump_Flag,         //
               PC0_Branch1;       //
              
    assign JumpAddress = {4'b0, I_Offset, 2'b00};
    
     //******************************************
     //   Left Shift
     //******************************************
   Left_Shift 
          sl2_forBranch(
               .shift_in(SEImm32),
               .shift_out(SL2SEImm32)
          );
      
     //******************************************
     //   PC Incrementer
     //******************************************
   ALU 
     pc_incrementer(
          .A(PC_Out),
          .B(32'h4),
          .ALU_Ctl(4'b0010),
          .Zero(),
          .ALU_Result(PC_Out_plus4)
     );
     
     //******************************************
     //   Branch Target Addresser
     //******************************************
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
   
     //******************************************
     //   Branch Mux
     //******************************************
   Mux_2to1_by32 
          branch_mux(
               .In0(PC_Out_plus4),
               .In1(BranchTarget),
               .Sel(PC0_Branch11),
               .Out(BranchMuxOut)
          );
          
     //*********************************************
     //   Jump Mux
     //   A mux is used to choose between the
     //   jump target and the branch target. 
     //   It's controlled by the jump flag signal. 
     //*********************************************
   Mux_2to1_by32 
          jump_mux(
               .In0(BranchMuxOut),
               .In1(JumpAddress),
               .Sel(Jump_Flag),
               .Out(PC_Next)
          ); 
   
     //******************************************
     //   Program Counter
     //   Holds the address of the current
     //   instruction being executed.
     //******************************************
   ProgramCounter 
          program_counter(
               .clk(clk),
               .PC_In(PC_Next),
               .PC_Out(PC_Out) 
          );
          
     //******************************************
     //   MIPS Core
     //******************************************
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