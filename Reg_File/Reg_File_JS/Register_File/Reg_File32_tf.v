`timescale 1ns / 1ps

//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <Register_File>                           //
// File name:  ControlUnit.v                             //
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

module Reg_File32_tf;

	// Inputs
	reg [4:0] Read1;
	reg [4:0] Read2;
	reg [4:0] WriteReg;
	reg [31:0] WriteData;
	reg clock;
	reg RegWrite;

	// Outputs
	wire [31:0] Data1;
	wire [31:0] Data2;

	// Instantiate the Unit Under Test (UUT)
	Reg_File32 uut (
		.Read1(Read1), 
		.Read2(Read2), 
		.WriteReg(WriteReg), 
		.WriteData(WriteData), 
		.clock(clock), 
		.RegWrite(RegWrite), 
		.Data1(Data1), 
		.Data2(Data2)
	);

     integer i;     // loop index variable
     
     always #5 clock = ~clock;
     
	initial begin
		// Initialize Inputs
		Read1 = 0;
		Read2 = 0;
		WriteReg = 0;
		WriteData = 0;
		clock = 0;
		RegWrite = 1;
          
          $display("Writing to registers");
          $display("--------------------");
          
          // register initialization loop
          for(i = 0; i < 32; i = i + 1)
          begin
               @(negedge clock)
               begin
                    WriteData = $random;
                    WriteReg = i;
               end
               @(posedge clock)
                    #0; $display("$%d        <-        0x%h", WriteReg, WriteData);
          end
          
          RegWrite = 0;
          
          $display("Reading from registers");
          $display("--------------------");
          
          // read loop
          for(i = 0; i < 32; i = i + 2)
          begin
               @(negedge clock)
               begin
                    Read1 = i;
                    Read2 = i + 1;
                    i = i + 2;
               #0; $display("$%d         =        0x%h", i, Data1);
               #0; $display("$%d         =        0x%h", i+1, Data2);
               end
               
               @(posedge clock)
               begin
                    Read1 = i;
                    Read2 = i + 1;
               #0; $display("$%d         =        0x%h", i, Data1);
               #0; $display("$%d         =        0x%h", i+1, Data2);
               end
          end
          $stop;

	end
      
endmodule

