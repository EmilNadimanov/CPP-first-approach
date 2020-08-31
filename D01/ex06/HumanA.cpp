#include "HumanA.hpp"

			HumanA::HumanA(std::string constr_name, Weapon& constr_weapon)
	{
		weapon = &constr_weapon;
		name = constr_name;
	}

	void 	HumanA::attack()
	{
		std::cout << name << " attacks with " << weapon->getType() << std::endl;
	}
