#include "Sorcerer.hpp"

/* CONSTRUCTORS */

						Sorcerer::Sorcerer()
{
	this->name = "Merlin";
	this->title = "The curious";
	std::cout << name << " , " << title << " is born!" << std::endl;
}

						Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << " , " << title << " is born!" << std::endl;
}

						Sorcerer::Sorcerer(Sorcerer const& obj)
{
	this->name = obj.name;
	this->title = obj.title;
	std::cout << name << " , " << title << " is born!" << std::endl;
}

/* DESTRUCTOR */

						Sorcerer::~Sorcerer()
{
	std::cout << this->name << " , " << this->title << " , is dead. Consequences will never be the same !" << std::endl;
}

/* GETTERS AND SETTERS */

std::string				Sorcerer::getName(void) const
{
	return this->name;
}

std::string				Sorcerer::getTitle(void) const
{
	return this->title;
}


/* OPERATOR OVERLOADS */

std::ostream&			operator<<(std::ostream& os, Sorcerer const& obj)
{
	os << "I am " << obj.getName() << ' ' << obj.getTitle() << ", and I like ponies !" << std::endl;
	return os;
}

void					Sorcerer::operator=(Sorcerer const& obj)
{
	this->name = obj.name;
	this->title = obj.title;
}

/* MEMBER FUNCTIONS */

void			Sorcerer::polymorph(Victim const &obj)
{
	obj.getPolymorphed();
}
