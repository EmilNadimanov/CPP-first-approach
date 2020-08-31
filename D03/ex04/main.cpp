#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int	main()
{
	SuperTrap Frag;
	Frag.rangedAttack("George Floyd");
	Frag.meleeAttack("a negro");
	FragTrap troop("CloopTroop");
	FragTrap Clap2(Frag);
	std::cout << "+++++++++++\n";
	NinjaTrap Scav1;
	NinjaTrap Scav2("Scr4v-TP");
	Scav2.rangedAttack("George Floyd");
	Scav2.meleeAttack("Negro");
	NinjaTrap Scav3 = NinjaTrap(Scav2);
	std::cout << "+++++++++++\n";
}
