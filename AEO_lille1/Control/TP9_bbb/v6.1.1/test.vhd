 -- ================= new IP ================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
entity IPrgb is
generic ( mycode : STD_LOGIC_VECTOR (10 downto 0):= "00000000111");
   port ( 
   clk : in  STD_LOGIC;
   reset : in  STD_LOGIC:='0';
   Tin : in  STD_LOGIC_VECTOR (31 downto 0);
   Nin : in  STD_LOGIC_VECTOR (31 downto 0);
   N2in : in  STD_LOGIC_VECTOR (31 downto 0);
   Tout : out  STD_LOGIC_VECTOR (31 downto 0);
   Ipcode : in  STD_LOGIC_VECTOR (10 downto 0)
end IPrgb;
