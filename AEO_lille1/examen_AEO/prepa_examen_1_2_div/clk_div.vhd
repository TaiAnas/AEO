----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:31:43 10/18/2016 
-- Design Name: 
-- Module Name:    clk_div - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity clk_div is
    Port ( clk : in  STD_LOGIC;
			  cpt : out  STD_LOGIC_vector(15 downto 0));
end clk_div;

architecture Behavioral of clk_div is
	
begin
	
	process(clk)
		variable	cpt_v : std_logic_vector (15 downto 0):=(others => '0');
		variable compt : unsigned(27 downto 0):= (others => '0');
	begin
	if(clk'event and clk ='1') then
			compt := compt +1;
		if compt = x"55D4A80" then 
			cpt_v := cpt_v +1;
			compt := (others =>'0');
		end if;
	end if;
		cpt <= cpt_v;
	end process;
	

end Behavioral;

