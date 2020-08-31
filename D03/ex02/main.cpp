#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	FragTrap Frag;
	Frag.rangedAttack("George Floyd");
	Frag.meleeAttack("a negro");
	FragTrap troop("CloopTroop");
	FragTrap Clap2(Frag);
	std::cout << "+++++++++++\n";
	ScavTrap Scav1;
	ScavTrap Scav2("Scr4v-TP");
	Scav2.rangedAttack("George Floyd");
	Scav2.meleeAttack("Negro");
	ScavTrap Scav3 = ScavTrap(Scav2);
	std::cout << "+++++++++++\n";
}
