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

module ALU_Control_tf;

	// Inputs
	reg FuncCode;
	reg [1:0] ALU_op;

	// Outputs
	wire [3:0] ALU_Ctl;

	// Instantiate the Unit Under Test (UUT)
	ALU_Control uut (
		.FuncCode(FuncCode), 
		.ALU_op(ALU_op), 
		.ALU_Ctl(ALU_Ctl)
	);

	initial begin
		// Initialize Inputs
		FuncCode = 6'b0;
		ALU_op = 2'b0;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
          
          // ADD
		{FuncCode, ALU_op} = 8'b100000_10;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);       
        
          // Subtract
		{FuncCode, ALU_op} = 8'b100010_10;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
                    
          // AND
		{FuncCode, ALU_op} = 8'b100100_10;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);

          // OR
		{FuncCode, ALU_op} = 8'b100101_10;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
          
          // SLT
		{FuncCode, ALU_op} = 8'b101010_10;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
                    
          // NOR
		{FuncCode, ALU_op} = 8'b100111_10;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
                    
          // ADDRESS CALCULATION
		{FuncCode, ALU_op} = 8'bxxxxxx_00;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
                    
          // EQUALITY COMPARISON
		{FuncCode, ALU_op} = 8'bxxxxxx_x1;  
		#100;
          
          $display("FuncCode=%b, ALU_op=%b, ALU_Ctl=%b",
                    FuncCode, ALU_op, ALU_Ctl);
                    
          $stop;
	end
      
endmodule

