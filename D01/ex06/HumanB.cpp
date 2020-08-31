#include "HumanB.hpp"

				HumanB::HumanB(std::string constr_name) : weapon() 
		{
				name = constr_name;				
		}

		void	HumanB::setWeapon(Weapon& constr_weapon)
		{
				weapon = &constr_weapon;
		}		
		void	HumanB::attack()
		{
				std::cout << name << " attacks with " << weapon->getType() << std::endl;
		}
