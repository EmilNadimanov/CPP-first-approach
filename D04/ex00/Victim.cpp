#include "Victim.hpp"

/* CONSTRUCTORS */

						Victim::Victim()
{
	this->name = "Freddy";
	std::cout << "Some random victim named Freddy just popped !" << std::endl;
}

						Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim named " << name << " just popped !" << std::endl;
}

						Victim::Victim(Victim const& obj)
{
	this->name = obj.name;
	std::cout << "Some random victim named " << name << " just popped !" << std::endl;
}

/* DESTRUCTOR */

						Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

/* GETTERS AND SETTERS */

std::string				Victim::getName(void) const
{
	return this->name;
}

/* OPERATOR OVERLOADS */

std::ostream&			operator<<(std::ostream& os, Victim const& obj)
{
	os << "I am " << obj.getName() << ", and I like otters !" << std::endl;
	return os;
}

void					Victim::operator=(Victim const& obj)
{
	this->name = obj.name;
}

/* MEMBER FUNCTIONS */

void					Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}
