----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:49:11 11/29/2016 
-- Design Name: 
-- Module Name:    square2 - Behavioral 
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
use IEEE.STD_LOGIC_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity square2 is
	GENERIC (Mycode : std_logic_vector(10 downto 0):="00000000000" );
    Port ( 
				Tin : in  STD_LOGIC_VECTOR (31 downto 0);
           Nin : in  STD_LOGIC_VECTOR (31 downto 0);
           IPcode : in  STD_LOGIC_vector(10 downto 0) ;
           Tout : out  STD_LOGIC_VECTOR (31 downto 0));
end square2;

architecture Behavioral of square2 is
component multiply
	port (
	a: in std_logic_vector(15 downto 0);
	b: in std_logic_vector(15 downto 0);
	p: out std_logic_vector(31 downto 0));
end component;
signal mult_1,mult_2 : std_logic_vector (31 downto 0) ;

-- Synplicity black box declaration
attribute syn_black_box : boolean;
attribute syn_black_box of multiply: component is true;
begin

my_mul16_1 : multiply
		port map (
			a => Tin(15 downto 0),
			b => Tin (15 downto 0),
			p => mult_1);
my_mul16_2 : multiply
		port map (
			a => Nin(15 downto 0),
			b => Nin (15 downto 0),
			p => mult_2);
Tout <= (mult_1 + mult_2) when Mycode = IPcode else (others =>'Z');
end Behavioral;

