
-- VHDL Instantiation Created from source file hexa2RGB.vhd -- 08:55:02 12/16/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT hexa2RGB
	PORT(
		hexa : IN std_logic_vector(23 downto 0);          
		r : OUT std_logic_vector(7 downto 0);
		g : OUT std_logic_vector(7 downto 0);
		b : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_hexa2RGB: hexa2RGB PORT MAP(
		hexa => ,
		r => ,
		g => ,
		b => 
	);


