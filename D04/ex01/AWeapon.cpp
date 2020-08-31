#include "AWeapon.hpp"


/* CONSTRUCTORS */

				AWeapon::AWeapon()
{}
				AWeapon::AWeapon(std::string const & name, int apCost, int damage)
{
	this->name = name;
	this->apCost = apCost;
	this->damage = damage;
}
				AWeapon::AWeapon(AWeapon const& obj)
{
	this->name = obj.name;
	this->apCost = obj.apCost;
	this->damage = obj.damage;
}

/* DESTRUCTOR */

				AWeapon::~AWeapon()
{}

/* GETTERS AND SETTERS */

std::string /* virtual */	AWeapon::getName() const
{
	return this->name;
}
int				AWeapon::getAPCost() const
{
	return this->apCost;
}
int				AWeapon::getDamage() const
{
	return this->damage;
}

/* OPERATOR OVERLOADS */

void			AWeapon::operator=(AWeapon const& obj)
{
	this->name = obj.name;
	this->apCost = obj.apCost;
	this->damage = obj.damage;
}

/* MEMBER FUNCTIONS */

