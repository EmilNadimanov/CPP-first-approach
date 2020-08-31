#include "Character.hpp"

/* CONSTRUCTORS */

			Character::Character()
{
	this->name = "The Dweller";
	this->ap = 40;
	this->weapon = NULL;
}
			Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}
			Character::Character(Character const& obj)
{
	this->name = obj.name;
	this->ap = obj.ap;
	*(this->weapon) = *(obj.weapon);
}

/* DESTRUCTOR */

			Character::~Character()
{

}

/* GETTERS AND SETTERS */

std::string		Character::getName() const
{
	return this->name;
}

int 			Character::getAP() const
{
	return this->ap;
}

AWeapon*		Character::getWeapon() const
{
	return this->weapon;
}

/* OPERATOR OVERLOADS */

void		Character::operator=(Character const& obj)
{
	this->name = obj.name;
	this->ap = obj.ap;
	*(this->weapon) = *(obj.weapon);
}

std::ostream&		operator<<(std::ostream& os, Character const& ch)
{
	if (!ch.getWeapon())
		os << ch.getName() << " has " << ch.getAP()
			<< " AP and is unarmed" << std::endl;
	else
		os << ch.getName() << " has " << ch.getAP()
			<< " AP and wields a " << ch.getWeapon()->getName() << std::endl;
	return os;
}

/* MEMBER FUNCTIONS */

void		Character::recoverAP()
{
	this->ap = (ap + 10 >= 40) ? 40 : ap + 10;
}

void		Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

void		Character::attack(Enemy* foe)
{
	if (!this->weapon || ap - weapon->getAPCost() < 0)
		return;
	std::cout << name << " attacks " << foe->getType() <<
		" with a " << weapon->getName() << std::endl;
	ap = ap - weapon->getAPCost();
	weapon->attack();
	foe->takeDamage(weapon->getDamage());
	if (foe->getHP() <= 0)
		delete (foe);
}
