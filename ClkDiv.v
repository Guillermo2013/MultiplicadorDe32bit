`timescale 1ns / 1ps
module ClkDiv(
    input clk,
    output clk1hz
    );

	reg [24:0] counter;
	reg clk1hz_buff;

	assign clk1hz = clk1hz_buff;

	always @ (posedge clk)
	begin
		 counter = counter + 1;
		 
		 if (counter == 25000000) begin
			  clk1hz_buff = !clk1hz_buff;
			  counter = 25'h0;
		 end
	end

	initial begin
		clk1hz_buff = 0;
		counter = 25'h0;
	end

endmodule
