`timescale 1ns / 1ps
module MIPS_Processor( clk, Zero_Flag );
   
   input  clk;
   output Zero_Flag;
   
   wire [31:0] PC_Out,// in mipscore, out pc
               PC_Out_plus4,
               PC_Next,
               SEImm32,//out mipscore
               SL2SEImm32,
               JumpAddress,
               BranchTarget,
               BranchMuxOut,
               OutBM,// out branch mux, in jm 
               AluOut,// out alu, in 
               JumpMuxOut;// in pc, out jm
   wire [25:0] I_Offset;
   wire        Zero_Flag,//out mips core
               Jump_Flag,// out mips core
               PC0_Branch;// out mips core
   
   localparam FOUR_32b = 32'd4;
   localparam ALU_CTL  = 32'd4;
   
   // MIPS core instantiation. 
   MIPS_Core mips_core( .clk( clk ),
                        .ReadAddr( PC_Out ),
                        .SEImm( SEImm32 ),
                        .JumpValue(  ),
                        .Zero( Zero_Flag ),
                        .Branch( PC0_Branch ),
                        .Jump( Jump_Flag ) );
                 
   // PC Instantiation. 
   ProgramCounter pc( .clk( clk ),
                      .PC_In( JumpMuxOut ),
                      .PC_Out( PC_Out ) );
   
   // Branch Mux
   Mux_2to1_by32 jump_mux( .In0( OutBM ),
                           .In1( FOUR_32b ),
                           .Sel( JumpFlag ),
                           .Out( JumpMuxOut ) );
                     
   // 'And' gate to set branch mux
   assign OutAnd = PC0_Branch & Zero_Flag;
                     
   // Jump Mux
   Mux_2to1_by32 branch_mux( .In0( OutAlu ),
                             .In1( BranchTarget ),
                             .Sel( OutAnd ),
                             .Out( OutBM ) );
       
   // PC incrementer. 
   ALU pc_inc( .A( PC_Out ),
               .B( ALU_CTL ),
               .ALU_Ctl( FOUR_32b ),
               .Zero(  ),
               .ALU_Result( OutAlu ) );
               
   // Branch Target Addresser
   ALU bt_addr( .A( AluOut ),
                .B( SL2SEImm32 ),
                .ALU_Ctl( FOUR_32b ),
                .Zero(  ),
                .ALU_Result( BranchTarget ) );  

   // Shift left.
   Left_Shift sl( .clock( clk ),
                  .shift_in( SEImm32 ),
                  .shift_out( SL2SEImm32 ) );

endmodule