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
			  e190,clk190 : out  STD_LOGIC);
end clk_div;

architecture Behavioral of clk_div is
	signal clkin: std_logic :='0';
begin
	
  process(clk)
    variable q: std_logic_vector(23 downto 0):= X"000000";
    begin   
	
	if clk'event and clk = '1' then
            q := q+1;
    if Q(18)='1' and clkin='0' then 
		E190 <= '1' ;
	    else 
	        E190 <= '0';
	    end if;
        end if;
        clkin<= Q(18);
    end process;
    clk190 <= clkin;

end Behavioral;

