
-- VHDL Instantiation Created from source file IP_interval.vhd -- 09:28:54 12/14/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT IP_interval
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		Tin : IN std_logic_vector(31 downto 0);
		Nin : IN std_logic_vector(31 downto 0);
		N2in : IN std_logic_vector(31 downto 0);
		IPcode : IN std_logic_vector(10 downto 0);          
		Tout : OUT std_logic_vector(31 downto 0);
		Nout : OUT std_logic_vector(31 downto 0);
		N2out : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_IP_interval: IP_interval PORT MAP(
		clk => ,
		reset => ,
		Tin => ,
		Nin => ,
		N2in => ,
		IPcode => ,
		Tout => ,
		Nout => ,
		N2out => 
	);


