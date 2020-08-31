#include "HumanA.hpp"
#include "HumanB.hpp"

// Now, create two classes, HumanA and HumanB, that both have a Weapon,
// a name, and an attack() function that displays something like :
// NAME attacks with his WEAPON_TYPE
// Make it so the following code produces attacks with "crude spiked club"
// THEN "some other type of club", in both test cases :

int main()
{
	{
		Weapon			club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon			club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

// In which case is it appropriate to store the Weapon as a pointer ? As a reference ?
// Why? Is it the best choice in light of what’s asked ? These are the questions you should
// ask yourself before turning in this exercise