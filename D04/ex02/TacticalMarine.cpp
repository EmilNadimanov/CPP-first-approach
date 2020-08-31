#include "TacticalMarine.hpp"

				TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

				TacticalMarine::TacticalMarine(TacticalMarine const &obj)
{
	*this = obj;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

				TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

void			TacticalMarine::operator=(TacticalMarine const& obj)
{
	obj.battleCry();
}

void 			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void 			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine *copy = new TacticalMarine(*this);
	return copy;
}
