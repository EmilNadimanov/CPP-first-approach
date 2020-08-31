#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	FragTrap Clap;
	Clap.rangedAttack("George Floyd");
	Clap.meleeAttack("Negro");
	Clap.takeDamage(10);
	Clap.takeDamage(1000);
	Clap.beRepaired(10);
	Clap.beRepaired(1000);
	Clap.vaulthunter_dot_exe("Zer0");
	Clap.vaulthunter_dot_exe("Krieg");
	Clap.vaulthunter_dot_exe("Axton");
	Clap.vaulthunter_dot_exe("Salvador");
	Clap.vaulthunter_dot_exe("Maya");
	Clap.vaulthunter_dot_exe("Gauge");
	FragTrap troop("CloopTroop");
	FragTrap Clap2(Clap);

	ScavTrap Scav1;
	ScavTrap Scav2("Scr4v-TP");
	ScavTrap Scav3(Scav2);
	Scav1.challengeNewcomer("Zer0");
	Scav1.challengeNewcomer("Krieg");
	Scav1.challengeNewcomer("Axton");
	Scav1.challengeNewcomer("Salvador");
	Scav1.challengeNewcomer("Maya");
	Scav1.challengeNewcomer("Gauge");
}
