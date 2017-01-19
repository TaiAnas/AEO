

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.all;
use IEEE.NUMERIC_STD.ALL;



entity clk_div is
    Port ( clk : in  STD_LOGIC;
           cpt : out  STD_LOGIC_vector(15 downto 0));
end clk_div;

architecture Behavioral of clk_div is

SIGNAL compt : unsigned(27 downto 0):= (others => '0');
signal cpt_s : STD_LOGIC_vector(15 downto 0):= (others => '0');

begin

	process(clk)
	begin
	if(clk'event and clk ='1') then
		compt <= compt+1;
		--17D4A80
		if(compt=x"00A4A80") then
			if(cpt_s(3 downto 0) = x"9") then
				cpt_s(3 downto 0) <= x"0";
				cpt_s(7 downto 4) <= cpt_s(7 downto 4) +1;	
				if cpt_s(7 downto 4) = x"5" then
				cpt_s(7 downto 4) <= x"0";
				cpt_s(11 downto 8) <= cpt_s(11 downto 8)+1;
				end if;
				if(cpt_s(11 downto 8) = x"9") then
				cpt_s(11 downto 8) <= x"0";
				cpt_s(15 downto 12) <= cpt_s(15 downto 12) +1;
					if cpt_s(15 downto 12) = x"5" then
						cpt_s(15 downto 0) <= x"0000";
					end if;
				end if;	
			else
				cpt_s <= cpt_s+1;
			end if;
			compt <= (others => '0');
		end if;
	end if;	
	end process;
		cpt <= cpt_s;
end Behavioral;