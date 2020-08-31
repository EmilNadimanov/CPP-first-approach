#include "Enemy.hpp"


/* CONSTRUCTORS */

				Enemy::Enemy()
{
	this->type = "Ghoul";
	this->hp = 10;
}
				Enemy::Enemy(int hp, std::string const & type)
{
	this->type = type;
	this->hp = hp;
}
				Enemy::Enemy(Enemy const& obj)
{
	this->type = obj.type;
	this->hp =obj.hp;
}

/* DESTRUCTOR */

				Enemy::~Enemy()
{}

/* GETTERS AND SETTERS */

std::string	/**/Enemy::getType() const
{
	return this->type;
}

int				Enemy::getHP() const
{
	return this->hp;
}


/* OPERATOR OVERLOADS */

void			Enemy::operator=(Enemy const& obj)
{
	this->type = obj.type;
	this->hp = obj.hp;
}

/* MEMBER FUNCTIONS */

void			Enemy::takeDamage(int dmg)
{
	if (dmg <= 0)
		return;
	hp =  (hp - dmg < 0) ? 0 : hp - dmg;
}