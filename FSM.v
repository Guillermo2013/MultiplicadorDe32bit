`timescale 1ns / 1ps
module FSM(
	 input clk,
	 input reset,
	 input [31:0]Qsub0,
	 input [31:0]N,
	 output reg [1:0]B_sel,
	 output reg[1:0]Q_sel,
	 output reg[1:0]A_sel,
	 output reg[1:0]N_sel
    );
	reg [2:0] current_state;
	reg [2:0] next_state;

	always @(current_state )
	begin
		case (current_state)
		3'b000:
		begin
		//start
			B_sel = 2'b00;
			Q_sel = 2'b00;
			A_sel = 2'b00;
			N_sel = 2'b00;
			//Q[0] == 1
			if (Qsub0[0] )
				next_state = 3'b001;
			else
				next_state = 3'b010;
		end
		3'b001:
		begin
		//Q1
			B_sel = 2'b10;
			Q_sel = 2'b10;
			A_sel = 2'b01;
			N_sel = 2'b10;
			next_state = 3'b010;
		end
		3'b010:
		begin
		//Q2
			B_sel = 2'b01;
			Q_sel = 2'b10;
			A_sel = 2'b10;
			N_sel = 2'b10;
			next_state = 3'b011;
		end
		3'b011:
		begin
		//Q3
			B_sel = 2'b10;
			Q_sel = 2'b01;
			A_sel = 2'b10;
			N_sel = 2'b10;
			next_state = 3'b100;
		end
		3'b100:
		begin
		//Q4
			B_sel = 2'b10;
			Q_sel = 2'b10;
			A_sel = 2'b10;
			N_sel = 2'b01;
			//N == 0
			if(N != 0)
				begin
				//Q[0] == 1
					if (Qsub0[0])
						next_state = 3'b001;
					else
						next_state = 3'b010;
				end
			else
				next_state = 3'b101;
		end
		3'b101:
		begin
			B_sel = 2'b10;
			Q_sel = 2'b10;
			A_sel = 2'b10;
			N_sel = 2'b10;
			next_state = 3'b101;
		end		
		endcase
	end

	always@(posedge clk)
	begin
		if(reset)
			current_state = 3'b000;
		else 
			current_state = next_state;
	end
 
 initial 
 begin
	current_state = 3'b000;
 end
endmodule
