
-- Copyright (C) 2002 Morgan Kaufmann Publishers, Inc

-- This file is part of VESTs (Vhdl tESTs).

-- VESTs is free software; you can redistribute it and/or modify it
-- under the terms of the GNU General Public License as published by the
-- Free Software Foundation; either version 2 of the License, or (at
-- your option) any later version. 

-- VESTs is distributed in the hope that it will be useful, but WITHOUT
-- ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
-- FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
-- for more details. 

-- You should have received a copy of the GNU General Public License
-- along with VESTs; if not, write to the Free Software Foundation,
-- Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 

library ieee;  use ieee.std_logic_1164.all;
library ieee_proposed;  use ieee_proposed.electrical_systems.all;

entity comparator is
  port ( terminal a : electrical;
         signal d : out std_ulogic );
end entity comparator;

----------------------------------------------------------------

architecture ideal of comparator is
  constant ref_voltage : real := 5.0;
  quantity vin across a;
begin

  comparator_behavior : process is
  begin
    if vin > ref_voltage / 2.0 then
      d <= '1' after 5 ns;
    else
      d <= '0' after 5 ns;
    end if;
    wait on vin'above(ref_voltage / 2.0);
  end process comparator_behavior;

end architecture ideal;
