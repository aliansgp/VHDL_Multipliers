----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:03:23 11/19/2021 
-- Design Name: 
-- Module Name:    carry_save_multiplier - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity carry_save_multiplier is
port (  a : in std_logic_vector(3 downto 0);
		  b : in std_logic_vector(4 downto 0);
		  p : out std_logic_vector(8 downto 0)
		  );
end carry_save_multiplier;

architecture Behavioral of carry_save_multiplier is

component full_adder is
Port ( i0 : in  STD_LOGIC;
           i1 : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           sum : out  STD_LOGIC;
           cout : out  STD_LOGIC);
end component;
component half_adder is
port(		a : in  STD_LOGIC;
         b : in  STD_LOGIC;
         sum : out  STD_LOGIC;
         c : out  STD_LOGIC );
end component;

signal m : std_logic_vector(19 downto 0);
signal s : std_logic_vector(7 downto 0);
signal c : std_logic_vector(13 downto 0);

begin

m(0) <= b(0) and a(0);
m(1) <= b(0) and a(1);
m(2) <= b(0) and a(2);
m(3) <= b(0) and a(3);
m(4) <= b(1) and a(0);
m(5) <= b(1) and a(1);
m(6) <= b(1) and a(2);
m(7) <= b(1) and a(3);
m(8) <= b(2) and a(0);
m(9) <= b(2) and a(1);
m(10) <= b(2) and a(2);
m(11) <= b(2) and a(3);
m(12) <= b(3) and a(0);
m(13) <= b(3) and a(1);
m(14) <= b(3) and a(2);
m(15) <= b(3) and a(3);
m(16) <= b(4) and a(0);
m(17) <= b(4) and a(1);
m(18) <= b(4) and a(2);
m(19) <= b(4) and a(3);

p(0) <= m(0);

half_adder_ins0 : half_adder port map(a => m(1), b => m(4), sum => p(1), c => c(0));
half_adder_ins1 : half_adder port map(a => m(2), b => m(5), sum => s(0), c => c(1));
half_adder_ins2 : half_adder port map(a => m(3), b => m(6), sum => s(1), c => c(2));

full_adder_ins0 : full_adder port map(i0 => m(8), i1 => s(0), cin => c(0),sum => p(2), cout => c(3));
full_adder_ins1 : full_adder port map(i0 => m(9), i1 => s(1), cin => c(1),sum => s(2), cout => c(4));
full_adder_ins2 : full_adder port map(i0 => m(10), i1 => m(7), cin => c(2),sum => s(3), cout => c(5));

full_adder_ins3 : full_adder port map(i0 => m(12), i1 => s(2), cin => c(3),sum => p(3), cout => c(6));
full_adder_ins4 : full_adder port map(i0 => m(13), i1 => s(3), cin => c(4),sum => s(4), cout => c(7));
full_adder_ins5 : full_adder port map(i0 => m(14), i1 => m(11), cin => c(5),sum => s(5), cout => c(8));

full_adder_ins6 : full_adder port map(i0 => m(16), i1 => s(4), cin => c(6),sum => p(4), cout => c(9));
full_adder_ins7 : full_adder port map(i0 => m(17), i1 => s(5), cin => c(7),sum => s(6), cout => c(10));
full_adder_ins8 : full_adder port map(i0 => m(18), i1 => m(15), cin => c(8),sum => s(7), cout => c(11));

half_adder_ins3 : half_adder port map(a => c(9), b => s(6), sum => p(5), c=> c(12));
full_adder_ins9 : full_adder port map(i0 => c(10), i1 => s(7), cin => c(12),sum => p(6), cout => c(13));
full_adder_ins10 : full_adder port map(i0 => c(11), i1 => m(19), cin => c(13),sum => p(7), cout => p(8));


end Behavioral;

