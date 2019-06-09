---------------------------------------------------------------------------
-- instruction_memory_2.vhd - Implementation of A Single-Port, 16 x 16-bit
--                          Instruction Memory.
-- 
-- Notes: refer to headers in single_cycle_core.vhd for the supported ISA.
--
-- Copyright (C) 2006 by Lih Wen Koh (lwkoh@cse.unsw.edu.au)
-- All Rights Reserved. 
--
-- The single-cycle processor core is provided AS IS, with no warranty of 
-- any kind, express or implied. The user of the program accepts full 
-- responsibility for the application of the program and the use of any 
-- results. This work may be downloaded, compiled, executed, copied, and 
-- modified solely for nonprofit, educational, noncommercial research, and 
-- noncommercial scholarship purposes provided that this notice in its 
-- entirety accompanies all copies. Copies of the modified software can be 
-- delivered to persons who use it solely for nonprofit, educational, 
-- noncommercial research, and noncommercial scholarship purposes provided 
-- that this notice in its entirety accompanies all copies.
--
---------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity instruction_memory_2 is
    port ( reset    : in  std_logic;
           clk      : in  std_logic;
           addr_in  : in  std_logic_vector(4 downto 0);
           insn_out : out std_logic_vector(19 downto 0) );
end instruction_memory_2;

architecture behavioral of instruction_memory_2 is

type mem_array is array(0 to 31) of std_logic_vector(19 downto 0);
signal sig_insn_mem : mem_array;

begin
    mem_process: process ( clk,
                           addr_in ) is
  
    variable var_insn_mem : mem_array;
    variable var_addr     : integer;
  
    begin
        if (reset = '1') then
         -- program initialisation :
				-- $2 = 0 (= address of s1)
            var_insn_mem(0)  := X"49020";
				-- load data 192($0) into $3 (= len(s1))
            var_insn_mem(1)  := X"C1031";
				-- $4 = 128 (= address of pattern)
            var_insn_mem(2)  := X"89040";
				-- load data 194($0) into $5 (= len(pattern))
            var_insn_mem(3)  := X"C1052";
				-- initailising $7 (= 1 after the first process is finished and before the second process is started)
            var_insn_mem(4)  := X"09361";
				-- initailising $8 (= n(total))
            var_insn_mem(5)  := X"0800A";
				
			-- process initialisation :
				-- initailising $6 (= len(s) + 1)
            var_insn_mem(6)  := X"0800B";
				-- initialising $10 (= i)
            var_insn_mem(7)  := X"0800C";
				-- initialising $11 (= k)
            var_insn_mem(8)  := X"082A9";
				-- initialising $12 (= n(process))
            var_insn_mem(9) := X"089B9";
				
			-- for loop :
				-- $9 = $2 + $10
            var_insn_mem(10) := X"019D0";
				-- $9 += $11
            var_insn_mem(11) := X"084B9";
				-- load data 0($9) into $13 (= s[i])
            var_insn_mem(12) := X"019E0";
				-- $9 = $4 + $11
            var_insn_mem(13) := X"1BDE1";
				-- load data 0($9) into $14 (= pattern[k])
            var_insn_mem(14) := X"09BB1";
				-- branch to 19 if $13 /= $14 (s[i] /= pattern[k])
            var_insn_mem(15) := X"0BB58";
				-- $11 ++ (k++)
            var_insn_mem(16) := X"09CC1";
				-- branch to 10 if $11 /= $5 (k /= len(pattern))
            var_insn_mem(17) := X"0800B";
				-- $12 ++ (n(process)++)
            var_insn_mem(18) := X"09AA1";
				-- $11 = 0 (k = 0)
            var_insn_mem(19) := X"08A5F";
				-- $10 ++ (i++)
            var_insn_mem(20) := X"0BF68";
            
            -- end : at flag to register
            var_insn_mem(21) := X"09071";
            
            var_insn_mem(22) := X"00000";
            var_insn_mem(23) := X"00000";
            var_insn_mem(24) := X"00000";
            var_insn_mem(25) := X"00000";
            var_insn_mem(26) := X"00000";
            var_insn_mem(27) := X"00000";
            var_insn_mem(28) := X"00000";
            var_insn_mem(29) := X"00000";
            var_insn_mem(30) := X"00000";
            var_insn_mem(31) := X"00000";
        
        elsif (rising_edge(clk)) then
            -- read instructions on the rising clock edge
            var_addr := conv_integer(addr_in);
            insn_out <= var_insn_mem(var_addr);
        end if;

        -- the following are probe signals (for simulation purpose)
        sig_insn_mem <= var_insn_mem;

    end process;
  
end behavioral;
