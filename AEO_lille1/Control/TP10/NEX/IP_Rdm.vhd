----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:36:58 11/22/2016 
-- Design Name: 
-- Module Name:    IP_Rdm - Behavioral 
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

entity IP_Rdm is
	GENERIC (Mycode : std_logic_vector(10 downto 0) := "00000010000"); 
	port (
		clk , reset : in std_logic; 
		Nout:  out std_logic_vector (31 downto 0) :=(others =>'Z');
		IPcode : in std_logic_vector (10 downto 0);
		Tout : out std_logic_vector (31 downto 0):=(others =>'Z')
	); 
end IP_Rdm;




architecture Behavioral of IP_Rdm is
COMPONENT random
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		enable : IN std_logic; 		
		random_num : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	signal s_enable : std_logic;
	signal sorti_rdm : std_logic_vector(31 downto 0);
begin

	Inst_random: random PORT MAP(
		clk => clk,
		reset => reset,
		enable => s_enable,
		random_num => sorti_rdm
	);
	
	s_enable <= '1' when ipcode(10 downto 0)= Mycode or reset ='1'  else '0';
	Nout <= x"00000" & sorti_rdm(11 downto 0) when ipcode(10 downto 0)= Mycode else (others =>'Z');
	Tout <= x"00000" & sorti_rdm(23 downto 12) when ipcode(10 downto 0)= Mycode else (others =>'Z');

end Behavioral;

