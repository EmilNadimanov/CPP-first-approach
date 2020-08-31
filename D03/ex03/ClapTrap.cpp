#include "ClapTrap.hpp"

/* Constructors and the destructor */

					ClapTrap::ClapTrap()
{
	this->hp = 70;
	this->max_hp = 70;
	this->ep = 50;
	this->max_ep = 50;
	this->level = 1;
	this->name = "Trashcan";
	this->meleeDamage = 15;
	this->rangedDamage = 10;
	this->armorReduction = 0;
	std::cout << this->name << " of class Claptrap has been created. What a waste of resources."
		<< std::endl;
}

					ClapTrap::ClapTrap(int hp, int max_hp, int ep, int max_ep,
						int level, std::string name, int meleeDamage,
						int rangedDamage, int armorReduction)
{
	this->hp = hp;
	this->max_hp = max_hp;
	this->ep = ep;
	this->max_ep = max_ep;
	this->level = level;
	this->name = name;
	this->meleeDamage = meleeDamage;
	this->rangedDamage = rangedDamage;
	this->armorReduction = armorReduction;
	std::cout << this->name << " of class Claptrap has been created. Called from derived class!"
		<< std::endl;
}

					ClapTrap::ClapTrap(ClapTrap const& obj)
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
	std::cout << "A FR4G-TP of class Claptrap named " << this->name <<
		" has been copied from another FR4G-TP." << std::endl;
}

					ClapTrap::ClapTrap(std::string name)
{
	this->hp = 70;
	this->max_hp = 70;
	this->ep = 50;
	this->max_ep = 50;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 15;
	this->rangedDamage = 10;
	this->armorReduction = 0;
	std::cout << this->name << " of class Claptrap: \"I WAS BORN\"" << std::endl;
}

					ClapTrap::~ClapTrap()
{
	std::cout << this->name << " of class Claptrap being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}

/* Operator overload */

ClapTrap const&		ClapTrap::operator=(ClapTrap const& obj)
{
	std::cout << "A complete copy of " << this->name
		<< " of class Claptrap was made. Two is a company!" << std::endl;
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

void				ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << name << " challenges " << target <<
		" at range, causing " << rangedDamage << " points of dmg!!!"
		<< std::endl;
	
}

void				ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << name << " challenges " << target
		<< " in melee, causing " << meleeDamage << " points of dmg!!!"
		<< std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	int dmg;

	dmg = (amount-armorReduction > 0) ? amount-armorReduction : 0;
	std::cout << name << " got hit and lost " <<
		dmg << " hit points!!!" << std::endl;
	hp = (hp - dmg > 0) ? hp - dmg : 0;
	std::cout << "Current HP: " << hp << "\nCurrent EP: " << ep
		<< std::endl;
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	int increase;

	increase = hp = (int(hp + amount) < max_hp) ? hp + amount : max_hp;
	std::cout << "CL4P-TP " << name << " got repaired and gained " <<
		increase << " hit points! Almost better than new!" << std::endl;
	hp = increase;
	std::cout << "Current HP: " << hp << "\nCurrent EP: " << ep
		<< std::endl;
}

std::string			ClapTrap::getName() const
{
	return this->name;
}
