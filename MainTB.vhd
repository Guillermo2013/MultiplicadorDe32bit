--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:38:46 11/23/2016
-- Design Name:   
-- Module Name:   C:/Users/Dell/Documents/Multiplicador32bits/Multiplicador32bits/MainTB.vhd
-- Project Name:  Multiplicador32bits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MainMultiplicador32bits
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY MainTB IS
END MainTB;
 
ARCHITECTURE behavior OF MainTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MainMultiplicador32bits
    PORT(
          : OUT  std_logic
        );
    END COMPONENT;
    

 	--Outputs
   signal  : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MainMultiplicador32bits PORT MAP (
           => 
        );

   -- Clock process definitions
   <clock>_process :process
   begin
		<clock> <= '0';
		wait for <clock>_period/2;
		<clock> <= '1';
		wait for <clock>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
