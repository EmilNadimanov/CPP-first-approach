#ifndef _NINJA_TRAP_
# define _NINJA_TRAP_

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
							NinjaTrap();
							NinjaTrap(NinjaTrap const& obj);
							NinjaTrap(std::string name);
							~NinjaTrap();
		void				ninjaShoebox(FragTrap const & target);
		void				ninjaShoebox(ScavTrap const & target);
		void				ninjaShoebox(NinjaTrap const & target);
		void				ninjaShoebox(ClapTrap const & target);
};

#endif
