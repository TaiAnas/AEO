
-- VHDL Instantiation Created from source file clk_div.vhd -- 16:19:04 10/20/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT clk_div
	PORT(
		clk : IN std_logic;
		btn : IN std_logic;          
		cpt : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_clk_div: clk_div PORT MAP(
		clk => ,
		btn => ,
		cpt => 
	);


