`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <Project 1>                               //
// File name:  ControlUnit.v                             //
//                                                       //
// Created by <Jose Sotelo> on <February 13, 2018>       // 
//                                                       //
// Abstract: Control Unit that tells the datapath        //           
//           with connections are necessary to           //
//           implement the ISA.                          //
//                                                       //
// In submitting this file for class work at CSULB       //
// I am confirming that this is my work and the work     //
// of no one else.                                       // 
//                                                       //
// In the event other code source are utilized I will    //
// document which portion og code and who is the author  //
//                                                       //
// In submitting this code I acknowledge that plagiarism //
// in student project work is subject to dismissal from  //
// the class                                             //
//*******************************************************//
module ControlUnit(Opcode, RegDst, Jump, Branch, 
                   MemRead, MemtoReg, ALUOp, MemWrite, 
                   ALUSrc, RegWrite
                   );
                   
     input     [5:0]     Opcode;
     
     output              RegDst,   Jump,     Branch;
     output              MemRead,  MemtoReg, MemWrite;
     output              ALUSrc,   RegWrite;
     
     output    [1:0]     ALUOp;
     
     reg                 RegDst,   Jump,     Branch;
     reg                 MemRead,  MemtoReg, MemWrite;
     reg                 ALUSrc,   RegWrite;
     
     reg       [1:0]     ALUOp;
         
     parameter R_Type = 6'b000_000,
               lw = 6'b100_011,
               sw = 6'b101_011,         
               beq = 6'b000_100,        
               j = 6'b000_010;
          
     always @(*)
     begin
          case(Opcode)
               R_Type: {RegDst,     ALUSrc,   MemtoReg,
                        RegWrite,   MemRead,  MemWrite,
                        Branch,     Jump,     ALUOp}            = 10'b10010_00010;
                        
               lw:     {RegDst,     ALUSrc,   MemtoReg,
                        RegWrite,   MemRead,  MemWrite,
                        Branch,     Jump,     ALUOp}            = 10'b01111_00000;
                        
               sw:     {RegDst,     ALUSrc,   MemtoReg,
                        RegWrite,   MemRead,  MemWrite,
                        Branch,     Jump,     ALUOp}            = 10'b01000_10000;
                        
               beq:    {RegDst,     ALUSrc,   MemtoReg,
                        RegWrite,   MemRead,  MemWrite,
                        Branch,     Jump,     ALUOp}            = 10'b00000_01001;
                        
               j:      {RegDst,     ALUSrc,   MemtoReg,
                        RegWrite,   MemRead,  MemWrite,
                        Branch,     Jump,     ALUOp}            = 10'b00000_00100;
                            
               default: {RegDst,     ALUSrc,   MemtoReg,
                        RegWrite,   MemRead,  MemWrite,
                        Branch,     Jump,     ALUOp}            = 10'bxxxx_xxxxx; 
          endcase
     end
endmodule
