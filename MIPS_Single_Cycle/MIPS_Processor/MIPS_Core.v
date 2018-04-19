`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <MIPS_Core>                               //
// File name:  MIPS_Core.v                               //
//                                                       //
// Created by <Jose Sotelo> on <March 15, 2018>          // 
//                                                       //
// Description : This module links together the control  //
// unit, CPU_EU, Imem, and Dmem modules. These modules   //
// make up the core functionality of the MIPS core.      //
//                                                       //
// Team: Jose S., Jose P. and Sam P.                     //
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
module MIPS_Core(clk,  ReadAddr, SEImm, JumpValue, 
                 Zero, Branch,   Jump);

     input               clk;       // system clock
     input     [7:0]     ReadAddr;  // address of instruction pointed to by PC
     
     output    [31:0]    SEImm;     // 32-bit Sign Extended Immediate Data Val
     output    [25:0]    JumpValue; // 26-bit portion of Jump Instruction
     output              Zero,      // Control Flow Instruction Signals
                         Branch,
                         Jump;
                         
     // Internal Bus Connections
     wire      [31:0]    I,             // Instruction Bus
                         RAM_Address,   // Address to read data from cache
                         Data_to_RAM,   // Data to store in cache 
                         Data_from_RAM; // Data read from cache
     
     // Control Unit signals
     wire                RegDst, ALUSrc, MemtoReg, RegWrite,
                         MemWrite, Branch, Jump, MemRead;
     wire      [1:0]     ALUOp;



     //******************************************
     //   DMEM 256x8
     //******************************************
     DMEM_256x8
          dmem(
               .clk(clk), 
               .MemWrite(MemWrite), 
               .Address(RAM_Address[7:0]), 
               .WriteData(Data_to_RAM), 
               .MemRead(MemRead), 
               .ReadData(Data_from_RAM)
          );

     //******************************************
     //   Control Unit
     //****************************************** 
     ControlUnit
          control_unit(
               .Opcode(I[31:26]),        
               .RegDst(RegDst), 
               .Jump(Jump), 
               .Branch(Branch), 
               .MemRead(MemRead),  
               .MemtoReg(MemtoReg), 
               .ALUOp(ALUOp),       
               .MemWrite(MemWrite),  
               .ALUSrc(ALUSrc),     
               .RegWrite(RegWrite)
          );
          
     //******************************************
     //   CPU Execution Unit
     //******************************************
     CPU_EU
          cpu(
               .clk(clk), 
               .RegDst(RegDst), 
               .ALUSrc(ALUSrc), 
               .ALUOp(ALUOp), 
               .RegWrite(RegWrite), 
               .MemtoReg(MemtoReg),
               .Instruction(I[25:0]), 
               .SEImm(SEImm),
               .RAM_Address(RAM_Address),     
               .Data_to_RAM(Data_to_RAM),     
               .Data_from_RAM(Data_from_RAM), 
               .Zero(Zero)
          );
          
     //******************************************
     //   IMEM 128x8
     //******************************************
     IMEM_128x8
          imem(
               .ReadAddress(ReadAddr), 
               .Instruction(I)
          );
          
     assign JumpValue = I;
     
endmodule
