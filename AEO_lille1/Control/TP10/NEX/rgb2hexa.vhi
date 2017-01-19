
-- VHDL Instantiation Created from source file rgb2hexa.vhd -- 09:03:50 12/16/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT rgb2hexa
	PORT(
		r : IN std_logic_vector(7 downto 0);
		g : IN std_logic_vector(7 downto 0);
		b : IN std_logic_vector(7 downto 0);          
		hexa : OUT std_logic_vector(23 downto 0)
		);
	END COMPONENT;

	Inst_rgb2hexa: rgb2hexa PORT MAP(
		r => ,
		g => ,
		b => ,
		hexa => 
	);


