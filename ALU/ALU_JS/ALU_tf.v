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

module ALU_tf;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] ALU_Ctl;

	// Outputs
	wire Zero;
	wire [31:0] ALU_Result;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Ctl(ALU_Ctl), 
		.Zero(Zero), 
		.ALU_Result(ALU_Result)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALU_Ctl = 0;

		// Wait 100 ns for global reset to finish
		#10;
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);

		A = 32'h13969681;
		B = 32'h12345678;
          
		ALU_Ctl = 4'b0000;
		#100;
          
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);

		ALU_Ctl = 4'b0001;
		#100;
          
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);

		ALU_Ctl = 4'b0010;
		#100;
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);

		ALU_Ctl = 4'b0110;
		#100;
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);                   

		ALU_Ctl = 4'b0111;
		#100;
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);
                   
		ALU_Ctl = 4'b1100;
		#100;
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);

		ALU_Ctl = 4'b1111;
		#100;
          $display("A=%h, B=%h, ALU_Ctl=%b, Zero=%b, ALU_Result=%h",
                   A, B, ALU_Ctl, Zero, ALU_Result);
	end
      
endmodule

