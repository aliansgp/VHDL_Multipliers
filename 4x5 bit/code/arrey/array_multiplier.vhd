----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:12:25 11/17/2021 
-- Design Name: 
-- Module Name:    array_multiplier - Behavioral 
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

entity array_multiplier is
port (a : in std_logic_vector(3 downto 0);
		b : in std_logic_vector(3 downto 0);
		p : out std_logic_vector(7 downto 0));
end array_multiplier;

architecture Behavioral of array_multiplier is

component add_sub_4_bit is
port( a : in std_logic_vector (3 downto 0);
      b : in std_logic_vector (3 downto 0);
		k : in std_logic;
		s : out std_logic_vector (4 downto 0)
		);
end component;


signal m : std_logic_vector(15 downto 0);
signal n : std_logic_vector(11 downto 0);

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

p(0) <= m(0);
add_sub_4_bit_ins0 : add_sub_4_bit port map(a(3)=>'0',a(2 downto 0) => m(3 downto 1) ,b => m(7 downto 4), k=>'0' ,s(0) => p(1),s(4 downto 1)=> n(3 downto 0));

add_sub_4_bit_ins1 : add_sub_4_bit port map( a => m(11 downto 8) ,b => n(3 downto 0), k=>'0' ,s(0) => p(2),s(4 downto 1)=> n(7 downto 4));

add_sub_4_bit_ins2 : add_sub_4_bit port map(a => m(15 downto 12) ,b => n(7 downto 4), k=>'0' ,s(0) => p(3),s(4 downto 1)=> n(11 downto 8));



end Behavioral;

