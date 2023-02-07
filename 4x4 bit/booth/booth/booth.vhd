library ieee;
use ieee.std_logic_1164.all;

entity Booth16 is
    port (
        CLK   : in  std_logic;
        RST   : in  std_logic;
        M     : in  std_logic_vector(15 downto 0);
        Q     : in  std_logic_vector(15 downto 0);
        valid : out std_logic;
        P     : out std_logic_vector(31 downto 0)
        );
end entity;

library ieee;
use ieee.std_logic_unsigned.all;

architecture rtl of Booth16 is
begin
    process(CLK)
        variable a : std_logic_vector(15 downto 0);
        variable b : std_logic_vector(15 downto 0);
        variable s : std_logic_vector(32 downto 0) := (others => '0');
        variable incre : integer:= 0; 
        variable valid1 : std_logic:= '1';
    begin
        if RST = '1' then
            valid1 := '0';
            valid <= '0';
            s := (others => '0');
            P <= (others => '-');
            a := M;
            s(16 downto 1) := Q;
        elsif rising_edge(CLK) and valid1 = '0' then
            incre := incre + 1;
            if(s(1) = '1' and s(0) = '0') then
                b := s(32 downto 17);
                s(32 downto 17) := b(15 downto 0) - a(15 downto 0);
            elsif (s(1) = '0' and s(0) = '1') then
                b := s(32 downto 17);
                s(32 downto 17) := b(15 downto 0) + a(15 downto 0);
            end if;
            s(31 downto 0) := s(32 downto 1);
        end if;
        if incre = 16 then
            P(31 downto 0) <= s(32 downto 1);
            valid1 := '1';
            valid <= '1';
            incre := 0;
        end if;
    end process;
end architecture;