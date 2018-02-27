`timescale 1ns / 1ps
//*****************************************************************//
//  This document contains information proprietary to the		    //
//  CSULB student that created the file - any reuse without		    //
//  adequate approval and documentation is prohibited				    //
//  																					 //
//  Class: CECS 440																 //
//  Project name: Lab 2 - ALU and ALU Control Modules					 //
//  File name: ALU.v															    //
// 																				    //
//  Created by Jose Pacheco on February 27, 2018						 //
//  Copyright © 2018 Jose Pacheco. All rights reserved.				 //
//  																					 //
//  Abstract: 32-bit Arithmetic Logic Unit used to perform various //
//  calculations on 32-bit integers. There are currently 6		    //
//  operations to be performed.												 //
//																						 //
//																						 //
//  In submitting this file for class work at CSULB                //
//  I am confirming that this is my work and the work              //
//  of no one else.																 //
//																						 //
//  In the event other code sources are utilized I will            //
//  document which portion of code and who is the author           //
//																						 //
//  In submitting this code I acknowledge that plagiarism          //
//  in student project work is subject to dismissal from the class //
//*****************************************************************//
module ALU(A, B, ALU_Ctl, Zero_Flag, ALU_result);
	
	input [31:0]  A;
	input [31:0]  B;
	input [3:0]   ALU_Ctl;
	
	output 		  Zero_Flag;
	
	output [31:0] ALU_result; //output
	reg    [31:0] ALU_result; //output
	
	parameter AND = 0000,
				 OR  = 0001,
				 ADD = 0010,
				 SUB = 0110,
				 SLT = 0111,
				 NOR = 1100;
				 
	always@(*) begin
		case(ALU_Ctl)
			AND: 		ALU_result =  A & B;
			OR:  		ALU_result =  A | B;
			ADD: 		ALU_result =  A + B;
			SUB: 		ALU_result =  A - B;
			SLT: 		ALU_result = (A < B) ? (32'h1) : (32'h0);
			NOR: 		ALU_result = ~(A|B);
			default: ALU_result = 4'b0000;
		endcase
	end
			
	assign Zero_Flag = (ALU_result == 0) ? 1 : 0; 

endmodule
