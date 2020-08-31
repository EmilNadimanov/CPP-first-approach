#include "FragTrap.hpp"

//FR4G-TP <name> attacks <target> at range, causing <dmg>  points of dmg!

/* Constructors and the destructor */

					FragTrap::FragTrap()
{
	this->hp = 100;
	this->max_hp = 100;
	this->ep = 100;
	this->max_ep = 100;
	this->level = 1;
	this->name = "Cl4ptr4p";
	this->meleeDamage = 30;
	this->rangedDamage = 20;
	this->armorReduction = 5;
	std::cout << this->name << " has been created. What a waste of resources."
		<< std::endl;
}

					FragTrap::FragTrap(FragTrap const& obj)
{
	this->hp = obj.hp;
	this->max_hp = obj.max_hp;
	this->ep = obj.ep;
	this->max_ep = obj.max_ep;
	this->level = obj.level;
	this->name = obj.name;
	this->meleeDamage = obj.meleeDamage;
	this->rangedDamage = obj.rangedDamage;
	this->armorReduction = obj.armorReduction;
	std::cout << "A FR4G-TP named " << this->name <<
		" has been copied from another FR4G-TP." << std::endl;
}

					FragTrap::FragTrap(std::string name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->ep = 100;
	this->max_ep = 100;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 30;
	this->rangedDamage = 20;
	this->armorReduction = 5;
	std::cout << this->name << ": \"I WAS BORN\"" << std::endl;
}

					FragTrap::~FragTrap()
{
	std::cout << this->name << " being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}

/* Operator overload */

FragTrap const&		FragTrap::operator=(FragTrap const& obj)
{
	std::cout << "A complete copy of " << this->name
		<< " was made. Two is a company!" << std::endl;
	this->hp = obj.hp;
	this->max_hp = obj.max_hp;
	this->ep = obj.ep;
	this->max_ep = obj.max_ep;
	this->level = obj.level;
	this->name = obj.name;
	this->meleeDamage = obj.meleeDamage;
	this->rangedDamage = obj.rangedDamage;
	this->armorReduction = obj.armorReduction;
	return *this;
}

/* Public member functions */

void				FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << name << " attacks " << target <<
		" at range, causing " << rangedDamage << " points of dmg!!!"
		<< std::endl;
	
}

void				FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << name << " attacks " << target
		<< " at range, causing " << meleeDamage << " points of dmg!!!"
		<< std::endl;
}

void				FragTrap::takeDamage(unsigned int amount)
{
	int dmg;

	dmg = (amount-armorReduction > 0) ? amount-armorReduction : 0;
	std::cout << name << " got hit and lost " <<
		dmg << " hit points!!!" << std::endl;
	hp = (hp - dmg > 0) ? hp - dmg : 0;
	std::cout << "Current HP: " << hp << "\nCurrent EP: " << ep
		<< std::endl;
}

void				FragTrap::beRepaired(unsigned int amount)
{
	int increase;

	increase = hp = (int(hp + amount) < max_hp) ? hp + amount : max_hp;
	std::cout << "CL4P-TP " << name << " got repaired and gained " <<
		increase << " hit points! Almost better than new!" << std::endl;
	hp = increase;
	std::cout << "Current HP: " << hp << "\nCurrent EP: " << ep
		<< std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5];
		attacks[0] = "tries to roll " + target + " over. What an idiot.";
		attacks[1] = "tries to kick " + target + ". He has no legs. No result.";
		attacks[2] = "attempts to choke " + target + " with his feeble hands.";
		attacks[3] = "tries to charm " + target + " but is too repulsive"
			+ " to succeed. What a pity.";
		attacks[4] = "does his best to cast a firball at " + target +
			", but fails, as he always does.";
	std::cout << this->name << " tries to hurt " << target;
	if (ep >= 25)
	{
		srand (time(NULL));
		std::cout << ". He " << attacks[rand() % 5] << std::endl;
		ep -= 25;
	}
	else
		std::cout << "Not enough energy! Requires 25, currently has " << ep << std::endl;
	
}
