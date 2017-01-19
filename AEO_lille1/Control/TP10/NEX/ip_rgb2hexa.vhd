----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:36:58 11/22/2016 
-- Design Name: 
-- Module Name:    IP_interval - Behavioral 
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

entity IP_rgb2hexa is
	GENERIC (Mycode : std_logic_vector(10 downto 0) := "00000000111"); 
	port (
		Tin:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		Nin:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		N2in:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		IPcode : in std_logic_vector (10 downto 0);
		Tout : out std_logic_vector (31 downto 0):=(others =>'Z')
	); 
end IP_rgb2hexa;




architecture Behavioral of IP_rgb2hexa is
	COMPONENT rgb2hexa
	PORT(
		r : IN std_logic_vector(7 downto 0);
		g : IN std_logic_vector(7 downto 0);
		b : IN std_logic_vector(7 downto 0);          
		hexa : OUT std_logic_vector(23 downto 0)
		);
	END COMPONENT;

	
	
	signal hexa_sig: std_logic_vector(31 downto 0);

begin

	Inst_rgb2hexa: rgb2hexa PORT MAP(
		r => Tin(7 downto 0),
		g => Nin(7 downto 0),
		b => N2in(7 downto 0),
		hexa => hexa_sig(23 downto 0)
	);


	Tout <=  hexa_sig when ipcode(10 downto 0)= Mycode else (others =>'Z');
	
end Behavioral;