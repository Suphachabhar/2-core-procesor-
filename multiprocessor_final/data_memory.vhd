---------------------------------------------------------------------------
-- data_memory.vhd - Implementation of A Single-Port, 16 x 16-bit Data
--                   Memory.
-- 
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

entity data_memory is
    port ( reset        : in  std_logic;
           clk          : in  std_logic;
           read_enable_1  : in  std_logic;
           write_enable_1 : in  std_logic;
           write_data_1   : in  std_logic_vector(15 downto 0);
           addr_in_1     : in  std_logic_vector(7 downto 0);
           read_enable_2  : in  std_logic;
           write_enable_2 : in  std_logic;
           write_data_2   : in  std_logic_vector(15 downto 0);
           addr_in_2     : in  std_logic_vector(7 downto 0);
           s1				: in  STD_LOGIC_VECTOR (1023 downto 0);
           s2				: in  STD_LOGIC_VECTOR (1023 downto 0);
           pattern		: in  STD_LOGIC_VECTOR (1023 downto 0);
			  len_s1			: in  STD_LOGIC_VECTOR (15 downto 0);
			  len_s2			: in  STD_LOGIC_VECTOR (15 downto 0);
			  len_pattern	: in  STD_LOGIC_VECTOR (15 downto 0);
           data_out_1     : out std_logic_vector(15 downto 0);
           data_out_2     : out std_logic_vector(15 downto 0);
           n_out				: out STD_LOGIC_VECTOR (15 downto 0);
           n_in				: in STD_LOGIC_VECTOR (15 downto 0) );
end data_memory;

architecture behavioral of data_memory is

type mem_array is array(0 to 195) of std_logic_vector(15 downto 0);
signal sig_data_mem : mem_array;

begin
    mem_process: process ( clk,
                           read_enable_1,
                           write_enable_1,
                           write_data_1,
                           addr_in_1,
                           read_enable_2,
                           write_enable_2,
                           write_data_2,
                           addr_in_2,
									s1,
									s2,
									pattern,
									len_s1,
									len_s2,
                                    len_pattern,
                                    n_in) is
  
    variable var_data_mem : mem_array;
    variable var_addr_1     : integer;
    variable var_addr_2     : integer;
	 variable i_word		  : integer;
	 variable space_total  : integer;
  
    begin
        var_addr_1 := conv_integer(addr_in_1);
        var_addr_2 := conv_integer(addr_in_2);
        
        if (reset = '1') then
            var_data_mem(192)  := len_s1;
            var_data_mem(193)  := len_s2;
            var_data_mem(194)  := len_pattern;
            var_data_mem(195)  := X"0000";
				-- var_data_mem(0 to 63)		:= s1
				-- var_data_mem(64 to 127)		:= s2
				-- var_data_mem(128 to 191)	:= pattern
				for i in 0 to 63 loop
					i_word			  		:= 16 * (64 - i - 1);
					var_data_mem(i)		:= s1((i_word + 15) downto i_word);
					var_data_mem(i + 64)	:= s2((i_word + 15) downto i_word);
					var_data_mem(i + 128):= pattern((i_word + 15) downto i_word);
				end loop;

        elsif (falling_edge(clk)) then
            -- memory writes on the falling clock edge
            if (write_enable_1 = '1') then
                var_data_mem(var_addr_1) := write_data_1;
            end if;
            if (write_enable_2 = '1') then
                var_data_mem(var_addr_2) := write_data_2;
            end if;
            if (read_enable_1 = '1') then
                data_out_1 <= var_data_mem(var_addr_1);
            end if;
            if (read_enable_2 = '1') then
                data_out_2 <= var_data_mem(var_addr_2);
            end if;
				var_data_mem(195) := n_in;
        end if;
 
        -- the following are probe signals (for simulation purpose) 
        sig_data_mem <= var_data_mem;
			n_out <= var_data_mem(195);

    end process;
  
end behavioral;
