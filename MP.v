`timescale 1ns / 1ps

module MP(
	 input clk,
    input [63:0]X,
	 input [31:0]Y,
	 input [1:0]B_sel,
	 input [1:0]Q_sel,
	 input [1:0]A_sel,
	 input [1:0]N_sel,
	 output reg[31:0] Qsub0,
	 output reg[31:0] N_EQ_0,
	 output reg[63:0]resultado
	 );
	 
reg [63:0]B;
reg [31:0]Q;
reg [63:0]A;
reg [31:0]N;


	always@(B_sel)
	begin 
		case(B_sel)
		2'b00:B = X;
		2'b01:B = B << 1;
		2'b11:B = B;
		endcase
	end
	 
	always@(Q_sel)
	begin 
		case(Q_sel)
		2'b00:begin Q = Y;  end 
		2'b01:begin Q = Q >> 1; end 
		2'b11:begin Q = Q;  end 
		endcase
	end

	always@(A_sel)
	begin 
		case(A_sel)
		2'b00:begin A = 0; end
		2'b01:begin A = A + B;end
		2'b11:begin A = A; end
		endcase
	end

	always@(N_sel)
	begin 
		case(N_sel)
		2'b00:begin N = 32;end
		2'b01:begin N = N - 1; end
		2'b11:begin N = N; end 
		endcase
		
	end
	always @(posedge clk or N_sel or Q_sel)
	begin
		resultado = A;
		N_EQ_0 = N;
		Qsub0 = Q;	
	end

endmodule
