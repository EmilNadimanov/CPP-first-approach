// Implement all these functions, the first three will simply output something to the
// standard output so you can see they’ve been called.
// The last one will have to call the appropriate action on the appropriate target. 
// You must use an array of pointers to members to select which function to call:
// using multiple if statements, or switch statements, is FORBIDDEN.

#include "Human.hpp"
/* PRIVATE member functions */
void	Human::meleeAttack(std::string const & target)
{
	std::cout << target << " was hit by a melee attack." << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << target << " was hit by a ranged attack." << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << target << " is intimidated now becuase you used an Intimidating shout." << std::endl;
}

/* PUBLIC member functions */
void	Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*p[3])(std::string const &); //array of pointers to member functions
		p[0] = &Human::meleeAttack;
		p[1] = &Human::rangedAttack;
		p[2] = &Human::intimidatingShout;
	(this->*p[action_name[0] - 49])(target);
}
