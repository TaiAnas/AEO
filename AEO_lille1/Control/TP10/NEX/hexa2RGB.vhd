----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:42:34 12/16/2016 
-- Design Name: 
-- Module Name:    hexa2RGB - Behavioral 
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

entity hexa2RGB is
		generic ( width : integer :=  32 );
    Port ( hexa : in  STD_LOGIC_VECTOR (23 downto 0);
           r : out  STD_LOGIC_VECTOR (7 downto 0);
           g : out  STD_LOGIC_VECTOR (7 downto 0);
           b : out  STD_LOGIC_VECTOR (7 downto 0));
end hexa2RGB;

architecture Behavioral of hexa2RGB is

begin

r <= hexa(23 downto 16);
g <= hexa(15 downto 8);
b <= hexa(7 downto 0);

end Behavioral;

