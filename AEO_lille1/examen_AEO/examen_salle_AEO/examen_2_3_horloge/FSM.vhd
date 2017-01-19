
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;




entity FSM is
    Port ( sw : in  STD_LOGIC_VECTOR (15 downto 0);
			  clk : in std_logic;
           anodes : out  STD_LOGIC_VECTOR (3 downto 0);
           seven : out  STD_LOGIC_VECTOR (3 downto 0));
end FSM;
architecture Behavioral of FSM is


   type state_type is (st1, st2,st3,st4); 
   signal state, next_state : state_type; 
  
   signal anodes_i : std_logic_vector(3 downto 0); 
	signal seven_i : std_logic_vector(3 downto 0);
	
	signal data : std_logic_vector(15 downto 0);
	
begin

	data(15 downto 0) <= sw;
	

   SYNC_PROC: process (clk)
   begin
      if (clk'event and clk = '1') then
            state <= next_state;
            anodes <= anodes_i;
				seven <= seven_i;
      end if;
   end process;


  OUTPUT_DECODE: process (state)
   begin
      if state = st1 then
         anodes_i <= "1110";
			seven_i <= data(3 downto 0);
      elsif state = st2 then
         anodes_i <= "1101";
			seven_i <= data(7 downto 4);
      elsif state = st3 then
         anodes_i <= "1011";
			seven_i <= data(11 downto 8);
      elsif state = st4 then
         anodes_i <= "0111";
			seven_i <= data(15 downto 12);
      end if;
   end process;
 
 
   NEXT_STATE_DECODE: process (state,sw)
	
   begin
      next_state <= state;  

      case (state) is
         when st1 =>
               next_state <= st2;
			when st2 =>
               next_state <= st3;
			when st3 =>
					next_state <= st4;
			when others =>
            next_state <= st1;
      end case;      
   end process;
	
	
end Behavioral;
