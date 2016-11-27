`timescale 1ns / 1ps


module FSMTF;

	// Inputs
	reg clk;
	reg reset;
	reg Qsub0;
	reg N_EQ_0;

	// Outputs
	wire [1:0] B_sel;
	wire [1:0] Q_sel;
	wire [1:0] A_sel;
	wire [1:0] N_sel;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.reset(reset), 
		.Qsub0(Qsub0), 
		.N_EQ_0(N_EQ_0), 
		.B_sel(B_sel), 
		.Q_sel(Q_sel), 
		.A_sel(A_sel), 
		.N_sel(N_sel)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		Qsub0 = 0;
		N_EQ_0 = 0;

		// Wait 100 ns for global reset to finish
		#1;
		N_EQ_0 = 1;
        
		// Add stimulus here

	end
      always
			
endmodule

