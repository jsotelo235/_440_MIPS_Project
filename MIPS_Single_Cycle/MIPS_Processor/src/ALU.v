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
// Created by <Jose Sotelo> on <March 15, 2018>          // 
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
module ALU(A, B, ALU_Ctl, Zero, ALU_Result);

     input     [31:0]    A, B;
     input     [3:0]     ALU_Ctl;       // operation selection control input
     
     output              Zero;          // One 1-bit Zero result indicator 
     output    [31:0]    ALU_Result;
     
     reg       [31:0]    ALU_Result;
     reg flag;
     
     parameter AND = 4'b0000,
               OR  = 4'b0001,
               ADD = 4'b0010,
               SUB = 4'b0110,
               SLT = 4'b0111,
               NOR = 4'b1100;
     
    always @(*)
     begin
          flag = 0;
          case(ALU_Ctl)
               AND       :    ALU_Result =  (A & B);
               OR        :    ALU_Result =  (A | B);
               ADD       :    ALU_Result =  (A + B);
               SUB       :    ALU_Result =  (A - B);
               SLT       :    ALU_Result =  (A < B);
               NOR       :    ALU_Result = ~(A | B);
               default   :    begin ALU_Result =  32'hxxxxxxxx; flag = 1; end
          endcase
     end 
     
     assign Zero = (ALU_Result == 32'h0000_0000) ? 1'b1 : 
                   (flag) ? 1'bx : 1'b0;

endmodule
