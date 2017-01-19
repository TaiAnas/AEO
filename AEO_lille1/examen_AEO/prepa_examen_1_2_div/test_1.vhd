----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:31:38 10/19/2016 
-- Design Name: 
-- Module Name:    test_1 - Behavioral 
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

entity test_1 is
    Port ( sw : in  STD_LOGIC_VECTOR (7 downto 0);
           clk : in  STD_LOGIC;
           seven_seg : out  STD_LOGIC_VECTOR (6 downto 0);
			  anodes : out std_logic_vector(3 downto 0));
end test_1;

architecture Behavioral of test_1 is

	COMPONENT FSM
	PORT(
		sw : IN std_logic_vector(15 downto 0);
		clk : IN std_logic;
		anodes : OUT std_logic_vector(3 downto 0);
		seven : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT e190
	PORT(
		clk : IN std_logic;          
		e190 : OUT std_logic;
		clk190 : OUT std_logic
		);
	END COMPONENT;


	
	COMPONENT clk_div
	PORT(
		clk : IN std_logic;
		cpt : out std_logic_vector(15 downto 0));
	END COMPONENT;

	COMPONENT x7seg
	PORT(
		sw : IN std_logic_vector(3 downto 0);          
		seven : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;


	signal s1: std_logic_vector(15 downto 0);
	signal s2 : std_logic_vector(3 downto 0);
	signal s3_e190 : std_logic;
begin

	
	Inst_clk_div: clk_div PORT MAP(
		clk => clk,
		cpt => s1
	);
	
	Inst_e190: e190 PORT MAP(
		clk => clk,
		e190 => s3_e190,
		clk190 => open
	);

	
	Inst_FSM: FSM PORT MAP(
		sw => s1,
		clk => s3_e190,
		anodes => anodes,
		seven => s2
	);

	Inst_x7seg: x7seg PORT MAP(
		sw => s2,
		seven => seven_seg
	);

	
end Behavioral;

