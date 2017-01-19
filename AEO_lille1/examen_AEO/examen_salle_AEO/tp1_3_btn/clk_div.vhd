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
			  btn : in std_logic;
			  cpt : out  STD_LOGIC_vector(15 downto 0));
end clk_div;

architecture Behavioral of clk_div is
	
begin
	
	process(clk,btn)
		variable compt :std_logic_vector(15 downto 0):= (others =>'0');
		variable cpt_v : unsigned( 27 downto 0):=(others => '0');
	begin
	if(clk'event and clk ='1') then
		cpt_v := cpt_v+1;
		if(cpt_v=x"55D4A80") then
			if btn = '1' then
				compt := compt+1;
			else 
				compt := compt;
			end if;
				cpt_v := x"0000000";
		end if;
	end if;
		cpt <= compt; 
	end process;
	

end Behavioral;
