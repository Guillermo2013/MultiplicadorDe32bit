`timescale 1ns / 1ps


module MainTF;

	// Inputs
	reg clk;
	reg reset;
	reg [63:0] X;
	reg [31:0] Y;

	// Outputs
	wire [63:0] resultado;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.clk(clk), 
		.reset(reset), 
		.X(X), 
		.Y(Y), 
		.resultado(resultado)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		X = 157;
		Y = 298;
		
		// Wait 100 ns for global reset to finish
		#1;
       reset = 0;
		// Add stimulus here
		#1;
		 
		end		

   always 
		begin
			#1;
			clk = !clk; 	
		end
   
      
endmodule

