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

entity IP_hexa2rgb is
	GENERIC (Mycode : std_logic_vector(10 downto 0) := "00000000011"); 
	port (
		Tin:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		IPcode : in std_logic_vector (10 downto 0);
		Tout : out std_logic_vector (31 downto 0):=(others =>'Z');
		Nout:  out std_logic_vector (31 downto 0) :=(others =>'Z');
		N2out:  out std_logic_vector (31 downto 0) :=(others =>'Z')
	); 
end IP_hexa2rgb;




architecture Behavioral of IP_hexa2rgb is
		COMPONENT hexa2RGB
	PORT(
		hexa : IN std_logic_vector(23 downto 0);          
		r : OUT std_logic_vector(7 downto 0);
		g : OUT std_logic_vector(7 downto 0);
		b : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	signal r1,g1,b1 : std_logic_vector(7 downto 0);

begin

	Inst_hexa2RGB: hexa2RGB PORT MAP(
		hexa => Tin(23 downto 0),
		r => r1,
		g => g1,
		b => b1
	);
	
	Tout <= x"000000" & b1 when ipcode(10 downto 0)= Mycode else (others =>'Z');
	Nout <= x"000000" & g1 when ipcode(10 downto 0)= Mycode else (others =>'Z');
	N2out <= x"000000" & r1 when ipcode(10 downto 0)= Mycode else (others =>'Z');

end Behavioral;