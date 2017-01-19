
-- VHDL Instantiation Created from source file FSM.vhd -- 00:32:54 10/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT FSM
	PORT(
		sw : IN std_logic_vector(7 downto 0);
		clk : IN std_logic;          
		anodes : OUT std_logic_vector(3 downto 0);
		seven : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_FSM: FSM PORT MAP(
		sw => ,
		clk => ,
		anodes => ,
		seven => 
	);


