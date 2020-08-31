#ifndef _FRAG_TRAP_
# define _FRAG_TRAP_

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
							FragTrap();
							FragTrap(FragTrap const& obj);
							FragTrap(std::string name);
							~FragTrap();
		void				vaulthunter_dot_exe(std::string const & target);
};

#endif
