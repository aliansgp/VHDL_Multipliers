entity Booth16_TB is
end entity;

library ieee;
use ieee.std_logic_1164.all;

architecture rtl of Booth16_TB is
    signal CLK   : std_logic;
    signal RST   : std_logic;
    signal M     : std_logic_vector(15 downto 0);
    signal Q     : std_logic_vector(15 downto 0);
    signal valid : std_logic;
    signal P     : std_logic_vector(31 downto 0);
begin
    DUT: entity work.Booth16 port map (
        CLK => CLK,
        RST => RST,
        valid => valid,
        M => M,
        Q => Q,
        P => P
    );

    CLK_prc: process begin
        CLK <= '0', '1' after 10 ns;
        wait for 20 ns;
    end process;

    RST_prc: process begin
        CLK <= '1', '0' after 20 ns;
        wait;
    end process;

    M <= b"0100_0000_0000_0000";
    Q <= b"0100_0000_0000_0000";
end architecture;