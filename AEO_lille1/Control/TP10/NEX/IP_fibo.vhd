----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:21:04 11/30/2016 
-- Design Name: 
-- Module Name:    IP_fibo - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity IP_fibo is
generic ( mycode : STD_LOGIC_VECTOR (10 downto 0):= "10000000011");
   port ( 
   clk : in  STD_LOGIC;
   reset : in  STD_LOGIC:='0';
   Tin : in  STD_LOGIC_VECTOR (31 downto 0);
   Tout : out  STD_LOGIC_VECTOR (31 downto 0);
   Ipcode : in  STD_LOGIC_VECTOR (10 downto 0); 
   IPdone : out STD_LOGIC);
end IP_fibo;
architecture dummyfibo of IP_fibo is
-- This is a sample state-machine using enumerated types.
-- This will allow the synthesis tool to select the appropriate
-- encoding style and will make the code more readable.
 
--Insert the following in the architecture before the begin keyword
   --Use descriptive names for the states, like st1_reset, st2_search
   type state_type is (st1_init, st2_fibo, st3_fin); 
   signal state, next_state : state_type; 
   --Declare internal signals for all outputs of the state-machine
   --signal <output>_i : std_logic;  -- example output signal
   --other outputs
	signal IPdone_i, init_i : std_logic := 'Z';
	signal Tout_i, fibobus : STD_LOGIC_VECTOR (31 downto 0) := (others => 'Z');
	signal compt, compt_i :std_logic_vector (7 downto 0) := (others => 'Z');

	COMPONENT fibogen
	PORT(
		clk : IN std_logic;
		init : IN std_logic;          
		fiboout : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;
	
begin

	Inst_fibogen: fibogen PORT MAP(
	clk => clk,
	init => init_i,
	fiboout => fibobus
	);
	
	--compt <= compt_i;
	IPdone <= IPdone_i when mycode = Ipcode else '0';
	Tout <= Tout_i when mycode = Ipcode else ( others=>'Z');
	 --IPdone_i <= IPdone;
	 --IPdone <= '1' when mycode = Ipcode else '0';
    --Tout <= x"12345678" when mycode = Ipcode else ( others=>'Z');
 
--Insert the following in the architecture after the begin keyword
   SYNC_PROC: process (clk)
   begin
      if (clk'event and clk='1') then
         if (reset = '1') then
            state <= st1_init;
            --<output> <= '0';	
         else
            state <= next_state;
				compt <= compt_i;
         -- assign other outputs to internal signals
         end if;        
      end if;
   end process;
 
   --MOORE State-Machine - Outputs based on state only
   OUTPUT_DECODE: process (state)
   begin
      --insert statements to decode internal output signals
      --below is simple example
      
      if(state = st2_fibo) then
         init_i <= '0';
		elsif(state = st3_fin) then
			Tout_i <= fibobus;
			IPdone_i <= '1';
		else
			init_i <= '1';
      end if;
   end process;
 
   NEXT_STATE_DECODE: process (state, compt, Ipcode)
   begin
      --declare default state for next_state to avoid latches
      next_state <= state;  --default is to stay in current state
      --insert statements to decode next_state
      --below is a simple example
		--compt_i <= compt;
		--Tout_i <= (others => 'Z');
      case (state) is
         when st1_init =>
            if mycode = Ipcode then
					compt_i <= Tin(7 downto 0) - x"02";
               next_state <= st2_fibo;
            end if;
				
         when st2_fibo =>
            if compt = "00000000" then
               next_state <= st3_fin;
				else
					compt_i <= compt - x"01";
            end if;
				
         when st3_fin =>
            next_state <= st3_fin;
				
         when others =>
            next_state <= st1_init;
      end case;      
   end process;
end dummyfibo;
