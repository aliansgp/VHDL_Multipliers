--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:50:37 11/17/2021
-- Design Name:   
-- Module Name:   E:/az7/common_multiplier4x5_tb.vhd
-- Project Name:  az7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: common_multiplier4x5
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
 
ENTITY common_multiplier4x5_tb IS
END common_multiplier4x5_tb;
 
ARCHITECTURE behavior OF common_multiplier4x5_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT common_multiplier4x5
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(4 downto 0);
         p : OUT  std_logic_vector(8 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal p : std_logic_vector(8 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: common_multiplier4x5 PORT MAP (
          a => a,
          b => b,
          p => p
        );
 a <= "0111", "1111" after 20 ns;
 b <= "01000", "10000" after 20 ns;
END;
