----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:45:33 12/16/2016 
-- Design Name: 
-- Module Name:    hexa2RGBinverse - Behavioral 
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

entity rgb2hexa is
    Port ( r : in  STD_LOGIC_VECTOR (7 downto 0);
           g : in  STD_LOGIC_VECTOR (7 downto 0);
           b : in  STD_LOGIC_VECTOR (7 downto 0);
           hexa : out  STD_LOGIC_VECTOR (23 downto 0));
end rgb2hexa;

architecture Behavioral of hexa2RGBinverse is

begin

hexa <= r & g & b;

end Behavioral;

