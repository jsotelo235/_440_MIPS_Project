`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      CECS 440                                  //
// Project:    Lab 2 - ALU and ALU Control Modules       //
// File name:  ALU_tb.v                                  //
//                                                       //
// Created by Jose Pacheco on February 27, 2018          //
// Copyright © 2018 Jose Pacheco. All rights reserved.   //
//                                                       //
// Abstract: Test fixture to verify ALU operations.      //
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
module ALU_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] ALU_Ctl;

	// Outputs
	wire Zero_Flag;
	wire [31:0] ALU_result;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Ctl(ALU_Ctl), 
		.Zero_Flag(Zero_Flag), 
		.ALU_result(ALU_result)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALU_Ctl = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

