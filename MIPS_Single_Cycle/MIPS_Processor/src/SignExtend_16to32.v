`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <Sign Extend>                             //
// File name:  SigExtend_16to32.v                        //
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
module SignExtend_16to32(SE_In, SE_Out);

     input     [15:0]    SE_In;
     
     output    [31:0]    SE_Out;
     
     reg       [31:0]    SE_Out;
     
     always @(*)
          begin
               SE_Out <= {{16{SE_In[15]}},{SE_In[15:0]}};
          end
endmodule
