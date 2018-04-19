`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <Register_File>                           //
// File name:  Reg_File32.v                              //
//                                                       //
// Created by  Sam P., Jose S. and Jose P.               //
//                                                       //
// Abstract:                                             //
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
module Reg_File32(Read1, Read2,    WriteReg, WriteData, 
                  clock, RegWrite, Data1,    Data2);

     input     [4:0]     Read1, Read2, WriteReg;  // reg numbers to read/write
     input     [31:0]    WriteData;               // data to write
     input               RegWrite,                // write control signal
                         clock;                   // clock to trigger a write
                         
     output    [31:0]    Data1, Data2;            // reg values to read
     
     reg       [31:0]    RF   [31:0];             // 32 reg each, 32 bits wide
     
     assign Data1 = RF[Read1];
     assign Data2 = RF[Read2];
     
     always @(negedge clock)
     begin
          // if RegWrite control signal is asserted
          if(RegWrite == 1 && WriteReg != 5'h000) RF[WriteReg] <=  WriteData;
               
          RF[0] <= 32'h00000000; // ensures $0 = 0
     end
     
endmodule
