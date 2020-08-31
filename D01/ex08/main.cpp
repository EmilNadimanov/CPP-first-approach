#include "Human.hpp"

int main()
{
	std::string op;
	std::string target;
	Human bob;
	target = "Cat";
	std::cout << "Choose your move:\n\t1: Melee attack\n\t2: Ranged attack\n\t3: Intimidating shout\n";
	do {
		std::cout << "Enter type of attack: ";
		std::cin >> op;
	} while(op[1] == '\0' && (op[0] < '1' || op[0] > '3'));
	bob.action(op, target);
}
