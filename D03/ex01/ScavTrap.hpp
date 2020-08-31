#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

class ScavTrap
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
		ScavTrap const&		operator=(ScavTrap const&obj);
							ScavTrap();
							ScavTrap(ScavTrap const& obj);
							ScavTrap(std::string name);
							~ScavTrap();
		void				challengeNewcomer(std::string const & target);
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};
