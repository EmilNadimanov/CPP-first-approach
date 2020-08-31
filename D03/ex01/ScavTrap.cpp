#include "ScavTrap.hpp"

/* Constructors and the destructor */

					ScavTrap::ScavTrap()
{
	this->hp = 100;
	this->max_hp = 100;
	this->ep = 50;
	this->max_ep = 50;
	this->level = 1;
	this->name = "Sc4vTrap";
	this->meleeDamage = 20;
	this->rangedDamage = 15;
	this->armorReduction = 3;
	std::cout << this->name << " has been created. What a waste of resources."
		<< std::endl;
}

					ScavTrap::ScavTrap(ScavTrap const& obj)
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

					ScavTrap::ScavTrap(std::string name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->ep = 50;
	this->max_ep = 50;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 20;
	this->rangedDamage = 15;
	this->armorReduction = 3;
	std::cout << this->name << ": \"I WAS BORN\"" << std::endl;
}

					ScavTrap::~ScavTrap()
{
	std::cout << this->name << " being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}

/* Operator overload */

ScavTrap const&		ScavTrap::operator=(ScavTrap const& obj)
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

void				ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Fr4G-TP " << name << " challenges " << target <<
		" at range, causing " << rangedDamage << " points of dmg!!!"
		<< std::endl;
	
}

void				ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Fr4G-TP " << name << " challenges " << target
		<< " at range, causing " << meleeDamage << " points of dmg!!!"
		<< std::endl;
}

void				ScavTrap::takeDamage(unsigned int amount)
{
	int dmg;

	dmg = (amount-armorReduction > 0) ? amount-armorReduction : 0;
	std::cout << name << " got hit and lost " <<
		dmg << " hit points!!!" << std::endl;
	hp = (hp - dmg > 0) ? hp - dmg : 0;
	std::cout << "Current HP: " << hp << "\nCurrent EP: " << ep
		<< std::endl;
}

void				ScavTrap::beRepaired(unsigned int amount)
{
	int increase;

	increase = hp = (int(hp + amount) < max_hp) ? hp + amount : max_hp;
	std::cout << "Fr4G-TP " << name << " got repaired and gained " <<
		increase << " hit points! Almost better than new!" << std::endl;
	hp = increase;
	std::cout << "Current HP: " << hp << "\nCurrent EP: " << ep
		<< std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5];
		challenges[0] = "challenges " + target + " to a dance-off.";
		challenges[1] = "asks " + target + " to tell a bedtime story.";
		challenges[2] = "commands " + target + " to bring a horn of a unicorn.";
		challenges[3] = "orders " + target + " to kill a thousand darksiders.";
		challenges[4] = "challenges " + target +
			" to make a backflip. Right here and right now.";
	std::cout << this->name << " tries to hurt " << target;
	if (ep >= 25)
	{
		srand (time(NULL));
		std::cout << ". He " << challenges[rand() % 5] << std::endl;
		ep -= 25;
	}
	else
		std::cout << ". Not today, he lacks energy! He requires 25 ep" <<
			", but currently has " << ep << '.' << std::endl;
}
