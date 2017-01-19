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

entity IP_interval is
	GENERIC (Mycode : std_logic_vector(10 downto 0) := "00000011000"); 
	port (
		Tin:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		Nin:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		N2in:  in std_logic_vector (31 downto 0) :=(others =>'Z');
		IPcode : in std_logic_vector (10 downto 0);
		Tout : out std_logic_vector (31 downto 0):=(others =>'Z');
		Nout:  out std_logic_vector (31 downto 0) :=(others =>'Z');
		N2out:  out std_logic_vector (31 downto 0) :=(others =>'Z')
	); 
end IP_interval;




architecture Behavioral of IP_interval is
	COMPONENT interval
	PORT(
		A : IN std_logic_vector(31 downto 0);
		B : IN std_logic_vector(31 downto 0);
		C : IN std_logic_vector(31 downto 0);          
		X : OUT std_logic_vector(31 downto 0);
		Y : OUT std_logic_vector(31 downto 0);
		Z : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
	signal x1,y1,z1 : std_logic_vector(31 downto 0);

begin

	Inst_interval: interval PORT MAP(
		A => N2in,
		B => Nin,
		C => Tin,
		X => x1,
		Y => y1,
		Z => z1
	);
	
	Tout <= z1 when ipcode(10 downto 0)= Mycode else (others =>'Z');
	Nout <= y1 when ipcode(10 downto 0)= Mycode else (others =>'Z');
	N2out <= x1 when ipcode(10 downto 0)= Mycode else (others =>'Z');

end Behavioral;
