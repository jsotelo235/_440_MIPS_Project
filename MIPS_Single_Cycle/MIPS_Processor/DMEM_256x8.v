`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <MIPS_Core>                               //
// File name:  DMEM_256x8.v                              //
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
module DMEM_256x8(clk, MemWrite, Address, WriteData, MemRead, ReadData);
     
     input               clk, MemWrite, MemRead;
     input     [7:0]     Address;
     input     [31:0]    WriteData;
     
     output   reg [31:0]    ReadData;

     reg       [7:0]     DM   [0:255];
 
     always @(posedge clk)
     begin
          if(MemWrite == 1)
          begin
               DM[Address + 0] <= WriteData[31:24];
               DM[Address + 1] <= WriteData[23:16];
               DM[Address + 2] <= WriteData[15:8];
               DM[Address + 3] <= WriteData[7:0];
          end
     end 
     
     always @( MemRead, Address, DM ) // MemRead, Address, DM
     begin 
          if(MemRead == 1)
          begin
               ReadData <={   DM[Address + 0],
                              DM[Address + 1],
                              DM[Address + 2],
                              DM[Address + 3]
                         };
          end
     end
endmodule
