#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp" 

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	AssaultTerminator* jim = new AssaultTerminator;
	AssaultTerminator* jack = jim->clone();
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jack);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}