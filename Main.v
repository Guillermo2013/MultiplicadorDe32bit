module Main(
    input clk,
	 input reset,
	 input [63:0]X,
	 input [31:0]Y,
	 output [63:0]resultado
	 );
	 
 wire [1:0]B_selWire;
 wire [1:0]Q_selWire;
 wire [1:0]A_selWire;
 wire [1:0]N_selWire;
 wire [31:0]Qsub0Wire;
 wire [31:0] N_EQ_0Wire;
 
 FSM FSM_Mult(clk,reset,Qsub0Wire,N_EQ_0Wire,B_selWire,Q_selWire,A_selWire,N_selWire);
 MP MP_Mult(clk,X,Y,B_selWire,Q_selWire,A_selWire,N_selWire,Qsub0Wire,N_EQ_0Wire,resultado);

endmodule
