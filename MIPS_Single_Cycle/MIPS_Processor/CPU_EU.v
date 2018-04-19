`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <CPU_EU>                                  //
// File name:  ALU.v                                     //
//                                                       //
// Created by <Jose Sotelo> on <March 15, 2018>          // 
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
module CPU_EU(clk, RegDst, ALUSrc, ALUOp, RegWrite, MemtoReg,
              Instruction, SEImm,
              RAM_Address, Data_to_RAM, Data_from_RAM,
              Zero  );
             
     input               clk,           //clock signal for synchronous operations
                         RegDst,        //chooses rd or rt for destination register
                         ALUSrc,        //chooses ReadData2 or SEImm for ALU_InputB
                         RegWrite,      //enables a value to be written to a register
                         MemtoReg;      //selects a value from RAM or from ALU to go to regfile
              
     
     input     [1:0]     ALUOp;         //ALUOp Operation mode control signal
     
     input     [25:0]    Instruction;   //26-bit portion of instruction used by EU modules
     input     [31:0]    Data_from_RAM; //value loaded from RAM to be written to a register
     
     output    [31:0]    SEImm,         //Sign Extended Immediate data
                         RAM_Address,   //RAM Address value fro load or store
                         Data_to_RAM;   //Register value to be stored in RAM
                   
     output              Zero;          //The Zero Flag
     
     //internal connection buses
     wire      [4:0]     WriteRegister; //Register to be written as chosen by RegDstMux
     wire      [3:0]     ALUCtl;        //4-bit control signal to tell ALU what to do
     wire      [31:0]    ReadData1,     //Data output 1 from Reg file
                         ReadData2,     //Data output 2 from Reg File
                         ALU_InputB,    //Value to feed into the ALU's B input
                         RegWriteData,  //Value to be written to a register
                         ALU_Result;    //Result of ALU computation
                         
     //******************************************
     //   ALU Control
     //****************************************** 
     ALU_Control
          alu_control(
               .ALUOp( ALUOp ), 
               .FuncCode(Instruction[5:0]), 
               .ALUCtl(ALUCtl)
          );
          
     //******************************************
     //   ALU 32
     //******************************************
     ALU
          alu_32(
               .A(ReadData1), 
               .B(ALU_InputB), 
               .ALU_Ctl(ALUCtl), 
               .Zero(Zero), 
               .ALU_Result(RAM_Address)
          );
          
     //******************************************
     //   Mux 2to1 by 32
     //****************************************** 
     Mux_2to1_by32
          alu_src_mux(
               .In0(Data_to_RAM), 
               .In1(SEImm), 
               .Sel(ALUSrc), 
               .Out(ALU_InputB)
          );
  
     //******************************************
     //   32-bit Register File
     //******************************************
     Reg_File32
          RF32(
               .Read1(Instruction[25:21]), 
               .Read2(Instruction[20:16]),
               .WriteReg(WriteRegister), 
               .WriteData(RegWriteData), 
               .clock(clk), 
               .RegWrite(RegWrite), 
               .Data1(ReadData1),    
               .Data2(Data_to_RAM)
          );     
     assign ReadData2 = Data_to_RAM;
     
     //******************************************
     //   Mux 2to1 by 5
     //****************************************** 
     Mux_2to1_by5
          reg_dst_mux(
               .In0(Instruction[20:16]), 
               .In1(Instruction[15:11]), 
               .Sel(RegDst), 
               .Out(WriteRegister)
          );  

     //******************************************
     //   Sign Extend
     //******************************************
     SignExtend_16to32
          sign_extend(
               .SE_In(Instruction[15:0]), 
               .SE_Out(SEImm)
          );

     //******************************************
     //   Mux 2to1 by 32
     //****************************************** 
     Mux_2to1_by32
          mem_mux(
               .In0(RAM_Address), 
               .In1(Data_from_RAM), 
               .Sel(MemtoReg), 
               .Out(RegWriteData)
          ); 
          
endmodule
