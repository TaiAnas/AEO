
-- VHDL Instantiation Created from source file x7seg.vhd -- 04:07:04 10/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT x7seg
	PORT(
		sw : IN std_logic_vector(3 downto 0);          
		seven : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;

	Inst_x7seg: x7seg PORT MAP(
		sw => ,
		seven => 
	);


