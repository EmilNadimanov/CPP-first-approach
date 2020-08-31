#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

class FragTrap
{
	public:
		int				hp;
		int				max_hp;
		int				ep;
		int				max_ep;
		int				level;
		std::string		name;
		int				meleeDamage;
		int				rangedDamage;
		int				armorReduction;
	public:
		FragTrap const&		operator=(FragTrap const&obj);
							FragTrap();
							FragTrap(FragTrap const& obj);
							FragTrap(std::string name);
							~FragTrap();
		void				vaulthunter_dot_exe(std::string const & target);
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};
