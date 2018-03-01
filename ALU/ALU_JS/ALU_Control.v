`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <Project 1>                               //
// File name:  ALU.v                                     //
//                                                       //
// Created by <Jose Sotelo> on <February 27, 2018>       // 
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
module ALU_Control(FuncCode, ALU_op, ALU_Ctl);

     input     [5:0]     FuncCode;
     input     [1:0]     ALU_op;
     
     output    [3:0]     ALU_Ctl;
     
     reg       [3:0]     ALU_Ctl;
     
     always @(*)
     begin
          //casex : Treats x and z as don't care.
          casex({FuncCode,ALU_op})                      // R-Type Instructions
               8'b100000_10   :    ALU_Ctl = 4'b0010;   // add
               8'b100010_10   :    ALU_Ctl = 4'b0110;   // subtract
               8'b100100_10   :    ALU_Ctl = 4'b0000;   // and
               8'b100101_10   :    ALU_Ctl = 4'b0001;   // or
               8'b101010_10   :    ALU_Ctl = 4'b0111;   // slt
               8'b100111_10   :    ALU_Ctl = 4'b1100;   // nor
                                             
                                                        // I-Type Instructions
               8'b000000_00   :    ALU_Ctl = 4'b0010;   // lw/sw
               8'bxxxxxx_x1   :    ALU_Ctl = 4'b0110;   // branch
               default        :    ALU_Ctl = 4'bxxxx;   // Invalid output
          endcase
     end


endmodule
